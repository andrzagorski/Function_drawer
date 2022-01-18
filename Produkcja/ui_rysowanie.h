/********************************************************************************
** Form generated from reading UI file 'rysowanie.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RYSOWANIE_H
#define UI_RYSOWANIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_rysowanie
{
public:
    QCustomPlot *myPlot;

    void setupUi(QDialog *rysowanie)
    {
        if (rysowanie->objectName().isEmpty())
            rysowanie->setObjectName(QString::fromUtf8("rysowanie"));
        rysowanie->resize(800, 600);
        rysowanie->setMinimumSize(QSize(800, 600));
        rysowanie->setMaximumSize(QSize(800, 600));
        myPlot = new QCustomPlot(rysowanie);
        myPlot->setObjectName(QString::fromUtf8("myPlot"));
        myPlot->setGeometry(QRect(10, 20, 781, 551));

        retranslateUi(rysowanie);

        QMetaObject::connectSlotsByName(rysowanie);
    } // setupUi

    void retranslateUi(QDialog *rysowanie)
    {
        rysowanie->setWindowTitle(QApplication::translate("rysowanie", "Plot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rysowanie: public Ui_rysowanie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RYSOWANIE_H
