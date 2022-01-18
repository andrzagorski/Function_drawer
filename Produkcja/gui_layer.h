#pragma once

#include <memory>
#include <QScopedPointer>

#include "mainwindow.h"
#include "services_layer.h"

class gui_layer :
	public child_layer
{
	QScopedPointer<MainWindow> m_main_window;
	QScopedPointer<rysowanie> m_rysowanie;

public:
	void init();

public:
	void plot_set_parameters(
		int rozdzialka,
		QVector2D min,
		QVector2D max,
		const std::vector<std::function<double(double)>>& plots,
		const std::vector<QColor>& colors
	);

	void plot_clear();
	void plot_draw();

public:
	void write_pdf(QString path);
	void write_bmp(QString path);

private:
	void show();
};