#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QValidator>

extern "C"{
#include "../../Backend/main_calculator/calc.h"
#include "../../Backend/credit_calculator/credit.h"
#include "../../Backend/deposit_calculator/deposit.h"
}

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QDoubleValidator m_doubleValidator;
    QDoubleValidator creditSum_doubleValidator;
    QDoubleValidator creditPeriod_doubleValidator;
    QDoubleValidator creditPercent_doubleValidator;
    QRegularExpressionValidator m_regexValidator;
    QRegularExpressionValidator x_regexValidator;
    StackNode *add;
    StackNode *with;

private slots:
    void digits_numbers();
    void on_pushButton_ac_clicked();
    void operations();
    void functions();
    void on_pushButton_res_clicked();
    void on_pushButton_graph_clicked();
    void on_pushButton_calc_clicked();
    void on_pushButton_depCalc_clicked();
    void pushToStackAdd();
    void popAndClearStackAdd();
    void pushToStackWith();
    void popAndClearStackWith();
   // void on_checkBox_cap_stateChanged(int arg1);
};

#endif // MAINWINDOW_H
