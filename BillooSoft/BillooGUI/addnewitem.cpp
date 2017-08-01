#include "addnewitem.h"
#include "ui_addnewitem.h"

AddNewItem::AddNewItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNewItem)
{
    ui->setupUi(this);
}

AddNewItem::~AddNewItem()
{
    delete ui;
}
