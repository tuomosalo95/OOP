#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_plusButton_clicked()
{
    // plus vain jos tila on 2
    if (tila == 2){
        qDebug() << "Tila" << tila << " Plus sallittu";
    // haetaan num1
    QString n1 = ui->num1Edit->text();
    num1 = n1.toInt();
    // haetaan num2
    QString n2 = ui->num2Edit->text();
    num2 = n2.toInt();
    qDebug() << num1 << " + " << num2;
    // lasketaan tulos
    result = num1 + num2;
    // kirjoitetaan tulos
    QString r = QString::number(result);
    ui->resultEdit->setText(r);
    // palataan alkutilaan
    tila = 0;
    qDebug() << "Nykyinen tila " << tila;
    }
}

void MainWindow::on_minusButton_clicked()
{
    // miinus vain jos tia on 2
    if (tila == 2){
        qDebug() << "Tila" << tila << " Minus sallittu";
    // haetaan num1
    QString n1 = ui->num1Edit->text();
    num1 = n1.toInt();
    // haetaan num2
    QString n2 = ui->num2Edit->text();
    num2 = n2.toInt();
    qDebug() << num1 << " - " << num2;
    // lasketaan tulos
    result = num1 - num2;
    // kirjoitetaan tulos
    QString r = QString::number(result);
    ui->resultEdit->setText(r);
    // palataan alkutilaan
    tila = 0;
    qDebug() << "Nykyinen tila " << tila;
    }
}


void MainWindow::on_multiButton_clicked()
{
    // haetaan num1
    QString n1 = ui->num1Edit->text();
    num1 = n1.toInt();
    // haetaan num2
    QString n2 = ui->num2Edit->text();
    num2 = n2.toInt();
    qDebug() << num1 << " * " << num2;
    // lasketaan tulos
    result = num1 * num2;
    // kirjoitetaan tulos
    QString r = QString::number(result);
    ui->resultEdit->setText(r);
    qDebug() << "Nykyinen tila " << tila;
}


void MainWindow::on_n1Button_clicked()
{
    setEditNum(1);
}


void MainWindow::on_n2Button_clicked()
{
    setEditNum(2);
}

void MainWindow::on_n3Button_clicked()
{
    setEditNum(3);
}

void MainWindow::setEditNum(int num){
    qDebug() << "Nykyinen tila " << tila;
    if (tila == 0){
        QString lukunyt = ui->num1Edit->text();
        lukunyt += QString::number(num);
        ui->num1Edit->setText(lukunyt);
    } else if (tila == 1){
        QString lukunyt = ui->num2Edit->text();
        lukunyt += QString::number(num);
        ui->num2Edit->setText(lukunyt);
    } else {
        qDebug() << "vaara tila: ei voi syottaa numeroa";
    }
}


void MainWindow::on_enterButton_clicked()
{
    qDebug() << "Nykyinen tila " << tila;
    // tilasta 0 -> tilaan 1
    if (tila == 0){
        tila = 1;
    } else if (tila == 1){
        tila = 2;
    }
    qDebug() << "Uusi tila " << tila;
}


void MainWindow::on_divideButton_clicked()
{
    if(tila ==2){
        bool ok1, ok2;
        float num1 = locale().toFloat(ui->num1Edit->text(), &ok1);
        float num2 = locale().toFloat(ui->num2Edit->text(), &ok2);

        qDebug() << num1 << " / " << num2;

        float result = num1 / num2;

        QString r = QString::number(result, 'f',2);
        ui->resultEdit->setText(r);
        tila = 0;
    }
}


void MainWindow::on_clearButton_clicked()
{
    ui->num1Edit->clear();
    ui->num2Edit->clear();
    ui->resultEdit->clear();
    // clearissa aina alkutilaan
    tila = 0;
    qDebug() << "Clearissa palataan tilaan " << tila;

}


void MainWindow::on_n4Button_clicked()
{
    setEditNum(4);
}


void MainWindow::on_n5Button_clicked()
{
    setEditNum(5);
}


void MainWindow::on_n6Button_clicked()
{
    setEditNum(6);
}


void MainWindow::on_n7Button_clicked()
{
    setEditNum(7);
}


void MainWindow::on_n8Button_clicked()
{
    setEditNum(8);
}


void MainWindow::on_n9Button_clicked()
{
    setEditNum(9);
}

