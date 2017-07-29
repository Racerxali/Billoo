#include "salesdialog.h"
#include "ui_salesdialog.h"

Salesdialog::Salesdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Salesdialog)
{
    ui->setupUi(this);
}

Salesdialog::~Salesdialog()
{
    delete ui;
}
