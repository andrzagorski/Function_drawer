#pragma once

#include <memory>
#include <QString>


#include "services_layer.h"

class QCustomPlot;

class data_layer
	: public child_layer
{
private:
	typedef enum class function_type_id_t
	{
		liniowa,
		log,
		sin,
		pierwiastek
	} fti_t;

public:
	void init();

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