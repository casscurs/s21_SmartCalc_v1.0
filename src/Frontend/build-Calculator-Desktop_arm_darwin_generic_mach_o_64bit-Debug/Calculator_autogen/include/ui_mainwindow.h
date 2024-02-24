/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_9;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_bracketO;
    QPushButton *pushButton_graph;
    QPushButton *pushButton_X;
    QPushButton *pushButton_0;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_res;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_bracketC;
    QPushButton *pushButton_div;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_ac;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_tan;
    QLineEdit *lineEdit_X;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_log;
    QPushButton *pushButton_1;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QPushButton *pushButton_9;
    QLineEdit *lineEdit_input;
    QPushButton *pushButton_6;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_8;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_6;
    QLineEdit *lineEdit_period;
    QLineEdit *lineEdit_percent;
    QLabel *label_18;
    QLineEdit *lineEdit_sum;
    QLabel *label_19;
    QLabel *label_5;
    QGridLayout *gridLayout_4;
    QLabel *label_7;
    QRadioButton *radioButton_anny;
    QPushButton *pushButton_calc;
    QRadioButton *radioButton_diff;
    QPlainTextEdit *plainTextEdit_output;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_22;
    QGridLayout *gridLayout_6;
    QRadioButton *radioButton_yearly;
    QLabel *label_16;
    QRadioButton *radioButton_monthly;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_Add;
    QLineEdit *lineEdit_WithSum;
    QLabel *label_8;
    QLabel *label;
    QLineEdit *lineEdit_AddSum;
    QLabel *label_4;
    QPushButton *pushButton_With;
    QLabel *label_9;
    QLineEdit *lineEdit_WithMonth;
    QLineEdit *lineEdit_AddMonth;
    QPushButton *pushButton_depCalc;
    QGridLayout *gridLayout_7;
    QLabel *label_17;
    QCheckBox *checkBox_cap;
    QGridLayout *gridLayout_5;
    QLabel *label_22;
    QLineEdit *lineEdit_depPercent;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_11;
    QLabel *label_21;
    QLabel *label_20;
    QLineEdit *lineEdit_depSum;
    QLineEdit *lineEdit_depPeriod;
    QPlainTextEdit *plainTextEdit_dep;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 447);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"  background-color: qlineargradient (x1: 0, 1: 0, x2: 0, y2: 1,\n"
"                                   stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout_9 = new QGridLayout(centralwidget);
        gridLayout_9->setObjectName("gridLayout_9");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName("gridLayout");
        pushButton_sin = new QPushButton(tab);
        pushButton_sin->setObjectName("pushButton_sin");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_sin->sizePolicy().hasHeightForWidth());
        pushButton_sin->setSizePolicy(sizePolicy2);
        pushButton_sin->setBaseSize(QSize(60, 60));
        QFont font;
        font.setPointSize(15);
        font.setBold(false);
        font.setItalic(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        pushButton_sin->setFont(font);
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_sin, 3, 5, 1, 1);

        pushButton_minus = new QPushButton(tab);
        pushButton_minus->setObjectName("pushButton_minus");
        sizePolicy2.setHeightForWidth(pushButton_minus->sizePolicy().hasHeightForWidth());
        pushButton_minus->setSizePolicy(sizePolicy2);
        pushButton_minus->setBaseSize(QSize(60, 60));
        pushButton_minus->setFont(font);
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_minus, 2, 4, 1, 1);

        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setBaseSize(QSize(60, 60));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(250, 250, 250);\n"
"color: black;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_2, 4, 1, 1, 2);

        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);
        pushButton_4->setBaseSize(QSize(60, 60));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(250, 250, 250);\n"
