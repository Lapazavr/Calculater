#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString> // -//-
#include <QDebug>  // -//-

QString MiniText = ""; // Малое окно вывода полной последовательности операций
QString FirstOp = ""; // Первый операнд
QString SecondOp = ""; // Второй операнд
bool OperationBool = 0; // Маяк для определения была ли прожата кнопка операции
bool DoteMarkBool = 0;      // Маяк для определения наличия запятой в операнде

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
    if (OperationBool == 0 && ((FirstOp == "") || (FirstOp == "0"))){

        FirstOp = "1";
        MiniText = "1";

        qDebug()<<"Кнопка [1] была нажата ПЕРВОЙ. Первый операнд."<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    } else if (OperationBool == 0 && FirstOp != "" && FirstOp != "0"){

        FirstOp += "1";
        MiniText += "1";

        qDebug()<<"Кнопка [1] была нажата СНОВА. Первый операнд."<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    }

    if (OperationBool == 1 && ((SecondOp == "") || (SecondOp == "0"))){

        SecondOp = "1";
        MiniText += "1";

        qDebug()<<"Кнопка [1] была нажата ВПЕРВЫЕ как второй операнд."<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    } else if (OperationBool == 1 && SecondOp != "" && SecondOp != "0"){

        SecondOp += "1";
        MiniText += "1";

        qDebug()<<"Кнопка [1] была нажата СНОВА. Второй операнд."<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    }

}

void MainWindow::on_pushButton_2_clicked()
{
    if (OperationBool == 0 && ((FirstOp == "") || (FirstOp == "0"))){

        FirstOp = "2";
        MiniText = "2";

        qDebug()<<"Кнопка [2] была нажата ПЕРВОЙ. Первый операнд."<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    } else if (OperationBool == 0 && FirstOp != "" && FirstOp != "0"){

        FirstOp += "2";
        MiniText += "2";

        qDebug()<<"Кнопка [2] была нажата СНОВА. Первый операнд."<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    }

    if (OperationBool == 1 && ((SecondOp == "") || (SecondOp == "0"))){

        SecondOp = "2";
        MiniText += "2";

        qDebug()<<"Кнопка [2] была нажата ВПЕРВЫЕ как второй операнд."<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    } else if (OperationBool == 1 && SecondOp != "" && SecondOp != "0"){

        SecondOp += "2";
        MiniText += "2";

        qDebug()<<"Кнопка [2] была нажата СНОВА. Второй операнд."<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    }
}

void MainWindow::on_pushButton_3_clicked()
{
    if (OperationBool == 0 && ((FirstOp == "") || (FirstOp == "0"))){

        FirstOp = "3";
        MiniText = "3";

        qDebug()<<"Кнопка [3] была нажата ПЕРВОЙ. Первый операнд."<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    } else if (OperationBool == 0 && FirstOp != "" && FirstOp != "0"){

        FirstOp += "3";
        MiniText += "3";

        qDebug()<<"Кнопка [3] была нажата СНОВА. Первый операнд."<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    }

    if (OperationBool == 1 && ((SecondOp == "") || (SecondOp == "0"))){

        SecondOp = "3";
        MiniText += "3";

        qDebug()<<"Кнопка [3] была нажата ВПЕРВЫЕ как второй операнд."<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    } else if (OperationBool == 1 && SecondOp != "" && SecondOp != "0"){

        SecondOp += "3";
        MiniText += "3";

        qDebug()<<"Кнопка [3] была нажата СНОВА. Второй операнд."<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    }
}

void MainWindow::on_pushButton_4_clicked()
{
    if (OperationBool == 0 && ((FirstOp == "") || (FirstOp == "0"))){

        FirstOp = "4";
        MiniText = "4";

        qDebug()<<"Кнопка [4] была нажата ПЕРВОЙ. Первый операнд."<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    } else if (OperationBool == 0 && FirstOp != "" && FirstOp != "0"){

        FirstOp += "4";
        MiniText += "4";

        qDebug()<<"Кнопка [4] была нажата СНОВА. Первый операнд."<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    }

    if (OperationBool == 1 && ((SecondOp == "") || (SecondOp == "0"))){

        SecondOp = "4";
        MiniText += "4";

        qDebug()<<"Кнопка [4] была нажата ВПЕРВЫЕ как второй операнд."<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    } else if (OperationBool == 1 && SecondOp != "" && SecondOp != "0"){

        SecondOp += "4";
        MiniText += "4";

        qDebug()<<"Кнопка [4] была нажата СНОВА. Второй операнд."<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    }
}

