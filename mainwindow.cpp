#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QWidget>
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFocusPolicy(Qt::StrongFocus);
    x = 0;
}

void MainWindow::keyPressEvent(QKeyEvent *event) {
    QString actions = QString::number(x);
    ui->label_2->setText(actions);
    x++;
}

MainWindow::~MainWindow()
{
    delete ui;
}