"color: black;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        pushButton_3->setBaseSize(QSize(60, 60));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(250, 250, 250);\n"
"color: black;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_3, 4, 3, 1, 1);

        pushButton_ln = new QPushButton(tab);
        pushButton_ln->setObjectName("pushButton_ln");
        sizePolicy2.setHeightForWidth(pushButton_ln->sizePolicy().hasHeightForWidth());
        pushButton_ln->setSizePolicy(sizePolicy2);
        pushButton_ln->setBaseSize(QSize(60, 60));
        pushButton_ln->setFont(font);
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_ln, 2, 5, 1, 1);

        pushButton_bracketO = new QPushButton(tab);
        pushButton_bracketO->setObjectName("pushButton_bracketO");
        sizePolicy.setHeightForWidth(pushButton_bracketO->sizePolicy().hasHeightForWidth());
        pushButton_bracketO->setSizePolicy(sizePolicy);
        pushButton_bracketO->setFont(font);
        pushButton_bracketO->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(190, 190, 190);\n"
"color: black;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_bracketO, 5, 1, 1, 1);

        pushButton_graph = new QPushButton(tab);
        pushButton_graph->setObjectName("pushButton_graph");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_graph->sizePolicy().hasHeightForWidth());
        pushButton_graph->setSizePolicy(sizePolicy3);
        pushButton_graph->setBaseSize(QSize(60, 60));
        pushButton_graph->setFont(font);
        pushButton_graph->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(95, 19, 135);\n"
"color: white;\n"
"border: none;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_graph, 0, 5, 1, 1);

        pushButton_X = new QPushButton(tab);
        pushButton_X->setObjectName("pushButton_X");
        sizePolicy.setHeightForWidth(pushButton_X->sizePolicy().hasHeightForWidth());
        pushButton_X->setSizePolicy(sizePolicy);
        pushButton_X->setBaseSize(QSize(60, 60));
        pushButton_X->setFont(font);
        pushButton_X->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(190, 190, 190);\n"
"color: black;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_X, 1, 1, 1, 2);

        pushButton_0 = new QPushButton(tab);
        pushButton_0->setObjectName("pushButton_0");
        sizePolicy2.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy2);
        pushButton_0->setBaseSize(QSize(60, 60));
        pushButton_0->setFont(font);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(250, 250, 250);\n"
"color: black;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_0, 5, 0, 1, 1);

        pushButton_acos = new QPushButton(tab);
        pushButton_acos->setObjectName("pushButton_acos");
        sizePolicy2.setHeightForWidth(pushButton_acos->sizePolicy().hasHeightForWidth());
        pushButton_acos->setSizePolicy(sizePolicy2);
        pushButton_acos->setBaseSize(QSize(60, 60));
        pushButton_acos->setFont(font);
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_acos, 4, 6, 1, 1);

        pushButton_res = new QPushButton(tab);
        pushButton_res->setObjectName("pushButton_res");
        sizePolicy3.setHeightForWidth(pushButton_res->sizePolicy().hasHeightForWidth());
        pushButton_res->setSizePolicy(sizePolicy3);
        pushButton_res->setBaseSize(QSize(60, 60));
        pushButton_res->setFont(font);
        pushButton_res->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(250, 250, 250);\n"
"color: black;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_res, 0, 6, 1, 1);

        pushButton_cos = new QPushButton(tab);
        pushButton_cos->setObjectName("pushButton_cos");
        sizePolicy2.setHeightForWidth(pushButton_cos->sizePolicy().hasHeightForWidth());
        pushButton_cos->setSizePolicy(sizePolicy2);
        pushButton_cos->setBaseSize(QSize(60, 60));
        pushButton_cos->setFont(font);
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_cos, 4, 5, 1, 1);

        pushButton_sqrt = new QPushButton(tab);
        pushButton_sqrt->setObjectName("pushButton_sqrt");
        sizePolicy2.setHeightForWidth(pushButton_sqrt->sizePolicy().hasHeightForWidth());
        pushButton_sqrt->setSizePolicy(sizePolicy2);
        pushButton_sqrt->setBaseSize(QSize(60, 60));
        pushButton_sqrt->setFont(font);
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_sqrt, 1, 5, 1, 1);

        pushButton_bracketC = new QPushButton(tab);
        pushButton_bracketC->setObjectName("pushButton_bracketC");
        sizePolicy.setHeightForWidth(pushButton_bracketC->sizePolicy().hasHeightForWidth());
        pushButton_bracketC->setSizePolicy(sizePolicy);
        pushButton_bracketC->setFont(font);
        pushButton_bracketC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(190, 190, 190);\n"
