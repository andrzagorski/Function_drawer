#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

#include <memory>

#include "data_layer.h"
#include "gui_layer.h"
#include "services_layer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "function_drawer_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }

    std::shared_ptr<data_layer> _data_layer
		= std::make_shared<data_layer>();

    std::shared_ptr<gui_layer> _gui_layer
        = std::make_shared<gui_layer>();

    std::shared_ptr<services_layer> _services_layer
        = std::make_shared<services_layer>();

    _services_layer->set_data_layer(_data_layer);
    _services_layer->set_gui_layer(_gui_layer);

    _services_layer->init();

    return a.exec();
}
