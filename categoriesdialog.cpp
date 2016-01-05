#include "categoriesdialog.h"
#include "ui_categoriesdialog.h"

CategoriesDialog::CategoriesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CategoriesDialog)
{
    ui->setupUi(this);
}

CategoriesDialog::~CategoriesDialog()
{
    delete ui;
}