"color: black;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_bracketC, 5, 2, 1, 1);

        pushButton_div = new QPushButton(tab);
        pushButton_div->setObjectName("pushButton_div");
        sizePolicy2.setHeightForWidth(pushButton_div->sizePolicy().hasHeightForWidth());
        pushButton_div->setSizePolicy(sizePolicy2);
        pushButton_div->setBaseSize(QSize(60, 60));
        pushButton_div->setFont(font);
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_div, 5, 4, 1, 1);

        pushButton_dot = new QPushButton(tab);
        pushButton_dot->setObjectName("pushButton_dot");
        sizePolicy2.setHeightForWidth(pushButton_dot->sizePolicy().hasHeightForWidth());
        pushButton_dot->setSizePolicy(sizePolicy2);
        pushButton_dot->setBaseSize(QSize(60, 60));
        pushButton_dot->setFont(font);
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(190, 190, 190);\n"
"color: black;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_dot, 5, 3, 1, 1);

        pushButton_ac = new QPushButton(tab);
        pushButton_ac->setObjectName("pushButton_ac");
        sizePolicy2.setHeightForWidth(pushButton_ac->sizePolicy().hasHeightForWidth());
        pushButton_ac->setSizePolicy(sizePolicy2);
        pushButton_ac->setBaseSize(QSize(60, 60));
        pushButton_ac->setFont(font);
        pushButton_ac->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(190, 190, 190);\n"
"color: black;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_ac, 1, 0, 1, 1);

        pushButton_mult = new QPushButton(tab);
        pushButton_mult->setObjectName("pushButton_mult");
        sizePolicy2.setHeightForWidth(pushButton_mult->sizePolicy().hasHeightForWidth());
        pushButton_mult->setSizePolicy(sizePolicy2);
        pushButton_mult->setBaseSize(QSize(60, 60));
        pushButton_mult->setFont(font);
        pushButton_mult->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_mult, 3, 4, 1, 1);

        pushButton_tan = new QPushButton(tab);
        pushButton_tan->setObjectName("pushButton_tan");
        sizePolicy2.setHeightForWidth(pushButton_tan->sizePolicy().hasHeightForWidth());
        pushButton_tan->setSizePolicy(sizePolicy2);
        pushButton_tan->setBaseSize(QSize(60, 60));
        pushButton_tan->setFont(font);
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_tan, 5, 5, 1, 1);

        lineEdit_X = new QLineEdit(tab);
        lineEdit_X->setObjectName("lineEdit_X");
        sizePolicy2.setHeightForWidth(lineEdit_X->sizePolicy().hasHeightForWidth());
        lineEdit_X->setSizePolicy(sizePolicy2);
        lineEdit_X->setBaseSize(QSize(60, 60));
        QFont font1;
        font1.setPointSize(20);
        lineEdit_X->setFont(font1);
        lineEdit_X->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignRight';\n"
