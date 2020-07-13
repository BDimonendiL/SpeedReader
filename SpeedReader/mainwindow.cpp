#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionEditing_triggered()
{
    this -> w_EW = new EditingWindow(this);
    this -> w_EW -> show();
}

void MainWindow::on_actionHistory_triggered()
{
    this -> w_HW = new HistoryWindow(this);
    this -> w_HW -> show();
}

void MainWindow::on_actionSettings_triggered()
{
    this -> w_SW = new SettingsWindow(this);
    this -> w_SW -> show();
}

