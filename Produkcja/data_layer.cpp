#include "data_layer.h"

#include <QFile>
#include <QTextStream>
#include <type_traits>
#include <QDebug>

#include "qcustomplot.h"

template< class Enum >
constexpr std::underlying_type_t<Enum> to_underlying(Enum e) noexcept
{
    return static_cast<std::underlying_type_t<Enum>>(e);
};

void data_layer::init()
{
}

void data_layer::write_liniowa(int a, int b, QString path)
{
    QFile RecoveryFile(path);
    RecoveryFile.open(QIODevice::WriteOnly);

	QTextStream out(&RecoveryFile);
    out << to_underlying(function_type_id_t::liniowa) << "\n"
        << QString::number(a) + "\n"
        << QString::number(b) + "\n";    // val of b parameter

    RecoveryFile.close();
}

void data_layer::write_log(int a, int b, int c, QString path)
{
    QFile RecoveryFile(path);
    RecoveryFile.open(QIODevice::WriteOnly);

	QTextStream out(&RecoveryFile);
    out << to_underlying(function_type_id_t::log) << "\n"
        << QString::number(a) + "\n"
        << QString::number(b) + "\n"
        << QString::number(c) + "\n";    

	RecoveryFile.close();
}

void data_layer::write_sin(int a, int f, int fi, int b, QString path)
{
    QFile RecoveryFile(path);
    RecoveryFile.open(QIODevice::WriteOnly);

	QTextStream out(&RecoveryFile);
    out << to_underlying(function_type_id_t::sin) << "\n"
        << QString::number(a) + "\n"
        << QString::number(f) + "\n"
        << QString::number(fi) + "\n"
        << QString::number(b) + "\n";    

	RecoveryFile.close();
}

void data_layer::write_pierwiastek(int a, int x, int d, QString path)
{
    QFile RecoveryFile(path);
    RecoveryFile.open(QIODevice::WriteOnly);

	QTextStream out(&RecoveryFile);
    out << to_underlying(function_type_id_t::pierwiastek) << "\n"
        << QString::number(a) + "\n"
        << QString::number(x) + "\n"
        << QString::number(d) + "\n";    

    RecoveryFile.close();
}

read_result_t data_layer::read(QString path)
{
    read_result_t out{};

    QString indicator_param;
    QString a_param;
    QString b_param;
    QString c_param;
    QString d_param;
    QFile file(path);

    file.open(QIODevice::ReadOnly | QIODevice::Text);

    if (file.isOpen()) {

        QTextStream in(&file);
        indicator_param = file.readLine();

        switch (static_cast<fti_t>(indicator_param.toInt()))
        {
        case fti_t::liniowa:     // linear function
            a_param = in.readLine();
            b_param = in.readLine();

            out.liniowa.a = a_param.toInt();
            out.liniowa.b = b_param.toInt();
            out.liniowa.checked = true;

            break;

        case fti_t::log:           // logarithmic function
            a_param = in.readLine(); //a
            b_param = in.readLine(); // b
            d_param = in.readLine(); // c

            out.log.a = a_param.toInt();
            out.log.b = b_param.toInt();
            out.log.c = c_param.toInt();
            out.log.checked = true;

            break;

        case fti_t::sin:   // sinus
            a_param = in.readLine(); //A
            b_param = in.readLine(); // f
            c_param = in.readLine(); //fi
            d_param = in.readLine(); // B

            out.sin.a = a_param.toInt();
            out.sin.f = b_param.toInt();
            out.sin.fi = c_param.toInt();
            out.sin.b = d_param.toInt();
            out.sin.checked = true;

            break;

        case fti_t::pierwiastek:   //sqrt
            a_param = in.readLine(); //a
            b_param = in.readLine(); // x
            c_param = in.readLine(); //d

            out.pierw.a = a_param.toInt();
            out.pierw.x = b_param.toInt();
            out.pierw.d = c_param.toInt();
            out.pierw.checked = true;

            break;
        default:
            qDebug() << "unknown type of function error at switchcase reading from file....";
        }

    }

    file.close();

    return out;
}

void data_layer::write_pdf(QCustomPlot* plot, QString path)
{
    plot->saveJpg(path);
}

void data_layer::write_bmp(QCustomPlot* plot, QString path)
{
    plot->saveBmp(path);
}
