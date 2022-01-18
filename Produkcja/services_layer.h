#pragma once

#include <memory>
#include <vector>
#include <functional>
#include <QVector2D>
#include <QColor>

class gui_layer;
class data_layer;
class services_layer;
class QCustomPlot;

struct read_result_t
{
	struct
	{
		int a;
		int b;
		bool checked;
	} liniowa;

	struct
	{
		int a;
		int b;
		int c;
		bool checked;
	} log;

	struct
	{
		int a;
		int f;
		int fi;
		int b;
		bool checked;
	} sin;

	struct
	{
		int a;
		int x;
		int d;
		bool checked;
	} pierw;
};

class child_layer
{
	std::weak_ptr<services_layer> m_services_layer;

public:
	void set_services_layer(std::weak_ptr<services_layer> l);
	services_layer* get_services_layer() const noexcept;
};

class services_layer :
	public std::enable_shared_from_this<services_layer>
{
	std::weak_ptr<gui_layer> m_gui_layer;
	std::weak_ptr<data_layer> m_data_layer;

public:
	void set_gui_layer(std::weak_ptr<gui_layer> l);
	void set_data_layer(std::weak_ptr<data_layer> l); 

public:
	void init();

public:
	void draw_graph(
		int rozdzialka,
		QVector2D min,
		QVector2D max,
		const std::vector<std::function<double(double)>>& plots,
		const std::vector<QColor>& colors
	);

public:
	void write_liniowa(int a, int b, QString path);
	void write_log(int a, int b, int c, QString path);
	void write_sin(int a, int f, int fi, int b, QString path);
	void write_pierwiastek(int a, int x, int d, QString path);

public:
	read_result_t read(QString path);

public:
	void write_pdf(QCustomPlot* plot, QString path);
	void write_bmp(QCustomPlot* plot, QString path);
};

