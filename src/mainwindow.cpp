#include "mainwindow.h"
#include "categoriesdialog.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow( QWidget *parent ) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

void MainWindow::setAccountsManager( AccountsManager * accounts_manager ) {
    this->accounts_manager = accounts_manager;
    if( accounts_manager->isDatabaseConnected() ) {
        ui->statusBar->showMessage( "Connected to database" );
    }
    else {
        ui->statusBar->showMessage( "Database is not connected" );
    }
}

void MainWindow::displayCategories() {
    CategoriesDialog * childWindow =  new CategoriesDialog();
    childWindow->setAccountsManager( this->accounts_manager );
    childWindow->show();
}

MainWindow::~MainWindow() {
    delete ui;
}
