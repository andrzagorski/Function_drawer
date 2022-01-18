#ifndef RYSOWANIE_H
#define RYSOWANIE_H

#include <QDialog>
#include <QVector2D>
#include <functional>

class gui_layer;
class QCustomPlot;

namespace Ui {
class rysowanie;
}

class rysowanie : public QDialog
{
    Q_OBJECT

	gui_layer* m_gui_layer;

private:
    Ui::rysowanie* ui;
    QVector2D m_min;
    QVector2D m_max;
    QVector2D m_size;
    int m_resolution = 100;

    std::vector<std::function<double(double)>> m_functions;
    std::vector<QColor> m_colors;

public:
    explicit rysowanie(gui_layer* gui_layer, QWidget *parent = nullptr);
    ~rysowanie();

    void set_coordinate_system(QVector2D min, QVector2D max);
    void set_resolution(int res);
    void set_functions(const std::vector<std::function<double(double)>>& functions,
        const std::vector<QColor>& colors);

    void clear();
    void plot();
    
public:
    QCustomPlot* get_custom_plot_engine() const noexcept;

    // TODO:
private:
    bool m_show_roots, m_show_y_intersectios;

public:
    void setAdditionalOptions(bool m_zerowe, bool m_oy, bool m_ekstremum);


};

#endif // RYSOWANIE_H
