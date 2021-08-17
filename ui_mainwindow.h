/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QFrame *dateTimeBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *date_label;
    QLabel *current_time;
    QVBoxLayout *verticalLayout_4;
    QLabel *stopwatch;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *startbutton;
    QPushButton *stop_reset_button;
    QPushButton *pausebutton;
    QPushButton *lapbutton;
    QHBoxLayout *horizontalLayout_6;
    QTextBrowser *textBrowser;
    QVBoxLayout *verticalLayout;
    QPushButton *weatherbutton;
    QPushButton *pushButton_4_takenote;
    QGroupBox *weatherBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *desc_label;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_2;
    QLCDNumber *feels_like;
    QLabel *weather_pic;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(880, 350);
        MainWindow->setMinimumSize(QSize(250, 150));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"	border-image: url(:/background/background/pexels-adrien-olichon-2387793.jpg);\n"
"}"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        dateTimeBox = new QFrame(centralwidget);
        dateTimeBox->setObjectName(QString::fromUtf8("dateTimeBox"));
        dateTimeBox->setStyleSheet(QString::fromUtf8("#dateTimeBox{\n"
"border-color: rgb(29, 41, 81);\n"
"border-width: 3px;\n"
"border-style: outset;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(dateTimeBox);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        date_label = new QLabel(dateTimeBox);
        date_label->setObjectName(QString::fromUtf8("date_label"));
        QFont font;
        font.setPointSize(29);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        date_label->setFont(font);
        date_label->setStyleSheet(QString::fromUtf8("color: rgb(168, 168, 168);"));
        date_label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(date_label);

        current_time = new QLabel(dateTimeBox);
        current_time->setObjectName(QString::fromUtf8("current_time"));
        QFont font1;
        font1.setPointSize(29);
        font1.setBold(true);
        font1.setWeight(75);
        current_time->setFont(font1);
        current_time->setLayoutDirection(Qt::LeftToRight);
        current_time->setStyleSheet(QString::fromUtf8("color: rgb(168, 168, 168);"));
        current_time->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(current_time);


        horizontalLayout_3->addWidget(dateTimeBox);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout->addLayout(horizontalLayout_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        stopwatch = new QLabel(centralwidget);
        stopwatch->setObjectName(QString::fromUtf8("stopwatch"));
        QFont font2;
        font2.setPointSize(33);
        font2.setBold(true);
        font2.setWeight(75);
        stopwatch->setFont(font2);
        stopwatch->setStyleSheet(QString::fromUtf8("color: rgb(168, 168, 168);\n"
"border-color: rgb(29, 41, 81);\n"
"border-width: 3px;\n"
"border-style: outset;\n"
"\n"
""));
        stopwatch->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(stopwatch);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        startbutton = new QPushButton(centralwidget);
        startbutton->setObjectName(QString::fromUtf8("startbutton"));
        startbutton->setStyleSheet(QString::fromUtf8("color: rgb(168, 168, 168);\n"
"background-color: rgb(29, 41, 81);"));

        horizontalLayout_2->addWidget(startbutton);

        stop_reset_button = new QPushButton(centralwidget);
        stop_reset_button->setObjectName(QString::fromUtf8("stop_reset_button"));
        stop_reset_button->setStyleSheet(QString::fromUtf8("color: rgb(168, 168, 168);\n"
"background-color: rgb(29, 41, 81);"));

        horizontalLayout_2->addWidget(stop_reset_button);

        pausebutton = new QPushButton(centralwidget);
        pausebutton->setObjectName(QString::fromUtf8("pausebutton"));
        pausebutton->setStyleSheet(QString::fromUtf8("color: rgb(168, 168, 168);\n"
"background-color: rgb(29, 41, 81);"));

        horizontalLayout_2->addWidget(pausebutton);

        lapbutton = new QPushButton(centralwidget);
        lapbutton->setObjectName(QString::fromUtf8("lapbutton"));
        lapbutton->setStyleSheet(QString::fromUtf8("color: rgb(168, 168, 168);\n"
"\n"
"background-color: rgb(29, 41, 81);\n"
""));

        horizontalLayout_2->addWidget(lapbutton);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_4);


        horizontalLayout_5->addLayout(horizontalLayout);


        horizontalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setMinimumSize(QSize(0, 0));

        horizontalLayout_6->addWidget(textBrowser);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        weatherbutton = new QPushButton(centralwidget);
        weatherbutton->setObjectName(QString::fromUtf8("weatherbutton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(weatherbutton->sizePolicy().hasHeightForWidth());
        weatherbutton->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        weatherbutton->setFont(font3);
        weatherbutton->setStyleSheet(QString::fromUtf8("background-color: rgb(130, 135, 136);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/cloudy.png"), QSize(), QIcon::Normal, QIcon::Off);
        weatherbutton->setIcon(icon);
        weatherbutton->setIconSize(QSize(50, 50));

        verticalLayout->addWidget(weatherbutton);

        pushButton_4_takenote = new QPushButton(centralwidget);
        pushButton_4_takenote->setObjectName(QString::fromUtf8("pushButton_4_takenote"));
        sizePolicy.setHeightForWidth(pushButton_4_takenote->sizePolicy().hasHeightForWidth());
        pushButton_4_takenote->setSizePolicy(sizePolicy);
        pushButton_4_takenote->setFont(font3);
        pushButton_4_takenote->setAutoFillBackground(false);
        pushButton_4_takenote->setStyleSheet(QString::fromUtf8("background-color: rgb(130, 135, 136);\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/post-it.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4_takenote->setIcon(icon1);
        pushButton_4_takenote->setIconSize(QSize(30, 30));
        pushButton_4_takenote->setCheckable(false);

        verticalLayout->addWidget(pushButton_4_takenote);


        horizontalLayout_6->addLayout(verticalLayout);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        gridLayout->addLayout(horizontalLayout_7, 0, 0, 1, 2);

        weatherBox = new QGroupBox(centralwidget);
        weatherBox->setObjectName(QString::fromUtf8("weatherBox"));
        weatherBox->setStyleSheet(QString::fromUtf8("#weatherBox{\n"
"border-color: rgb(29, 41, 81);\n"
"border-width: 3px;\n"
"border-style: outset;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(weatherBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(weatherBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font4;
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setWeight(75);
        label_3->setFont(font4);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(168, 168, 168);"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_3);

        desc_label = new QLabel(weatherBox);
        desc_label->setObjectName(QString::fromUtf8("desc_label"));
        desc_label->setFont(font4);
        desc_label->setLayoutDirection(Qt::RightToLeft);
        desc_label->setStyleSheet(QString::fromUtf8("color: rgb(168, 168, 168);"));
        desc_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(desc_label);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_2 = new QLabel(weatherBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(168, 168, 168);\n"
""));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_9->addWidget(label_2);

        feels_like = new QLCDNumber(weatherBox);
        feels_like->setObjectName(QString::fromUtf8("feels_like"));
        QFont font5;
        font5.setPointSize(20);
        feels_like->setFont(font5);
        feels_like->setStyleSheet(QString::fromUtf8("color: rgb(168, 168, 168);\n"
"border-style: outset;\n"
"\n"
""));

        horizontalLayout_9->addWidget(feels_like);


        verticalLayout_2->addLayout(horizontalLayout_9);


        gridLayout->addWidget(weatherBox, 1, 0, 1, 1);

        weather_pic = new QLabel(centralwidget);
        weather_pic->setObjectName(QString::fromUtf8("weather_pic"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(weather_pic->sizePolicy().hasHeightForWidth());
        weather_pic->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(weather_pic, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 880, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "chroNOTEmeter", nullptr));
        date_label->setText(QString());
        current_time->setText(QCoreApplication::translate("MainWindow", "00 : 00 : 00", nullptr));
        stopwatch->setText(QCoreApplication::translate("MainWindow", "00 : 00 : 00", nullptr));
        startbutton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        stop_reset_button->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        pausebutton->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        lapbutton->setText(QCoreApplication::translate("MainWindow", "Lap", nullptr));
        weatherbutton->setText(QCoreApplication::translate("MainWindow", "Update Weather", nullptr));
        pushButton_4_takenote->setText(QCoreApplication::translate("MainWindow", "Take Note", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Eski\305\237ehir, TURKEY", nullptr));
        desc_label->setText(QCoreApplication::translate("MainWindow", "Click \"Update Weather\" to see the weather forecast", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Temperature (Celsius):", nullptr));
        weather_pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
