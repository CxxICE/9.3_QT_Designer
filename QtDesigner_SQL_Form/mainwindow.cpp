#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "x64/ui_logindialogsql.h"

MainWindow::MainWindow(QWidget *parent, Qt::WindowFlags type)
    : QMainWindow(parent, type)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    login_dialog = new LoginDialogSql();


    QPalette win_pal (palette());
    win_pal.setColor(QPalette::ColorRole::Window, QColor(49,93,239,200));
    win_pal.setColor(QPalette::ColorRole::Button, QColor(255,255,255,255));
    this->setPalette(win_pal);
    ui->pb_exit->setPalette(win_pal);
    ui->pb_login_sql->setPalette(win_pal);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete login_dialog;
}

void MainWindow::on_pb_login_sql_clicked()
{
    login_dialog->show();
    return;
}

void MainWindow::on_pb_exit_clicked()
{
    this->close();
    return;
}