void MainWindow::on_pushButton_5_clicked()
{
    if (OperationBool == 0 && ((FirstOp == "") || (FirstOp == "0"))){

        FirstOp = "5";
        MiniText = "5";

        qDebug()<<"Кнопка [5] была нажата ПЕРВОЙ. Первый операнд."<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    } else if (OperationBool == 0 && FirstOp != "" && FirstOp != "0"){

        FirstOp += "5";
        MiniText += "5";

        qDebug()<<"Кнопка [5] была нажата СНОВА. Первый операнд."<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    }

    if (OperationBool == 1 && ((SecondOp == "") || (SecondOp == "0"))){

        SecondOp = "5";
        MiniText += "5";

        qDebug()<<"Кнопка [5] была нажата ВПЕРВЫЕ как второй операнд."<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    } else if (OperationBool == 1 && SecondOp != "" && SecondOp != "0"){

        SecondOp += "5";
        MiniText += "5";

        qDebug()<<"Кнопка [5] была нажата СНОВА. Второй операнд."<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    }
}

void MainWindow::on_pushButton_6_clicked()
{
    if (OperationBool == 0 && ((FirstOp == "") || (FirstOp == "0"))){

        FirstOp = "6";
        MiniText = "6";

        qDebug()<<"Кнопка [6] была нажата ПЕРВОЙ. Первый операнд."<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    } else if (OperationBool == 0 && FirstOp != "" && FirstOp != "0"){

        FirstOp += "6";
        MiniText += "6";

        qDebug()<<"Кнопка [6] была нажата СНОВА. Первый операнд."<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    }

    if (OperationBool == 1 && ((SecondOp == "") || (SecondOp == "0"))){

        SecondOp = "6";
        MiniText += "6";

        qDebug()<<"Кнопка [6] была нажата ВПЕРВЫЕ как второй операнд."<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    } else if (OperationBool == 1 && SecondOp != "" && SecondOp != "0"){

        SecondOp += "6";
        MiniText += "6";

        qDebug()<<"Кнопка [6] была нажата СНОВА. Второй операнд."<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    }
}

void MainWindow::on_pushButton_7_clicked()
{
    if (OperationBool == 0 && ((FirstOp == "") || (FirstOp == "0"))){

        FirstOp = "7";
        MiniText = "7";

        qDebug()<<"Кнопка [7] была нажата ПЕРВОЙ. Первый операнд."<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    } else if (OperationBool == 0 && FirstOp != "" && FirstOp != "0"){

        FirstOp += "7";
        MiniText += "7";

        qDebug()<<"Кнопка [7] была нажата СНОВА. Первый операнд."<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    }

    if (OperationBool == 1 && ((SecondOp == "") || (SecondOp == "0"))){

        SecondOp = "7";
        MiniText += "7";

        qDebug()<<"Кнопка [7] была нажата ВПЕРВЫЕ как второй операнд."<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    } else if (OperationBool == 1 && SecondOp != "" && SecondOp != "0"){

        SecondOp += "7";
        MiniText += "7";

        qDebug()<<"Кнопка [7] была нажата СНОВА. Второй операнд."<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    }
}

void MainWindow::on_pushButton_8_clicked()
{
    if (OperationBool == 0 && ((FirstOp == "") || (FirstOp == "0"))){

        FirstOp = "8";
        MiniText = "8";

        qDebug()<<"Кнопка [8] была нажата ПЕРВОЙ. Первый операнд."<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    } else if (OperationBool == 0 && FirstOp != "" && FirstOp != "0"){

        FirstOp += "8";
        MiniText += "8";

        qDebug()<<"Кнопка [8] была нажата СНОВА. Первый операнд."<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    }

    if (OperationBool == 1 && ((SecondOp == "") || (SecondOp == "0"))){

        SecondOp = "8";
        MiniText += "8";

        qDebug()<<"Кнопка [8] была нажата ВПЕРВЫЕ как второй операнд."<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    } else if (OperationBool == 1 && SecondOp != "" && SecondOp != "0"){

        SecondOp += "8";
        MiniText += "8";

        qDebug()<<"Кнопка [8] была нажата СНОВА. Второй операнд."<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    }
}

