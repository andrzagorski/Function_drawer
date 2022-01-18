/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEksportuj_wykres_do_bitmapy;
    QAction *actionFunkcji_liniowej;
    QAction *actionFunkcji_logarytmicznej;
    QAction *actionFunkcji_sinusoidalnej;
    QAction *actionFunkcji_pierwiastkowej;
    QAction *actionFunkcja_liniowa;
    QAction *actionFunkcja_logarytmiczna;
    QAction *actionFunkcja_sinusoidalna;
    QAction *actionFunkcja_pierwiastkowa;
    QAction *actionWykres_do_PDF;
    QAction *actionWarto_ci_funkcji_z_pliku;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *draw_button;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_30;
    QSpinBox *spinBox_resolution;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QCheckBox *check_liniowa;
    QLabel *label;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinBox_liniowa_a;
    QLabel *label_3;
    QSpinBox *spinBox_liniowa_b;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QCheckBox *check_logarytmiczna;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QSpinBox *spinBox_logA;
    QLabel *label_15;
    QSpinBox *spinBox_logB;
    QLabel *label_16;
    QSpinBox *spinBox_logC;
    QLabel *label_11;
    QFormLayout *formLayout_3;
    QLabel *label_4;
    QCheckBox *check_sinusoidalna;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QSpinBox *spinBox_sinA;
    QLabel *label_9;
    QSpinBox *spinBox_sinf;
    QLabel *label_17;
    QSpinBox *spinBox_sinFi;
    QLabel *label_18;
    QSpinBox *spinBox_sinB;
    QFormLayout *formLayout_4;
    QCheckBox *check_pierwiastkowa;
    QLabel *label_7;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_20;
    QSpinBox *spinBox_sqrtA;
    QLabel *label_21;
    QSpinBox *spinBox_sqrtX;
    QLabel *label_22;
    QSpinBox *spinBox_sqrtD;
    QLabel *label_23;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QGridLayout *gridLayout;
    QSpinBox *spinBox_zakY_min;
    QLabel *label_27;
    QSpinBox *spinBox_zakX_min;
    QSpinBox *spinBox_zakY_max;
    QLabel *label_25;
    QLabel *label_24;
    QSpinBox *spinBox_zakX_max;
    QLabel *label_26;
    QMenuBar *menubar;
    QMenu *menuEksportuj;
    QMenu *menuWarto_ci_funkcji_do_pliku;
    QMenu *menuImportuj;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(470, 523);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(470, 523));
        MainWindow->setMaximumSize(QSize(470, 523));
        actionEksportuj_wykres_do_bitmapy = new QAction(MainWindow);
        actionEksportuj_wykres_do_bitmapy->setObjectName(QString::fromUtf8("actionEksportuj_wykres_do_bitmapy"));
        actionFunkcji_liniowej = new QAction(MainWindow);
        actionFunkcji_liniowej->setObjectName(QString::fromUtf8("actionFunkcji_liniowej"));
        actionFunkcji_logarytmicznej = new QAction(MainWindow);
        actionFunkcji_logarytmicznej->setObjectName(QString::fromUtf8("actionFunkcji_logarytmicznej"));
        actionFunkcji_sinusoidalnej = new QAction(MainWindow);
        actionFunkcji_sinusoidalnej->setObjectName(QString::fromUtf8("actionFunkcji_sinusoidalnej"));
        actionFunkcji_pierwiastkowej = new QAction(MainWindow);
        actionFunkcji_pierwiastkowej->setObjectName(QString::fromUtf8("actionFunkcji_pierwiastkowej"));
        actionFunkcja_liniowa = new QAction(MainWindow);
        actionFunkcja_liniowa->setObjectName(QString::fromUtf8("actionFunkcja_liniowa"));
        actionFunkcja_logarytmiczna = new QAction(MainWindow);
        actionFunkcja_logarytmiczna->setObjectName(QString::fromUtf8("actionFunkcja_logarytmiczna"));
        actionFunkcja_sinusoidalna = new QAction(MainWindow);
        actionFunkcja_sinusoidalna->setObjectName(QString::fromUtf8("actionFunkcja_sinusoidalna"));
        actionFunkcja_pierwiastkowa = new QAction(MainWindow);
        actionFunkcja_pierwiastkowa->setObjectName(QString::fromUtf8("actionFunkcja_pierwiastkowa"));
        actionWykres_do_PDF = new QAction(MainWindow);
        actionWykres_do_PDF->setObjectName(QString::fromUtf8("actionWykres_do_PDF"));
        actionWarto_ci_funkcji_z_pliku = new QAction(MainWindow);
        actionWarto_ci_funkcji_z_pliku->setObjectName(QString::fromUtf8("actionWarto_ci_funkcji_z_pliku"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        draw_button = new QPushButton(centralwidget);
        draw_button->setObjectName(QString::fromUtf8("draw_button"));
        draw_button->setCheckable(false);

        verticalLayout_4->addWidget(draw_button);


        gridLayout_2->addLayout(verticalLayout_4, 3, 0, 1, 2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_30 = new QLabel(centralwidget);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_30);

        spinBox_resolution = new QSpinBox(centralwidget);
        spinBox_resolution->setObjectName(QString::fromUtf8("spinBox_resolution"));
        spinBox_resolution->setMinimum(3);
        spinBox_resolution->setMaximum(10000);
        spinBox_resolution->setSingleStep(10);
        spinBox_resolution->setValue(100);

        verticalLayout_5->addWidget(spinBox_resolution);


        gridLayout_2->addLayout(verticalLayout_5, 2, 0, 1, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        check_liniowa = new QCheckBox(centralwidget);
        check_liniowa->setObjectName(QString::fromUtf8("check_liniowa"));
        check_liniowa->setChecked(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, check_liniowa);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, label);


        verticalLayout_3->addLayout(formLayout);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_3->addWidget(label_12);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spinBox_liniowa_a = new QSpinBox(centralwidget);
        spinBox_liniowa_a->setObjectName(QString::fromUtf8("spinBox_liniowa_a"));
        spinBox_liniowa_a->setMinimum(-99);
        spinBox_liniowa_a->setValue(1);

        horizontalLayout_2->addWidget(spinBox_liniowa_a);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        spinBox_liniowa_b = new QSpinBox(centralwidget);
        spinBox_liniowa_b->setObjectName(QString::fromUtf8("spinBox_liniowa_b"));
        spinBox_liniowa_b->setMinimum(-99);
        spinBox_liniowa_b->setValue(5);

        horizontalLayout_2->addWidget(spinBox_liniowa_b);


        verticalLayout_3->addLayout(horizontalLayout_2);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, label_5);

        check_logarytmiczna = new QCheckBox(centralwidget);
        check_logarytmiczna->setObjectName(QString::fromUtf8("check_logarytmiczna"));
        check_logarytmiczna->setChecked(true);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, check_logarytmiczna);


        verticalLayout_3->addLayout(formLayout_2);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_3->addWidget(label_13);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_4->addWidget(label_10);

        spinBox_logA = new QSpinBox(centralwidget);
        spinBox_logA->setObjectName(QString::fromUtf8("spinBox_logA"));
        spinBox_logA->setValue(1);

        horizontalLayout_4->addWidget(spinBox_logA);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_4->addWidget(label_15);

        spinBox_logB = new QSpinBox(centralwidget);
        spinBox_logB->setObjectName(QString::fromUtf8("spinBox_logB"));
        spinBox_logB->setMinimum(0);
        spinBox_logB->setValue(2);

        horizontalLayout_4->addWidget(spinBox_logB);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_4->addWidget(label_16);

        spinBox_logC = new QSpinBox(centralwidget);
        spinBox_logC->setObjectName(QString::fromUtf8("spinBox_logC"));

        horizontalLayout_4->addWidget(spinBox_logC);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_4->addWidget(label_11);


        verticalLayout_3->addLayout(horizontalLayout_4);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, label_4);

        check_sinusoidalna = new QCheckBox(centralwidget);
        check_sinusoidalna->setObjectName(QString::fromUtf8("check_sinusoidalna"));
        check_sinusoidalna->setChecked(true);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, check_sinusoidalna);


        verticalLayout_3->addLayout(formLayout_3);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_3->addWidget(label_14);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_3->addWidget(label_8);

        spinBox_sinA = new QSpinBox(centralwidget);
        spinBox_sinA->setObjectName(QString::fromUtf8("spinBox_sinA"));
        spinBox_sinA->setValue(1);

        horizontalLayout_3->addWidget(spinBox_sinA);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_3->addWidget(label_9);

        spinBox_sinf = new QSpinBox(centralwidget);
        spinBox_sinf->setObjectName(QString::fromUtf8("spinBox_sinf"));
        spinBox_sinf->setValue(1);

        horizontalLayout_3->addWidget(spinBox_sinf);

        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_3->addWidget(label_17);

        spinBox_sinFi = new QSpinBox(centralwidget);
        spinBox_sinFi->setObjectName(QString::fromUtf8("spinBox_sinFi"));

        horizontalLayout_3->addWidget(spinBox_sinFi);

        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_3->addWidget(label_18);

        spinBox_sinB = new QSpinBox(centralwidget);
        spinBox_sinB->setObjectName(QString::fromUtf8("spinBox_sinB"));

        horizontalLayout_3->addWidget(spinBox_sinB);


        verticalLayout_3->addLayout(horizontalLayout_3);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        check_pierwiastkowa = new QCheckBox(centralwidget);
        check_pierwiastkowa->setObjectName(QString::fromUtf8("check_pierwiastkowa"));
        check_pierwiastkowa->setChecked(true);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, check_pierwiastkowa);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, label_7);


        verticalLayout_3->addLayout(formLayout_4);

        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_3->addWidget(label_19);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_5->addWidget(label_20);

        spinBox_sqrtA = new QSpinBox(centralwidget);
        spinBox_sqrtA->setObjectName(QString::fromUtf8("spinBox_sqrtA"));
        spinBox_sqrtA->setValue(1);

        horizontalLayout_5->addWidget(spinBox_sqrtA);

        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_5->addWidget(label_21);

        spinBox_sqrtX = new QSpinBox(centralwidget);
        spinBox_sqrtX->setObjectName(QString::fromUtf8("spinBox_sqrtX"));
        spinBox_sqrtX->setValue(1);

        horizontalLayout_5->addWidget(spinBox_sqrtX);

        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_5->addWidget(label_22);

        spinBox_sqrtD = new QSpinBox(centralwidget);
        spinBox_sqrtD->setObjectName(QString::fromUtf8("spinBox_sqrtD"));

        horizontalLayout_5->addWidget(spinBox_sqrtD);

        label_23 = new QLabel(centralwidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_5->addWidget(label_23);


        verticalLayout_3->addLayout(horizontalLayout_5);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_6);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spinBox_zakY_min = new QSpinBox(centralwidget);
        spinBox_zakY_min->setObjectName(QString::fromUtf8("spinBox_zakY_min"));
        spinBox_zakY_min->setMinimum(-9999);
        spinBox_zakY_min->setMaximum(99999);
        spinBox_zakY_min->setValue(-10);

        gridLayout->addWidget(spinBox_zakY_min, 1, 1, 1, 1);

        label_27 = new QLabel(centralwidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout->addWidget(label_27, 1, 2, 1, 1);

        spinBox_zakX_min = new QSpinBox(centralwidget);
        spinBox_zakX_min->setObjectName(QString::fromUtf8("spinBox_zakX_min"));
        spinBox_zakX_min->setMinimum(-99);
        spinBox_zakX_min->setValue(-10);

        gridLayout->addWidget(spinBox_zakX_min, 0, 1, 1, 1);

        spinBox_zakY_max = new QSpinBox(centralwidget);
        spinBox_zakY_max->setObjectName(QString::fromUtf8("spinBox_zakY_max"));
        spinBox_zakY_max->setMinimum(-99);
        spinBox_zakY_max->setValue(10);

        gridLayout->addWidget(spinBox_zakY_max, 1, 3, 1, 1);

        label_25 = new QLabel(centralwidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout->addWidget(label_25, 0, 2, 1, 1);

        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout->addWidget(label_24, 0, 0, 1, 1);

        spinBox_zakX_max = new QSpinBox(centralwidget);
        spinBox_zakX_max->setObjectName(QString::fromUtf8("spinBox_zakX_max"));
        spinBox_zakX_max->setMinimum(-99);
        spinBox_zakX_max->setValue(10);

        gridLayout->addWidget(spinBox_zakX_max, 0, 3, 1, 1);

        label_26 = new QLabel(centralwidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout->addWidget(label_26, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 470, 20));
        menuEksportuj = new QMenu(menubar);
        menuEksportuj->setObjectName(QString::fromUtf8("menuEksportuj"));
        menuWarto_ci_funkcji_do_pliku = new QMenu(menuEksportuj);
        menuWarto_ci_funkcji_do_pliku->setObjectName(QString::fromUtf8("menuWarto_ci_funkcji_do_pliku"));
        menuImportuj = new QMenu(menubar);
        menuImportuj->setObjectName(QString::fromUtf8("menuImportuj"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuEksportuj->menuAction());
        menubar->addAction(menuImportuj->menuAction());
        menuEksportuj->addAction(actionEksportuj_wykres_do_bitmapy);
        menuEksportuj->addAction(actionWykres_do_PDF);
        menuEksportuj->addAction(menuWarto_ci_funkcji_do_pliku->menuAction());
        menuWarto_ci_funkcji_do_pliku->addAction(actionFunkcji_liniowej);
        menuWarto_ci_funkcji_do_pliku->addAction(actionFunkcji_logarytmicznej);
        menuWarto_ci_funkcji_do_pliku->addAction(actionFunkcji_sinusoidalnej);
        menuWarto_ci_funkcji_do_pliku->addAction(actionFunkcji_pierwiastkowej);
        menuImportuj->addAction(actionWarto_ci_funkcji_z_pliku);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Function Drawer V1.0.2", nullptr));
        actionEksportuj_wykres_do_bitmapy->setText(QApplication::translate("MainWindow", "Wykres do bitmapy", nullptr));
        actionFunkcji_liniowej->setText(QApplication::translate("MainWindow", "Funkcji liniowej", nullptr));
        actionFunkcji_logarytmicznej->setText(QApplication::translate("MainWindow", "Funkcji logarytmicznej", nullptr));
        actionFunkcji_sinusoidalnej->setText(QApplication::translate("MainWindow", "Funkcji sinusoidalnej", nullptr));
        actionFunkcji_pierwiastkowej->setText(QApplication::translate("MainWindow", "Funkcji pierwiastkowej", nullptr));
        actionFunkcja_liniowa->setText(QApplication::translate("MainWindow", "Funkcja liniowa", nullptr));
        actionFunkcja_logarytmiczna->setText(QApplication::translate("MainWindow", "Funkcja logarytmiczna", nullptr));
        actionFunkcja_sinusoidalna->setText(QApplication::translate("MainWindow", "Funkcja sinusoidalna", nullptr));
        actionFunkcja_pierwiastkowa->setText(QApplication::translate("MainWindow", "Funkcja pierwiastkowa", nullptr));
        actionWykres_do_PDF->setText(QApplication::translate("MainWindow", "Wykres do PDF", nullptr));
        actionWarto_ci_funkcji_z_pliku->setText(QApplication::translate("MainWindow", "Warto\305\233ci funkcji z pliku", nullptr));
        draw_button->setText(QApplication::translate("MainWindow", "RYSUJ", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "Liczba punkt\303\263w na jednostk\304\231:", nullptr));
        check_liniowa->setText(QString());
        label->setText(QApplication::translate("MainWindow", "funkcja liniowa:", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "                                                    a                                                                           b", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "f(x)=", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "x +", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "funkcja logarytmiczna", nullptr));
        check_logarytmiczna->setText(QString());
        label_13->setText(QApplication::translate("MainWindow", "                    a                                        b                                                      c", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "f(x)=", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "log", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "x +", nullptr));
        label_11->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "funkcja sinusoidalna", nullptr));
        check_sinusoidalna->setText(QString());
        label_14->setText(QApplication::translate("MainWindow", "                         A                                   f                                     \317\206                                  B    ", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "f(x)= ", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "sin(2*\317\200*", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "x+", nullptr));
        label_18->setText(QApplication::translate("MainWindow", ")+", nullptr));
        check_pierwiastkowa->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "funkcja pierwiastkowa", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "                              a                                        f                                        d", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "f(x)=", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "sqrt           (", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "x ) +", nullptr));
        label_23->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Zakres prezentacji:", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "do:", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "do:", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "X od:", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "Y od:", nullptr));
        menuEksportuj->setTitle(QApplication::translate("MainWindow", "Eksportuj", nullptr));
        menuWarto_ci_funkcji_do_pliku->setTitle(QApplication::translate("MainWindow", "Warto\305\233ci funkcji do pliku ", nullptr));
        menuImportuj->setTitle(QApplication::translate("MainWindow", "Importuj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