"border: 1px solid gray;\n"
"}\n"
"background-color: white;"));

        gridLayout->addWidget(lineEdit_X, 1, 3, 1, 1);

        pushButton_mod = new QPushButton(tab);
        pushButton_mod->setObjectName("pushButton_mod");
        sizePolicy2.setHeightForWidth(pushButton_mod->sizePolicy().hasHeightForWidth());
        pushButton_mod->setSizePolicy(sizePolicy2);
        pushButton_mod->setBaseSize(QSize(60, 60));
        pushButton_mod->setFont(font);
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_mod, 1, 6, 1, 1);

        pushButton_atan = new QPushButton(tab);
        pushButton_atan->setObjectName("pushButton_atan");
        sizePolicy2.setHeightForWidth(pushButton_atan->sizePolicy().hasHeightForWidth());
        pushButton_atan->setSizePolicy(sizePolicy2);
        pushButton_atan->setBaseSize(QSize(60, 60));
        pushButton_atan->setFont(font);
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_atan, 5, 6, 1, 1);

        pushButton_pow = new QPushButton(tab);
        pushButton_pow->setObjectName("pushButton_pow");
        sizePolicy2.setHeightForWidth(pushButton_pow->sizePolicy().hasHeightForWidth());
        pushButton_pow->setSizePolicy(sizePolicy2);
        pushButton_pow->setBaseSize(QSize(60, 60));
        pushButton_pow->setFont(font);
        pushButton_pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_pow, 4, 4, 1, 1);

        pushButton_log = new QPushButton(tab);
        pushButton_log->setObjectName("pushButton_log");
        sizePolicy2.setHeightForWidth(pushButton_log->sizePolicy().hasHeightForWidth());
        pushButton_log->setSizePolicy(sizePolicy2);
        pushButton_log->setBaseSize(QSize(60, 60));
        pushButton_log->setFont(font);
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_log, 2, 6, 1, 1);

        pushButton_1 = new QPushButton(tab);
        pushButton_1->setObjectName("pushButton_1");
        sizePolicy2.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy2);
        pushButton_1->setBaseSize(QSize(60, 60));
        pushButton_1->setFont(font);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(250, 250, 250);\n"
"color: black;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_1, 4, 0, 1, 1);

        pushButton_plus = new QPushButton(tab);
        pushButton_plus->setObjectName("pushButton_plus");
        sizePolicy2.setHeightForWidth(pushButton_plus->sizePolicy().hasHeightForWidth());
        pushButton_plus->setSizePolicy(sizePolicy2);
        pushButton_plus->setBaseSize(QSize(60, 60));
        pushButton_plus->setFont(font);
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_plus, 1, 4, 1, 1);

        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy2.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy2);
        pushButton_7->setBaseSize(QSize(60, 60));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(250, 250, 250);\n"
"color: black;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setBaseSize(QSize(60, 60));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(250, 250, 250);\n"
"color: black;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_5, 3, 1, 1, 2);

        pushButton_9 = new QPushButton(tab);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy2.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy2);
        pushButton_9->setBaseSize(QSize(60, 60));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(250, 250, 250);\n"
"color: black;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_9, 2, 3, 1, 1);

        lineEdit_input = new QLineEdit(tab);
        lineEdit_input->setObjectName("lineEdit_input");
        sizePolicy3.setHeightForWidth(lineEdit_input->sizePolicy().hasHeightForWidth());
        lineEdit_input->setSizePolicy(sizePolicy3);
        lineEdit_input->setFont(font1);
        lineEdit_input->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignRight';\n"
"border: 1px solid black;\n"
"}\n"
"background-color: white;"));

        gridLayout->addWidget(lineEdit_input, 0, 0, 1, 5);

        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy2.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy2);
        pushButton_6->setBaseSize(QSize(60, 60));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(250, 250, 250);\n"
"color: black;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_6, 3, 3, 1, 1);

        pushButton_asin = new QPushButton(tab);
        pushButton_asin->setObjectName("pushButton_asin");
        sizePolicy2.setHeightForWidth(pushButton_asin->sizePolicy().hasHeightForWidth());
        pushButton_asin->setSizePolicy(sizePolicy2);
        pushButton_asin->setBaseSize(QSize(60, 60));
        pushButton_asin->setFont(font);
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_asin, 3, 6, 1, 1);

        pushButton_8 = new QPushButton(tab);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setBaseSize(QSize(60, 60));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(250, 250, 250);\n"
"color: black;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        label_3 = new QLabel(tab_2);
        label_3->setObjectName("label_3");
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName("label_2");
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout_3->addWidget(label_2, 2, 0, 1, 1);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName("label_6");
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(false);
        font3.setItalic(true);
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout_3->addWidget(label_6, 2, 2, 1, 1);

        lineEdit_period = new QLineEdit(tab_2);
        lineEdit_period->setObjectName("lineEdit_period");
        lineEdit_period->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignRight';\n"
