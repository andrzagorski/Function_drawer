#include "gui_layer.h"

void gui_layer::init()
{
	m_main_window.reset(new MainWindow(this));
	m_rysowanie.reset(new rysowanie(this, nullptr));

	this->show();
}

void gui_layer::plot_set_parameters(int rozdzialka, QVector2D min, QVector2D max,
	const std::vector<std::function<double(double)>>& plots,
	const std::vector<QColor>& colors)
{
	m_rysowanie->set_resolution(rozdzialka);
	m_rysowanie->set_coordinate_system(min, max);
	m_rysowanie->set_functions(plots, colors);
}

void gui_layer::plot_clear()
{
	m_rysowanie->clear();
}

void gui_layer::plot_draw()
{
	m_rysowanie->plot();
	m_rysowanie->show();
	m_rysowanie->update();
}

void gui_layer::write_pdf(QString path)
{
	get_services_layer()->write_pdf(m_rysowanie->get_custom_plot_engine(), path);
}

void gui_layer::write_bmp(QString path)
{
	get_services_layer()->write_bmp(m_rysowanie->get_custom_plot_engine(), path);
}

void gui_layer::show()
{
	m_main_window->show();
}
