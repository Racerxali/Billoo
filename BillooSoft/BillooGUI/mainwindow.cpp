#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addnewitem.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAdd_New_Item_triggered()
{
    AddNewItem *AddItemDlg=new AddNewItem(this);
    AddItemDlg->exec();
}
