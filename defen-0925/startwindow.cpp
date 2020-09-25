#include "startwindow.h"
#include "ui_startwindow.h"

startwindow::startwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::startwindow)
{
    ui->setupUi(this);
}

startwindow::~startwindow()
{
    delete ui;
}

void startwindow::on_change_clicked()
{
    static int i = 0;
    ui->stackedWidget->setCurrentIndex(++i % 4);
}
