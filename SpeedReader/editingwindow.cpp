#include "editingwindow.h"
#include "ui_editingwindow.h"

EditingWindow::EditingWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditingWindow)
{
    ui->setupUi(this);
}

EditingWindow::~EditingWindow()
{
    delete ui;
}
