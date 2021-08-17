/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *newButton;
    QPushButton *openButton;
    QPushButton *saveButton;
    QPushButton *saveAsButton;
    QPushButton *goBackButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName(QString::fromUtf8("Notepad"));
        Notepad->resize(400, 300);
        gridLayout = new QGridLayout(Notepad);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        newButton = new QPushButton(Notepad);
        newButton->setObjectName(QString::fromUtf8("newButton"));

        horizontalLayout->addWidget(newButton);

        openButton = new QPushButton(Notepad);
        openButton->setObjectName(QString::fromUtf8("openButton"));

        horizontalLayout->addWidget(openButton);

        saveButton = new QPushButton(Notepad);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        horizontalLayout->addWidget(saveButton);

        saveAsButton = new QPushButton(Notepad);
        saveAsButton->setObjectName(QString::fromUtf8("saveAsButton"));

        horizontalLayout->addWidget(saveAsButton);

        goBackButton = new QPushButton(Notepad);
        goBackButton->setObjectName(QString::fromUtf8("goBackButton"));

        horizontalLayout->addWidget(goBackButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        textEdit = new QTextEdit(Notepad);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);


        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QWidget *Notepad)
    {
        Notepad->setWindowTitle(QCoreApplication::translate("Notepad", "Notepad", nullptr));
        newButton->setText(QCoreApplication::translate("Notepad", "New", nullptr));
        openButton->setText(QCoreApplication::translate("Notepad", "Open", nullptr));
        saveButton->setText(QCoreApplication::translate("Notepad", "Save", nullptr));
        saveAsButton->setText(QCoreApplication::translate("Notepad", "Save As", nullptr));
        goBackButton->setText(QCoreApplication::translate("Notepad", "Go Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
