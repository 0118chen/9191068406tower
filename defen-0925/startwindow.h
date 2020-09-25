#ifndef STARTWINDOW_H
#define STARTWINDOW_H

#include <QWidget>

namespace Ui {
class startwindow;
}

class startwindow : public QWidget
{
    Q_OBJECT

public:
    explicit startwindow(QWidget *parent = 0);
    ~startwindow();

private slots:
    void on_change_clicked();

private:
    Ui::startwindow *ui;
};

#endif // STARTWINDOW_H
