#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

extern QString MiniText; // Малое окно вывода полной последовательности операций
extern QString FirstOp; // Первый операнд
extern QString SecondOp; // Второй операнд
extern bool OperationBool; // Маяк для определения была ли прожата кнопка операции
extern bool DotMarkBool;  // Маяк для определения наличия запятой в операнде

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_Dt_clicked();

    void on_pushButton_C_clicked();

    void on_pushButton_CE_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
