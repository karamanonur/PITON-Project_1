#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QProcess>
#include <QNetworkAccessManager>
#include "notepad.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void timerfunction();
    void datefunction();
    void stopwatch_function();

private slots:
    void on_pushButton_4_takenote_clicked();
    void on_startbutton_clicked();
    void on_lapbutton_clicked();
    void on_pausebutton_clicked();
    void on_stop_reset_button_clicked();
    void weather(QNetworkReply *reply);
    void on_weatherbutton_clicked();

private:
    Ui::MainWindow *ui;
    Notepad note;
    QTimer *timer;
    QTimer *day_timer;
    QProcess *process;
    QTimer *stopwatch_timer;
    QTime stopwatch_current_time;
    QTime pause_time;
    QTime cut_time;
    QString Str;
    QNetworkAccessManager *networkManager;

};
#endif // MAINWINDOW_H
