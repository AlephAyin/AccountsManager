#include "accountsmanager.h"

AccountsManager::AccountsManager(QObject *parent) : QObject(parent) {
}

void AccountsManager::setDatabase( QSqlDatabase * db ) {
    this->db = db;
}

bool AccountsManager::isDatabaseConnected() {
    return this->db->isOpen();
}

QSqlRelationalTableModel * AccountsManager::getCategories() {

    QSqlRelationalTableModel * categories = new QSqlRelationalTableModel();
    categories->setTable( "categories" );
    categories->select();

    return categories;
}
