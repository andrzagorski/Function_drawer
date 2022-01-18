#include "services_layer.h"
#include "gui_layer.h"
#include "data_layer.h"

void child_layer::set_services_layer(std::weak_ptr<services_layer> l)
{
	m_services_layer = l;
}

services_layer* child_layer::get_services_layer() const noexcept
{
	return m_services_layer.lock().get();
}

void services_layer::set_gui_layer(std::weak_ptr<gui_layer> l)
{
	l.lock()->set_services_layer(weak_from_this());
	m_gui_layer = l;
}

void services_layer::set_data_layer(std::weak_ptr<data_layer> l)
{
	l.lock()->set_services_layer(weak_from_this());
	m_data_layer = l;
}

void services_layer::init()
{
	m_gui_layer.lock()->init();
	m_data_layer.lock()->init();
}

void services_layer::draw_graph(int rozdzialka, QVector2D min, QVector2D max,
	const std::vector<std::function<double(double)>>& plots,
	const std::vector<QColor>& colors)
{
	auto gui_layer = m_gui_layer.lock().get();

	gui_layer->plot_clear();

	gui_layer->plot_set_parameters(
		rozdzialka,
		min,
		max,
		plots,
		colors
	);

	gui_layer->plot_draw();
}

void services_layer::write_liniowa(int a, int b, QString path)
{
	m_data_layer.lock()->write_liniowa(a, b, path);
}

void services_layer::write_log(int a, int b, int c, QString path)
{
	m_data_layer.lock()->write_log(a, b, c, path);
}

void services_layer::write_sin(int a, int f, int fi, int b, QString path)
{
	m_data_layer.lock()->write_sin(a, f, fi, b, path);
}

void services_layer::write_pierwiastek(int a, int x, int d, QString path)
{
	m_data_layer.lock()->write_pierwiastek(a, x, d, path);
}

read_result_t services_layer::read(QString path)
{
	return m_data_layer.lock()->read(path);
}

void services_layer::write_pdf(QCustomPlot* plot, QString path)
{
	m_data_layer.lock()->write_pdf(plot, path);
}

void services_layer::write_bmp(QCustomPlot* plot, QString path)
{
	m_data_layer.lock()->write_bmp(plot, path);
}
