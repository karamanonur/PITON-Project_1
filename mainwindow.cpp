#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QProcess>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QUrlQuery>
#include <QNetworkReply>
#include <QUrl>
#include <QDebug>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timerfunction()));
    timer -> start(1000);

    day_timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(datefunction()));
    day_timer -> start(10000000);

    stopwatch_timer = new QTimer(this);
    connect(stopwatch_timer, SIGNAL(timeout()), this, SLOT(stopwatch_function()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timerfunction()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");
    ui -> current_time -> setText(time_text);

}

void MainWindow::datefunction()
{
    QDate date = QDate::currentDate();
    ui -> date_label -> setText(date.toString("dd MMM yyyy"));
}

void MainWindow::on_pushButton_4_takenote_clicked()
{
    note.show();
    this -> hide();
}

void MainWindow::stopwatch_function()
{
    QTime stopwatch_current = QTime::currentTime();
    int i = this -> stopwatch_current_time.msecsTo(stopwatch_current);
    QTime show_time(0, 0, 0, 0);
    show_time = show_time.addMSecs(i);
    Str = show_time.toString("hh:mm:ss:zzz");
    this -> ui -> stopwatch -> setText(Str);
}

void MainWindow::on_startbutton_clicked()
{
    this -> ui -> startbutton -> setEnabled(false);
    this -> ui -> pausebutton -> setEnabled(true);
    this -> ui -> lapbutton -> setEnabled(true);
    this -> ui -> stop_reset_button -> setEnabled(true);
    this -> stopwatch_current_time = QTime::currentTime();
    this -> stopwatch_timer -> start(1);
}

void MainWindow::on_lapbutton_clicked()
{
    this -> ui -> textBrowser -> append(this->Str);

}

void MainWindow::on_stop_reset_button_clicked()
{
    if(this->ui->pausebutton->text() == "Continue"){
        this->ui->pausebutton->setText("Pause");
    }
    if(this->ui->stop_reset_button->text()=="Stop"){
        this -> ui -> startbutton -> setEnabled(false);
        this -> ui -> pausebutton -> setEnabled(false);
        this -> ui -> lapbutton -> setEnabled(false);
        this->stopwatch_timer->stop();
        this->ui->stop_reset_button->setText("Reset");

    }
    else{
        this->ui->stopwatch->setText("00:00:000");
        this->ui->textBrowser->clear();
        this->ui->stop_reset_button->setText("Stop");
        this->ui->startbutton->setEnabled(true);
        this->ui->pausebutton->setEnabled(true);
        this->ui->lapbutton->setEnabled(true);

    }
}

void MainWindow::on_pausebutton_clicked()
{
    static QTime pause_time;
    if(this->ui->pausebutton->text()=="Pause"){
        pause_time = QTime::currentTime();
        this -> stopwatch_timer -> stop();
        this -> ui -> pausebutton -> setText("Continue");
    }else{
        this -> ui -> pausebutton -> setText("Pause");
        QTime cut_time = QTime::currentTime();
        int i = pause_time.msecsTo(cut_time);
        this -> stopwatch_current_time = this -> stopwatch_current_time.addMSecs(i);
        this -> stopwatch_timer -> start(1);
    }
}



void MainWindow::weather(QNetworkReply *reply)
{
    ui -> feels_like -> display(000);
    ui -> desc_label -> setText("");
    if(!reply->error()){
        QJsonDocument document = QJsonDocument::fromJson(reply->readAll());
        QJsonObject root = document.object();
        QJsonValue main = root.value("main");
        QJsonValue weather = root.value("weather");
        QJsonArray weatherarray = weather.toArray();
        QJsonObject desc = weatherarray.at(0).toObject();
        QString description = desc.value("description").toString();
        QJsonObject objmain = main.toObject();
        QStringList val_main = objmain.keys();
        QString feels_val = val_main.at(0);
        double feels_temp = objmain[feels_val.toLocal8Bit()].toDouble();
        ui -> feels_like -> display(feels_temp);
        QPixmap clear_sky(":/WeatherIcons/weather_icons/clearsky.png");
        QPixmap few_clouds(":/WeatherIcons/weather_icons/fewclouds.png");
        QPixmap scattered_clouds(":/WeatherIcons/weather_icons/scatteredclouds.png");
        QPixmap broken_clouds(":/WeatherIcons/weather_icons/brokenclouds.png");
        QPixmap rain(":/WeatherIcons/weather_icons/rain.png");
        QPixmap thunderstorm(":/WeatherIcons/weather_icons/thunderstorm.png");
        QPixmap snow(":/WeatherIcons/weather_icons/snow.png");
        QPixmap foggy(":/WeatherIcons/weather_icons/foggy.png");
        if(description=="clear sky"){
            ui -> desc_label -> setText("Clear Sky");
            ui -> weather_pic -> setPixmap(clear_sky);
            ui -> weather_pic -> setPixmap(clear_sky.scaled(130,130,Qt::KeepAspectRatio));
        }
        if(description=="few clouds"){
            ui -> desc_label -> setText("Few Clouds");
            ui -> weather_pic -> setPixmap(few_clouds);
            ui -> weather_pic -> setPixmap(few_clouds.scaled(130,130,Qt::KeepAspectRatio));
        }
        if(description=="scattered clouds"){
            ui -> desc_label -> setText("Scattered Clouds");
            ui -> weather_pic -> setPixmap(scattered_clouds);
            ui -> weather_pic -> setPixmap(scattered_clouds.scaled(130,130,Qt::KeepAspectRatio));
        }
        if(description=="broken clouds"){
            ui -> desc_label -> setText("Broken Clouds");
            ui -> weather_pic -> setPixmap(broken_clouds);
            ui -> weather_pic -> setPixmap(broken_clouds.scaled(130,130,Qt::KeepAspectRatio));
        }
        if(description=="shower rain" || description=="rain"){
            ui -> desc_label -> setText("Rain");
            ui -> weather_pic -> setPixmap(rain);
            ui -> weather_pic -> setPixmap(rain.scaled(130,130,Qt::KeepAspectRatio));
        }
        if(description=="thunderstorm"){
            ui -> desc_label -> setText("Thunderstorm");
            ui -> weather_pic -> setPixmap(thunderstorm);
            ui -> weather_pic -> setPixmap(thunderstorm.scaled(130,130,Qt::KeepAspectRatio));
        }
        if(description=="snow"){
            ui -> desc_label -> setText("Snow");
            ui -> weather_pic -> setPixmap(snow);
            ui -> weather_pic -> setPixmap(snow.scaled(130,130,Qt::KeepAspectRatio));
        }
        if(description=="mist"){
            ui -> desc_label -> setText("Foggy");
            ui -> weather_pic -> setPixmap(foggy);
            ui -> weather_pic -> setPixmap(foggy.scaled(130,130,Qt::KeepAspectRatio));
        }
    }
    reply -> deleteLater();
    qDebug()<<"pressed";

}


void MainWindow::on_weatherbutton_clicked()
{

    networkManager = new QNetworkAccessManager ();
    connect(networkManager, &QNetworkAccessManager::finished, this, &MainWindow::weather);
    networkManager->get(QNetworkRequest(QUrl("http://api.openweathermap.org/data/2.5/weather?q=Eskişehir&appid=00812ae868b1773ca9e70c3bfdf69295&units=metric")));
}

