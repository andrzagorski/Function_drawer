#include "mainwindow.h"

#include "gui_layer.h"
#include "ui_mainwindow.h"
#include "rysowanie.h"
#include "QtMath"
#include "QFileDialog"

MainWindow::MainWindow(gui_layer* gui_layer, QWidget *parent)
    :
	QMainWindow(parent),
	ui(new Ui::MainWindow),
	m_gui_layer(gui_layer)
{
    ui->setupUi(this);
    ui->draw_button->setStyleSheet("background-color:Aquamarine");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_draw_button_clicked()
{
    bool valid_arguments = true;
    bool checked = false;

    int rozdzialka = ui->spinBox_resolution->value();
    QVector2D min =
    {
        static_cast<float>(ui->spinBox_zakX_min->value()),
        static_cast<float>(ui->spinBox_zakY_min->value())
    };

    QVector2D max =
    {
        static_cast<float>(ui->spinBox_zakX_max->value()),
        static_cast<float>(ui->spinBox_zakY_max->value())
    };

    std::vector<std::function<double(double)>> plots;
    std::vector<QColor> colors;

    if(ui->check_liniowa->isChecked())
    {
        checked = true;
        plots.emplace_back(
            [
                a = static_cast<double>(ui->spinBox_liniowa_a->value()),
                b = static_cast<double>(ui->spinBox_liniowa_b->value())
            ](double x) -> double
        {
            return a * x + b;
        }
        );
        colors.emplace_back(Qt::GlobalColor::black);
    }

    if(ui->check_logarytmiczna->isChecked())
    {
        checked = true;
    	if(
            ui->spinBox_logB->value() == 1 || ui->spinBox_logB->value() <= 0
            )
        {
            valid_arguments = false;
            statusBar()->showMessage("Zaznacz poprawna podstawe logarytmu!");
        }

        plots.emplace_back(
            [
                a = static_cast<double>(ui->spinBox_logA->value()),
                b = static_cast<double>(ui->spinBox_logB->value()),
                c = static_cast<double>(ui->spinBox_logC->value())
            ](double x) -> double
        {
                // Gdzie b?
            return ((a * log(x)) + c);
        }
        );

        colors.emplace_back(Qt::GlobalColor::red);
    }

    if(ui->check_sinusoidalna->isChecked())
    {
        checked = true;

        plots.emplace_back(
            [
                a = static_cast<double>(ui->spinBox_sinA->value()),
                f = static_cast<double>(ui->spinBox_sinf->value()),
                fi = static_cast<double>(ui->spinBox_sinFi->value()),
                b = static_cast<double>(ui->spinBox_sinB->value())
            ](double x) -> double
        {
            return a * qSin(2 * M_PI * f * x + fi) + b;
        }
        );

        colors.emplace_back(Qt::GlobalColor::green);
    }

    if(ui->check_pierwiastkowa->isChecked())
    {
        checked = true;

        plots.emplace_back(
            [
                a = ui->spinBox_sqrtA->value(),
                _x = ui->spinBox_sqrtX->value(),
                d = ui->spinBox_sqrtD->value()
                ](double x) -> double
        {
            return a * sqrt(_x * x) + d;
        });

        colors.emplace_back(Qt::GlobalColor::blue);
    }
    
    if(checked && valid_arguments)
    {
        m_gui_layer->get_services_layer()->draw_graph(
            rozdzialka,
            min,
            max,
            plots,
            colors
        );
    }
    else
    {
	    statusBar()->showMessage("Zaznacz wykres do narysowania lub popraw dane w formularzu!");
    }
}

void MainWindow::on_actionFunkcji_liniowej_triggered()
{
	QString path = QFileDialog::getSaveFileName(this, "Save file", "Values of linear function", "*.txt" );

	m_gui_layer->get_services_layer()->write_liniowa
	(ui->spinBox_liniowa_a->value(),ui->spinBox_liniowa_b->value(),path);
}


void MainWindow::on_actionFunkcji_logarytmicznej_triggered()
{
    QString path = QFileDialog::getSaveFileName(this, "Save file", "Values of logarithmic function", "*.txt" );

    m_gui_layer->get_services_layer()->write_log
	(ui->spinBox_logA->value(),ui->spinBox_logB->value(),ui->spinBox_logC->value(),path);
}


void MainWindow::on_actionFunkcji_sinusoidalnej_triggered()
{
	QString path = QFileDialog::getSaveFileName(this, "Save file", "Values of sinus function", "*.txt" );

    m_gui_layer->get_services_layer()->write_sin
	(ui->spinBox_sinA->value(),ui->spinBox_sinf->value(),ui->spinBox_sinFi->value(),ui->spinBox_sinB->value(),path);
}


void MainWindow::on_actionFunkcji_pierwiastkowej_triggered()
{
	QString path = QFileDialog::getSaveFileName(this, "Save file", "Values of sqrt function", "*.txt" );

    m_gui_layer->get_services_layer()->write_pierwiastek
	(ui->spinBox_sqrtA->value(),ui->spinBox_sqrtX->value(),ui->spinBox_sqrtD->value(),path);
}

void MainWindow::on_actionEksportuj_wykres_do_bitmapy_triggered()
{
    QString path = QFileDialog::getSaveFileName(this, "Save file", "My Chart Drawing", "*.bmp" );

    m_gui_layer->write_bmp(path);
}

void MainWindow::on_actionWykres_do_PDF_triggered()
{
    QString path = QFileDialog::getSaveFileName(this, "Save file", "My Chart Drawing", "*.jpg" );
    m_gui_layer->write_pdf(path);
}

void MainWindow::on_actionWarto_ci_funkcji_z_pliku_triggered()
{
    QString path = QFileDialog::getOpenFileName(this, "Open file...", "", "*.txt" );

    auto data = m_gui_layer->get_services_layer()->read(path);

    if(data.liniowa.checked)
    {
        ui->spinBox_liniowa_a->setValue(data.liniowa.a);
        ui->spinBox_liniowa_b->setValue(data.liniowa.b);
    }
    ui->check_liniowa->setChecked(data.liniowa.checked);

    if (data.log.checked)
    {
        ui->spinBox_logA->setValue(data.log.a);
        ui->spinBox_logB->setValue(data.log.b);
        ui->spinBox_logC->setValue(data.log.c);
    }
    ui->check_logarytmiczna->setChecked(data.log.checked);

    if (data.sin.checked)
    {
        ui->spinBox_sinA->setValue(data.sin.a);
        ui->spinBox_sinf->setValue(data.sin.f);
        ui->spinBox_sinFi->setValue(data.sin.fi);
        ui->spinBox_sinB->setValue(data.sin.b);
    }
    ui->check_sinusoidalna->setChecked(data.sin.checked);

    if (data.pierw.checked)
    {
        ui->spinBox_sqrtA->setValue(data.pierw.a);
        ui->spinBox_sqrtX->setValue(data.pierw.x);
        ui->spinBox_sqrtD->setValue(data.pierw.d);
    }
    ui->check_pierwiastkowa->setChecked(data.pierw.checked);


    // HACK:
    this->on_draw_button_clicked();
}
