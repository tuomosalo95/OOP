#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_progressBar_valueChanged(int value);
    void on_progressBar_2_valueChanged(int value);

    void on_p1end_clicked();
    void on_p2end_clicked();

    void on_label_linkActivated(const QString &link);

    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();

    void timeout();

private:
    Ui::MainWindow *ui;

    QTimer *qTimer;

    short player1Time;
    short player2Time;
    short gameTime;
    short currentPlayer;

    void updateProgressBars();
    void setGameInfoText(QString text, int size);
};

#endif // MAINWINDOW_H
