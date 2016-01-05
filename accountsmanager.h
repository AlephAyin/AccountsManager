#ifndef ACCOUNTSMANAGER_H
#define ACCOUNTSMANAGER_H

#include <QObject>
#include <QtSql/QSqlDatabase>

class AccountsManager : public QObject {

    Q_OBJECT
public:
    explicit AccountsManager(QObject *parent = 0);
    void setDatabase( QSqlDatabase * db );
    bool isDatabaseConnected();

private:
    QSqlDatabase * db;

signals:

public slots:

};

#endif // ACCOUNTSMANAGER_H
