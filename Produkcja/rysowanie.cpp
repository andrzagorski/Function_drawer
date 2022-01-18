#include "rysowanie.h"
#include "ui_rysowanie.h"
#include <QPainter>
#include <cmath>
#include <QPixmap>
#include <typeinfo>


rysowanie::rysowanie(gui_layer* gui_layer, QWidget *parent)
	:
    QDialog(parent),
	m_gui_layer(gui_layer),
    ui(new Ui::rysowanie)
{
    ui->setupUi(this);
}

rysowanie::~rysowanie()
{
    delete ui;
}

void rysowanie::setAdditionalOptions(bool m_zerowe, bool m_oy, bool m_ekstremum)
{
    m_show_roots = m_zerowe;
    m_show_y_intersectios = m_oy;
}

void rysowanie::set_coordinate_system(QVector2D min, QVector2D max)
{
    m_min = min;    // wartosci min dla x i y
    m_max = max;        // wartosci max dla x i y
    m_size = QVector2D(abs(min.x() - max.x()), abs(min.y() - max.y()));
}

void rysowanie::set_resolution(int res)
{
    m_resolution = res;
}

void rysowanie::set_functions(const std::vector<std::function<double(double)>>& functions,
    const std::vector<QColor>& colors)
{
    m_functions = functions;
    m_colors = colors;
}

void rysowanie::clear()
{
    ui->myPlot->clearGraphs();
    ui->myPlot->replot();
}

void rysowanie::plot()
{
    ui->myPlot->xAxis->setLabel("x");
    ui->myPlot->yAxis->setLabel("y");

    ui->myPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

    int count = 0;
    for(const auto& func : m_functions)
    {
        int size = static_cast<int>((m_max.x() + abs(m_min.x())) * m_resolution);

        QVector<double> x(size), y(size);
        for (int i = 0; i < size; ++i)
        {
            x[i] = i / static_cast<double>(m_resolution) + m_min.x();
            y[i] = func(x[i]);
        }

        ui->myPlot->addGraph();
        ui->myPlot->graph(count)->setData(x, y);

        ui->myPlot->graph(count)->setPen(QPen(m_colors[count]));

        ++count;
    }

    ui->myPlot->xAxis->setRange(m_min.x(), m_max.x());
    ui->myPlot->yAxis->setRange(m_min.y(), m_max.y());

    ui->myPlot->replot();
}

QCustomPlot* rysowanie::get_custom_plot_engine() const noexcept
{
    return ui->myPlot;
}
