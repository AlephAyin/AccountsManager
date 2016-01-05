#ifndef CATEGORIESDIALOG_H
#define CATEGORIESDIALOG_H

#include <QDialog>

namespace Ui {
class CategoriesDialog;
}

class CategoriesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CategoriesDialog(QWidget *parent = 0);
    ~CategoriesDialog();

private:
    Ui::CategoriesDialog *ui;
};

#endif // CATEGORIESDIALOG_H
