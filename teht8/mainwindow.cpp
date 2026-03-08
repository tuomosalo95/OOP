#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    player1Time = 0;
    player2Time = 0;
    gameTime = 0;
    currentPlayer = 1;

    qTimer = new QTimer(this);
    connect(qTimer, &QTimer::timeout, this, &MainWindow::timeout);

    setGameInfoText("Select playtime and press START", 12);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::timeout()
{
    if(currentPlayer == 1)
        player1Time--;
    else
        player2Time--;

    updateProgressBars();

    if(player1Time <= 0 || player2Time <= 0)
    {
        qTimer->stop();

        if(player1Time <= 0)
            setGameInfoText("Player 2 WON!!", 18);
        else
            setGameInfoText("Player 1 WON!!", 18);
    }
}


void MainWindow::on_progressBar_valueChanged(int)
{
}

void MainWindow::on_progressBar_2_valueChanged(int)
{
}


void MainWindow::on_p1end_clicked()
{
    if(gameTime == 0)
        return;

    currentPlayer = 1;
    qTimer->start(1000);

    setGameInfoText("Game ongoing", 14);
}


void MainWindow::on_p2end_clicked()
{
    if(gameTime == 0)
        return;

    currentPlayer = 2;
    qTimer->start(1000);

    setGameInfoText("Game ongoing", 14);
}


void MainWindow::on_label_linkActivated(const QString &)
{
}


void MainWindow::on_pushButton_3_clicked()
{
    gameTime = 120;
    player1Time = gameTime;
    player2Time = gameTime;

    updateProgressBars();
    setGameInfoText("120 sec selected", 14);
}


void MainWindow::on_pushButton_4_clicked()
{
    gameTime = 300;
    player1Time = gameTime;
    player2Time = gameTime;

    updateProgressBars();
    setGameInfoText("5 min selected", 14);
}


void MainWindow::on_pushButton_5_clicked()
{
    gameTime = 120;
    player1Time = gameTime;
    player2Time = gameTime;
    currentPlayer = 1;

    ui->progressBar->setRange(0,gameTime);
    ui->progressBar_2->setRange(0,gameTime);
    ui->progressBar->setValue(gameTime);
    ui->progressBar_2->setValue(gameTime);

    qTimer = new QTimer(this);
    qTimer->setInterval(1000);
    qTimer->start();

}


void MainWindow::on_pushButton_6_clicked()
{
    qTimer->stop();
    setGameInfoText("Game stopped", 14);

    qTimer->stop();

    player1Time = gameTime;
    player2Time = gameTime;

    updateProgressBars();
    setGameInfoText("Game reset", 12);
}


void MainWindow::updateProgressBars()
{
    if(gameTime == 0)
        return;

    int p1 = (100 * player1Time) / gameTime;
    int p2 = (100 * player2Time) / gameTime;

    if(p1 < 0) p1 = 0;
    if(p2 < 0) p2 = 0;

    ui->progressBar->setValue(p1);
    ui->progressBar_2->setValue(p2);
}


void MainWindow::setGameInfoText(QString text, int size)
{
    ui->label->setText(text);

    QFont font = ui->label->font();
    font.setPointSize(size);
    ui->label->setFont(font);
}
