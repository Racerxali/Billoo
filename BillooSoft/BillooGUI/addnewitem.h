#ifndef ADDNEWITEM_H
#define ADDNEWITEM_H

#include <QDialog>

namespace Ui {
class AddNewItem;
}

class AddNewItem : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewItem(QWidget *parent = 0);
    ~AddNewItem();

private:
    Ui::AddNewItem *ui;
};

#endif // ADDNEWITEM_H
