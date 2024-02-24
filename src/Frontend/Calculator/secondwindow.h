#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>
#include "qcustomplot.h"
#include <QVector>

extern "C"{
#include "../../Backend/main_calculator/calc.h"
}

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = nullptr);
    ~SecondWindow();

private slots:
    void on_pushButton_plot_clicked();

private:
    Ui::SecondWindow *ui;
    QDoubleValidator m_doubleValidator;
    QRegularExpressionValidator m_regexValidator;
    double xBegin, xEnd, step, X;
    int quantity;
    QVector<double> x,y;

};

#endif // SECONDWINDOW_H
