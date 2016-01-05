#include <QApplication>
#include "mainwindow.h"
#include "accountsmanager.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    AccountsManager accounts_manager;
    QSqlDatabase db = QSqlDatabase::addDatabase( "QSQLITE" );
    db.setDatabaseName( "/home/ldenis/accounts.db" );
    db.open();

    accounts_manager.setDatabase( &db );

    MainWindow w;
    w.show();
    w.setAccountsManager( &accounts_manager );

    return a.exec();
}
