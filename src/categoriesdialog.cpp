#include "categoriesdialog.h"
#include "ui_categoriesdialog.h"
#include "accountsmanager.h"
#include <QtSql/QSqlRelationalDelegate>

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

void CategoriesDialog::setAccountsManager( AccountsManager * accounts_manager ) {
    this->accounts_manager = accounts_manager;
    this->ui->tableCategories->setModel( accounts_manager->getCategories() );
    this->ui->tableCategories->setItemDelegate( new QSqlRelationalDelegate( this->ui->tableCategories ) );
    this->ui->tableCategories->setColumnHidden(0,true);
    this->ui->tableCategories->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
}
