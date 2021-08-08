#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QWidget>

namespace Ui {
class Notepad;
}

class Notepad : public QWidget
{
    Q_OBJECT

public:
    explicit Notepad(QWidget *parent = nullptr);
    ~Notepad();

private slots:
    void on_newButton_clicked();

    void on_openButton_clicked();

    void on_saveButton_clicked();

    void on_saveAsButton_clicked();

private:
    Ui::Notepad *ui2;
    QString file_path;
};

#endif // NOTEPAD_H
