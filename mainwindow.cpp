#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString> // -//-
#include <QDebug>  // -//-

QString MiniText = ""; // Малое окно вывода полной последовательности операций
QString FirstOp = ""; // Первый операнд
QString SecondOp = ""; // Второй операнд
bool OperationBool = 0; // Маяк для определения была ли прожата кнопка операции

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_1_clicked()
{
    if (OperationBool == 0){

        FirstOp += "1";
        MiniText += "1";

        qDebug()<<"Кнопка [1] была нажата. Первый операнд"<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;
    }

    if (OperationBool == 1){

        SecondOp += "1";
        MiniText += "1";

        qDebug()<<"Кнопка [1] была нажата. Второй операнд"<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;
    }

}

void MainWindow::on_pushButton_2_clicked()
{
    if (OperationBool == 0){

        FirstOp += "2";
        MiniText += "2";

        qDebug()<<"Кнопка [2] была нажата. Первый операнд"<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;
    }

    if (OperationBool == 1){

        SecondOp += "2";
        MiniText += "2";

        qDebug()<<"Кнопка [2] была нажата. Второй операнд"<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    if (OperationBool == 0){

        FirstOp += "3";
        MiniText += "3";

        qDebug()<<"Кнопка [3] была нажата. Первый операнд"<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;
    }

    if (OperationBool == 1){

        SecondOp += "3";
        MiniText += "3";

        qDebug()<<"Кнопка [3] была нажата. Второй операнд"<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    if (OperationBool == 0){

        FirstOp += "4";
        MiniText += "4";

        qDebug()<<"Кнопка [4] была нажата. Первый операнд"<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;
    }

    if (OperationBool == 1){

        SecondOp += "4";
        MiniText += "4";

        qDebug()<<"Кнопка [4] была нажата. Второй операнд"<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    if (OperationBool == 0){

        FirstOp += "5";
        MiniText += "5";

        qDebug()<<"Кнопка [5] была нажата. Первый операнд"<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;
    }

    if (OperationBool == 1){

        SecondOp += "5";
        MiniText += "5";

        qDebug()<<"Кнопка [5] была нажата. Второй операнд"<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    if (OperationBool == 0){

        FirstOp += "6";
        MiniText += "6";

        qDebug()<<"Кнопка [6] была нажата. Первый операнд"<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;
    }

    if (OperationBool == 1){

        SecondOp += "6";
        MiniText += "6";

        qDebug()<<"Кнопка [6] была нажата. Второй операнд"<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    if (OperationBool == 0){

        FirstOp += "7";
        MiniText += "7";

        qDebug()<<"Кнопка [7] была нажата. Первый операнд"<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;
    }

    if (OperationBool == 1){

        SecondOp += "7";
        MiniText += "7";

        qDebug()<<"Кнопка [7] была нажата. Второй операнд"<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;
    }
}

void MainWindow::on_pushButton_8_clicked()
{
    if (OperationBool == 0){

        FirstOp += "8";
        MiniText += "8";

        qDebug()<<"Кнопка [8] была нажата. Первый операнд"<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;
    }

    if (OperationBool == 1){

        SecondOp += "8";
        MiniText += "8";

        qDebug()<<"Кнопка [8] была нажата. Второй операнд"<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    if (OperationBool == 0){

        FirstOp += "9";
        MiniText += "9";

        qDebug()<<"Кнопка [9] была нажата. Первый операнд"<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;
    }

    if (OperationBool == 1){

        SecondOp += "9";
        MiniText += "9";

        qDebug()<<"Кнопка [9] была нажата. Второй операнд"<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;
    }
}
