#include "notepad.h"
#include "ui_notepad.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

Notepad::Notepad(QWidget *parent) :
    QWidget(parent),
    ui2(new Ui::Notepad)
{
    ui2->setupUi(this);
}

Notepad::~Notepad()
{
    delete ui2;
}


void Notepad::on_newButton_clicked()
{
    file_path = "";
    ui2->textEdit->setText("");
}


void Notepad::on_openButton_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this, "Open the file");
    QFile file(file_name);
    file_path = file_name;
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        return;
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui2->textEdit->setText(text);
    file.close();
}


void Notepad::on_saveButton_clicked()
{
    QFile file(file_path);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        return;
    }
    QTextStream out(&file);
    QString text = ui2->textEdit->toPlainText();
    out<<text;
    file.flush();
    file.close();
}


void Notepad::on_saveAsButton_clicked()
{
    QString file_name = QFileDialog::getSaveFileName(this, "Open the file");
    QFile file(file_name);
    file_path = file_name;
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        return;
    }
    QTextStream out(&file);
    QString text = ui2->textEdit->toPlainText();
    out<<text;
    file.flush();
    file.close();
}

