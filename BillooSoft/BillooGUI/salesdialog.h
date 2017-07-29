#ifndef SALESDIALOG_H
#define SALESDIALOG_H

#include <QDialog>

namespace Ui {
class Salesdialog;
}

class Salesdialog : public QDialog
{
    Q_OBJECT

public:
    explicit Salesdialog(QWidget *parent = 0);
    ~Salesdialog();

private:
    Ui::Salesdialog *ui;
};

#endif // SALESDIALOG_H
