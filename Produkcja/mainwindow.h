#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rysowanie.h"

class gui_layer;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

	gui_layer* m_gui_layer;
public:
    MainWindow(gui_layer* gui_layer, QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_draw_button_clicked();

    void on_actionFunkcji_liniowej_triggered();

    void on_actionFunkcji_logarytmicznej_triggered();

    void on_actionFunkcji_sinusoidalnej_triggered();

    void on_actionFunkcji_pierwiastkowej_triggered();

    void on_actionEksportuj_wykres_do_bitmapy_triggered();

    void on_actionWykres_do_PDF_triggered();

    void on_actionWarto_ci_funkcji_z_pliku_triggered();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
