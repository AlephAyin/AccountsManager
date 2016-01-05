#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <accountsmanager.h>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    void displayCategories();

public:
    explicit MainWindow( QWidget *parent = 0);
    void setAccountsManager( AccountsManager * accounts_manager );
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    AccountsManager *accounts_manager;
};

#endif // MAINWINDOW_H