"border: 1px solid black;\n"
"}\n"
"background-color: white;"));

        gridLayout_3->addWidget(lineEdit_period, 1, 1, 1, 1);

        lineEdit_percent = new QLineEdit(tab_2);
        lineEdit_percent->setObjectName("lineEdit_percent");
        lineEdit_percent->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignRight';\n"
"border: 1px solid black;\n"
"}\n"
"background-color: white;"));

        gridLayout_3->addWidget(lineEdit_percent, 2, 1, 1, 1);

        label_18 = new QLabel(tab_2);
        label_18->setObjectName("label_18");
        label_18->setFont(font2);
        label_18->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout_3->addWidget(label_18, 0, 0, 1, 1);

        lineEdit_sum = new QLineEdit(tab_2);
        lineEdit_sum->setObjectName("lineEdit_sum");
        lineEdit_sum->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignRight';\n"
"border: 1px solid black;\n"
"}\n"
"background-color: white;"));

        gridLayout_3->addWidget(lineEdit_sum, 0, 1, 1, 1);

        label_19 = new QLabel(tab_2);
        label_19->setObjectName("label_19");
        label_19->setFont(font3);
        label_19->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout_3->addWidget(label_19, 0, 2, 1, 1);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName("label_5");
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout_3->addWidget(label_5, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        label_7 = new QLabel(tab_2);
        label_7->setObjectName("label_7");
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout_4->addWidget(label_7, 0, 0, 1, 1);

        radioButton_anny = new QRadioButton(tab_2);
        radioButton_anny->setObjectName("radioButton_anny");
        radioButton_anny->setFont(font2);

        gridLayout_4->addWidget(radioButton_anny, 0, 1, 1, 1);

        pushButton_calc = new QPushButton(tab_2);
        pushButton_calc->setObjectName("pushButton_calc");
        sizePolicy3.setHeightForWidth(pushButton_calc->sizePolicy().hasHeightForWidth());
        pushButton_calc->setSizePolicy(sizePolicy3);
        pushButton_calc->setBaseSize(QSize(60, 60));
        QFont font4;
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setKerning(true);
        font4.setStyleStrategy(QFont::PreferDefault);
        pushButton_calc->setFont(font4);
        pushButton_calc->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(95, 19, 135);\n"
"color: white;\n"
"border: none;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout_4->addWidget(pushButton_calc, 0, 2, 2, 1);

        radioButton_diff = new QRadioButton(tab_2);
        radioButton_diff->setObjectName("radioButton_diff");
        radioButton_diff->setFont(font2);

        gridLayout_4->addWidget(radioButton_diff, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        plainTextEdit_output = new QPlainTextEdit(tab_2);
        plainTextEdit_output->setObjectName("plainTextEdit_output");

        verticalLayout->addWidget(plainTextEdit_output);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_5 = new QVBoxLayout(tab_3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        gridLayout_22 = new QGridLayout();
        gridLayout_22->setObjectName("gridLayout_22");
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        radioButton_yearly = new QRadioButton(tab_3);
        radioButton_yearly->setObjectName("radioButton_yearly");
        radioButton_yearly->setFont(font2);

        gridLayout_6->addWidget(radioButton_yearly, 1, 1, 1, 1);

        label_16 = new QLabel(tab_3);
        label_16->setObjectName("label_16");
        label_16->setFont(font2);
        label_16->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout_6->addWidget(label_16, 0, 0, 1, 1);

        radioButton_monthly = new QRadioButton(tab_3);
        radioButton_monthly->setObjectName("radioButton_monthly");
        radioButton_monthly->setFont(font2);

        gridLayout_6->addWidget(radioButton_monthly, 0, 1, 1, 1);


        gridLayout_22->addLayout(gridLayout_6, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        pushButton_Add = new QPushButton(tab_3);
        pushButton_Add->setObjectName("pushButton_Add");
        sizePolicy.setHeightForWidth(pushButton_Add->sizePolicy().hasHeightForWidth());
        pushButton_Add->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setPointSize(15);
        pushButton_Add->setFont(font5);
        pushButton_Add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(95, 19, 135);\n"
"color: white;\n"
"border: none;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout_2->addWidget(pushButton_Add, 1, 3, 1, 1);

        lineEdit_WithSum = new QLineEdit(tab_3);
        lineEdit_WithSum->setObjectName("lineEdit_WithSum");

        gridLayout_2->addWidget(lineEdit_WithSum, 2, 2, 1, 1);

        label_8 = new QLabel(tab_3);
        label_8->setObjectName("label_8");
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout_2->addWidget(label_8, 0, 1, 1, 1);

        label = new QLabel(tab_3);
        label->setObjectName("label");
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        lineEdit_AddSum = new QLineEdit(tab_3);
        lineEdit_AddSum->setObjectName("lineEdit_AddSum");
        sizePolicy.setHeightForWidth(lineEdit_AddSum->sizePolicy().hasHeightForWidth());
        lineEdit_AddSum->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lineEdit_AddSum, 1, 2, 1, 1);

        label_4 = new QLabel(tab_3);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        pushButton_With = new QPushButton(tab_3);
        pushButton_With->setObjectName("pushButton_With");
        sizePolicy.setHeightForWidth(pushButton_With->sizePolicy().hasHeightForWidth());
        pushButton_With->setSizePolicy(sizePolicy);
        pushButton_With->setFont(font5);
        pushButton_With->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(95, 19, 135);\n"
"color: white;\n"
"border: none;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout_2->addWidget(pushButton_With, 2, 3, 1, 1);

        label_9 = new QLabel(tab_3);
        label_9->setObjectName("label_9");
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout_2->addWidget(label_9, 0, 2, 1, 1);

        lineEdit_WithMonth = new QLineEdit(tab_3);
        lineEdit_WithMonth->setObjectName("lineEdit_WithMonth");

        gridLayout_2->addWidget(lineEdit_WithMonth, 2, 1, 1, 1);

        lineEdit_AddMonth = new QLineEdit(tab_3);
        lineEdit_AddMonth->setObjectName("lineEdit_AddMonth");

        gridLayout_2->addWidget(lineEdit_AddMonth, 1, 1, 1, 1);

        pushButton_depCalc = new QPushButton(tab_3);
        pushButton_depCalc->setObjectName("pushButton_depCalc");
        sizePolicy.setHeightForWidth(pushButton_depCalc->sizePolicy().hasHeightForWidth());
        pushButton_depCalc->setSizePolicy(sizePolicy);
        pushButton_depCalc->setFont(font5);
        pushButton_depCalc->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(95, 19, 135);\n"
"color: white;\n"
"border: none;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient(x1: 0, 1: 0, x2: 0, 2: 1,\n"
"stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout_2->addWidget(pushButton_depCalc, 0, 4, 3, 1);


        gridLayout_22->addLayout(gridLayout_2, 3, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName("gridLayout_7");
        label_17 = new QLabel(tab_3);
        label_17->setObjectName("label_17");
        label_17->setFont(font2);
        label_17->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout_7->addWidget(label_17, 0, 0, 1, 1);

        checkBox_cap = new QCheckBox(tab_3);
        checkBox_cap->setObjectName("checkBox_cap");
        checkBox_cap->setFont(font2);
        checkBox_cap->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout_7->addWidget(checkBox_cap, 0, 1, 1, 1);


        gridLayout_22->addLayout(gridLayout_7, 2, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        label_22 = new QLabel(tab_3);
        label_22->setObjectName("label_22");
        label_22->setFont(font3);
        label_22->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout_5->addWidget(label_22, 1, 2, 1, 1);

        lineEdit_depPercent = new QLineEdit(tab_3);
        lineEdit_depPercent->setObjectName("lineEdit_depPercent");
        lineEdit_depPercent->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignRight';\n"
"border: 1px solid black;\n"
"}\n"
"background-color: white;"));

        gridLayout_5->addWidget(lineEdit_depPercent, 2, 1, 1, 1);

        label_12 = new QLabel(tab_3);
        label_12->setObjectName("label_12");
        label_12->setFont(font2);
        label_12->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout_5->addWidget(label_12, 2, 0, 1, 1);

        label_13 = new QLabel(tab_3);
        label_13->setObjectName("label_13");
        label_13->setFont(font3);
        label_13->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout_5->addWidget(label_13, 2, 2, 1, 1);

        label_11 = new QLabel(tab_3);
        label_11->setObjectName("label_11");
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout_5->addWidget(label_11, 1, 0, 1, 1);

        label_21 = new QLabel(tab_3);
        label_21->setObjectName("label_21");
        label_21->setFont(font3);
        label_21->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout_5->addWidget(label_21, 0, 2, 1, 1);

        label_20 = new QLabel(tab_3);
        label_20->setObjectName("label_20");
        label_20->setFont(font2);
        label_20->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;"));

        gridLayout_5->addWidget(label_20, 0, 0, 1, 1);

        lineEdit_depSum = new QLineEdit(tab_3);
        lineEdit_depSum->setObjectName("lineEdit_depSum");
        lineEdit_depSum->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignRight';\n"
"border: 1px solid black;\n"
"}\n"
"background-color: white;"));

        gridLayout_5->addWidget(lineEdit_depSum, 0, 1, 1, 1);

        lineEdit_depPeriod = new QLineEdit(tab_3);
        lineEdit_depPeriod->setObjectName("lineEdit_depPeriod");
        lineEdit_depPeriod->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignRight';\n"
"border: 1px solid black;\n"
"}\n"
"background-color: white;"));

        gridLayout_5->addWidget(lineEdit_depPeriod, 1, 1, 1, 1);


        gridLayout_22->addLayout(gridLayout_5, 0, 0, 1, 1);

        plainTextEdit_dep = new QPlainTextEdit(tab_3);
        plainTextEdit_dep->setObjectName("plainTextEdit_dep");

        gridLayout_22->addWidget(plainTextEdit_dep, 4, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout_22);

        tabWidget->addTab(tab_3, QString());

        gridLayout_9->addWidget(tabWidget, 0, 0, 3, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        tabWidget->setStyleSheet(QCoreApplication::translate("MainWindow", "QLabel {\n"
"qproperty-alignment: 'AlignCenter | AlignLeft';\n"
"}\n"
"background-color: white;", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_bracketO->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_graph->setText(QCoreApplication::translate("MainWindow", "\320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
        pushButton_X->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_res->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_bracketC->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_ac->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_mult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        lineEdit_X->setText(QString());
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        lineEdit_input->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260:", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "RUB - \342\202\275", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\265\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\321\205 \320\277\320\273\320\260\321\202\320\265\320\266\320\265\320\271:", nullptr));
        radioButton_anny->setText(QCoreApplication::translate("MainWindow", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\265", nullptr));
        pushButton_calc->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        radioButton_diff->setText(QCoreApplication::translate("MainWindow", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271", nullptr));
        radioButton_yearly->setText(QCoreApplication::translate("MainWindow", "\320\225\320\266\320\265\320\263\320\276\320\264\320\275\320\276", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\262\321\213\320\277\320\273\320\260\321\202:", nullptr));
        radioButton_monthly->setText(QCoreApplication::translate("MainWindow", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\320\276", nullptr));
        pushButton_Add->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\201\321\217\321\206", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\265:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\241\320\275\321\217\321\202\320\270\320\265:", nullptr));
        pushButton_With->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260", nullptr));
        pushButton_depCalc->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\276\320\262:", nullptr));
        checkBox_cap->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\276\320\272 \321\200\320\260\320\267\320\274\320\265\321\211\320\265\320\275\320\270\321\217:", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "RUB - \342\202\275", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\224\320\265\320\277\320\276\320\267\320\270\321\202\320\275\321\213\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
