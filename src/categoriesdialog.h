#ifndef CATEGORIESDIALOG_H
#define CATEGORIESDIALOG_H

#include <QDialog>
#include "accountsmanager.h"

namespace Ui {
class CategoriesDialog;
}

class CategoriesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CategoriesDialog(QWidget *parent = 0);
    ~CategoriesDialog();
    void setAccountsManager( AccountsManager * accounts_manager );

private:
    Ui::CategoriesDialog *ui;
    AccountsManager * accounts_manager;
};

#endif // CATEGORIESDIALOG_H
