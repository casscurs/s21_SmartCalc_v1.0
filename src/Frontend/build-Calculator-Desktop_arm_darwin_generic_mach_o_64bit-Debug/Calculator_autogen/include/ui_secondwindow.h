/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QCustomPlot *widget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_5;
    QLineEdit *lineEdit_Xmax;
    QLineEdit *lineEdit_Xrange;
    QLineEdit *lineEdit_formula;
    QLineEdit *lineEdit_Yrange;
    QLabel *label_Ymax;
    QLabel *label_2;
    QLineEdit *lineEdit_Xmin;
    QPushButton *pushButton_plot;
    QRadioButton *radioButton_line;
    QRadioButton *radioButton_points;

    void setupUi(QMainWindow *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName("SecondWindow");
        SecondWindow->resize(600, 600);
        centralwidget = new QWidget(SecondWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName("widget");

        verticalLayout->addWidget(widget);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout->addWidget(label_5, 0, 0, 1, 2);

        lineEdit_Xmax = new QLineEdit(centralwidget);
        lineEdit_Xmax->setObjectName("lineEdit_Xmax");
        lineEdit_Xmax->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignRight';\n"
"border: 1px solid black;\n"
"}\n"
"background-color: white;"));

        gridLayout->addWidget(lineEdit_Xmax, 2, 1, 1, 1);

        lineEdit_Xrange = new QLineEdit(centralwidget);
        lineEdit_Xrange->setObjectName("lineEdit_Xrange");
        lineEdit_Xrange->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignRight';\n"
"border: 1px solid black;\n"
"}\n"
"background-color: white;"));

        gridLayout->addWidget(lineEdit_Xrange, 1, 3, 1, 1);

        lineEdit_formula = new QLineEdit(centralwidget);
        lineEdit_formula->setObjectName("lineEdit_formula");
        lineEdit_formula->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignRight';\n"
"border: 1px solid black;\n"
"}\n"
"background-color: white;"));

        gridLayout->addWidget(lineEdit_formula, 0, 2, 1, 2);

        lineEdit_Yrange = new QLineEdit(centralwidget);
        lineEdit_Yrange->setObjectName("lineEdit_Yrange");
        lineEdit_Yrange->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignRight';\n"
"border: 1px solid black;\n"
"}\n"
"background-color: white;"));

        gridLayout->addWidget(lineEdit_Yrange, 2, 3, 1, 1);

        label_Ymax = new QLabel(centralwidget);
        label_Ymax->setObjectName("label_Ymax");
        label_Ymax->setFont(font);
        label_Ymax->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout->addWidget(label_Ymax, 2, 2, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lineEdit_Xmin = new QLineEdit(centralwidget);
        lineEdit_Xmin->setObjectName("lineEdit_Xmin");
        lineEdit_Xmin->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignRight';\n"
"border: 1px solid black;\n"
"}\n"
"background-color: white;"));

        gridLayout->addWidget(lineEdit_Xmin, 1, 1, 1, 1);

        pushButton_plot = new QPushButton(centralwidget);
        pushButton_plot->setObjectName("pushButton_plot");
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_plot->sizePolicy().hasHeightForWidth());
        pushButton_plot->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(false);
        pushButton_plot->setFont(font1);
        pushButton_plot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(95, 19, 135);\n"
"color: white;\n"
"border: none;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_plot, 0, 5, 3, 1);

        radioButton_line = new QRadioButton(centralwidget);
        radioButton_line->setObjectName("radioButton_line");
        sizePolicy.setHeightForWidth(radioButton_line->sizePolicy().hasHeightForWidth());
        radioButton_line->setSizePolicy(sizePolicy);
        radioButton_line->setFont(font);

        gridLayout->addWidget(radioButton_line, 0, 4, 1, 1);

        radioButton_points = new QRadioButton(centralwidget);
        radioButton_points->setObjectName("radioButton_points");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(radioButton_points->sizePolicy().hasHeightForWidth());
        radioButton_points->setSizePolicy(sizePolicy2);
        radioButton_points->setFont(font);

        gridLayout->addWidget(radioButton_points, 1, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);

        SecondWindow->setCentralWidget(centralwidget);

        retranslateUi(SecondWindow);

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SecondWindow)
    {
        SecondWindow->setWindowTitle(QCoreApplication::translate("SecondWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("SecondWindow", "Xrange", nullptr));
        label->setText(QCoreApplication::translate("SecondWindow", "Xmin", nullptr));
        label_5->setText(QCoreApplication::translate("SecondWindow", "\320\244\320\276\321\200\320\274\321\203\320\273\320\260", nullptr));
        lineEdit_Xmax->setText(QCoreApplication::translate("SecondWindow", "100", nullptr));
        lineEdit_Xrange->setText(QCoreApplication::translate("SecondWindow", "100", nullptr));
        lineEdit_Yrange->setText(QCoreApplication::translate("SecondWindow", "100", nullptr));
        label_Ymax->setText(QCoreApplication::translate("SecondWindow", "Yrange", nullptr));
        label_2->setText(QCoreApplication::translate("SecondWindow", "Xmax", nullptr));
        lineEdit_Xmin->setText(QCoreApplication::translate("SecondWindow", "-100", nullptr));
        pushButton_plot->setText(QCoreApplication::translate("SecondWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214", nullptr));
        radioButton_line->setText(QCoreApplication::translate("SecondWindow", "\320\233\320\270\320\275\320\270\321\217", nullptr));
        radioButton_points->setText(QCoreApplication::translate("SecondWindow", "\320\242\320\276\321\207\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