void MainWindow::on_pushButton_9_clicked()
{
    if (OperationBool == 0 && ((FirstOp == "") || (FirstOp == "0"))){

        FirstOp = "9";
        MiniText = "9";

        qDebug()<<"Кнопка [9] была нажата ПЕРВОЙ. Первый операнд."<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    } else if (OperationBool == 0 && FirstOp != "" && FirstOp != "0"){

        FirstOp += "9";
        MiniText += "9";

        qDebug()<<"Кнопка [9] была нажата СНОВА. Первый операнд."<<endl;
        qDebug()<<"FirstOp == "<<FirstOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    }

    if (OperationBool == 1 && ((SecondOp == "") || (SecondOp == "0"))){

        SecondOp = "9";
        MiniText += "9";

        qDebug()<<"Кнопка [9] была нажата ВПЕРВЫЕ как второй операнд."<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    } else if (OperationBool == 1 && SecondOp != "" && SecondOp != "0"){

        SecondOp += "9";
        MiniText += "9";

        qDebug()<<"Кнопка [9] была нажата СНОВА. Второй операнд."<<endl;
        qDebug()<<"SecondOp == "<<SecondOp<<endl;
        qDebug()<<"MiniText == "<<MiniText<<endl;

    }
}

void MainWindow::on_pushButton_0_clicked()
{
    if (OperationBool == 0){

        if (FirstOp == "" || FirstOp == "0"){

            FirstOp = "0";
            MiniText = "0";

            qDebug()<<"Кнопка [0] была нажата. Первый операнд."<<endl;
            qDebug()<<"FirstOp == "<<FirstOp<<endl;
            qDebug()<<"MiniText == "<<MiniText<<endl;

        } else {

            FirstOp += "0";
            MiniText += "0";

            qDebug()<<"Кнопка [0] была нажата как дополнение к первому операнду."<<endl;
            qDebug()<<"FirstOp == "<<FirstOp<<endl;
            qDebug()<<"MiniText == "<<MiniText<<endl;
        }
    }

    if (OperationBool == 1){

        if (SecondOp == ""){

            SecondOp = "0";
            MiniText += "0";

            qDebug()<<"Кнопка [0] была нажата ВПЕРВЫЕ как второй операнд."<<endl;
            qDebug()<<"SecondOp == "<<SecondOp<<endl;
            qDebug()<<"MiniText == "<<MiniText<<endl;

        } else if (SecondOp == "0"){

            qDebug()<<"Кнопка [0] была нажата ПОДРЯД КАК ВПЕРВЫЕ как второй операнд"<<endl;

        } else if (SecondOp != "" && SecondOp != "0"){

            SecondOp += "0";
            MiniText += "0";

            qDebug()<<"Кнопка [0] была нажата как дополнение ко второму операнду."<<endl;
            qDebug()<<"SecondOp == "<<SecondOp<<endl;
            qDebug()<<"MiniText == "<<MiniText<<endl;
        }
    }
}

void MainWindow::on_pushButton_Dt_clicked()
{
    if (DoteMarkBool == 0){

        if (OperationBool == 0){

            FirstOp += ".";
            MiniText += ".";
            DoteMarkBool = 1;


            qDebug()<<"Кнопка [.] была нажата впервые в первом операнде."<<endl;
            qDebug()<<"FirstOp == "<<FirstOp<<endl;
            qDebug()<<"MiniText == "<<MiniText<<endl;

        }

        if (OperationBool == 1){

            SecondOp += ".";
            MiniText += ".";
            DoteMarkBool = 1;


            qDebug()<<"Кнопка [.] была нажата впервые во втором операнде."<<endl;
            qDebug()<<"SecondOp == "<<SecondOp<<endl;
            qDebug()<<"MiniText == "<<MiniText<<endl;
        }

    } else if (DoteMarkBool == 1){

        qDebug()<<"Кнопка [.] была нажата, но точка уже есть в этом операнде"<<endl;

    }
}

void MainWindow::on_pushButton_C_clicked()
{
    FirstOp = "";
    SecondOp = "";
    MiniText = "";

    OperationBool = 0;
    DoteMarkBool = 0;

    qDebug()<<"Была нажата кнопка [C]. Обнуление операндов, минитекста, меток операции и наличия точки."<<endl;
}
