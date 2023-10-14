#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "x64/ui_logindialogsql.h"

MainWindow::MainWindow(QWidget *parent, Qt::WindowFlags type)
    : QMainWindow(parent, type)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    login_dialog = new LoginDialogSql();


	//QPalette win_pal (palette());
	auto win_pal2 = this->palette();
	win_pal2.setColor(QPalette::ColorRole::Window, QColor(49,93,239,200));
	//win_pal2.setColor(QPalette::ColorRole::Button, QColor(255,255,255,255));



//	win_pal2.setBrush(QPalette::Button, QBrush(QColor(49,93,239,200), Qt::SolidPattern));
//	win_pal2.setBrush(QPalette::Light, QBrush(QColor(49,93,239,200), Qt::SolidPattern));
//	win_pal2.setBrush(QPalette::Midlight, QBrush(QColor(49,93,239,200), Qt::SolidPattern));
//	win_pal2.setBrush(QPalette::Dark, QBrush(QColor(49,93,239,200), Qt::SolidPattern));
//	win_pal2.setBrush(QPalette::Mid, QBrush(QColor(49,93,239,200), Qt::SolidPattern));
//	win_pal2.setBrush(QPalette::Base, QBrush(QColor(49,93,239,200), Qt::SolidPattern));
//	win_pal2.setBrush(QPalette::Shadow, QBrush(QColor(49,93,239,200), Qt::SolidPattern));
//	win_pal2.setBrush(QPalette::Highlight, QBrush(QColor(49,93,239,200), Qt::SolidPattern));
//	win_pal2.setBrush(QPalette::PlaceholderText, QBrush(QColor(49,93,239,200), Qt::SolidPattern));


	//win_pal2.setBrush(QPalette::ButtonText, Qt::blue);
	//win_pal2.setBrush(QPalette::Text, Qt::magenta);
	//win_pal2.setBrush(QPalette::All, QPalette::Base, Qt::green);
	//win_pal2.setBrush(QPalette::Window, QBrush(QColor(49,93,239,200), Qt::SolidPattern));

	this->setPalette(win_pal2);
	//ui->pb_exit->setPalette(win_pal2);
	//ui->pb_login_sql->setPalette(win_pal2);
	this->setStyleSheet("QMainWindow{background-color:;}");
	this->setStyleSheet("QPushButton{background-color:white;} QPushButton:hover{background-color:red;} QPushButton:pressed {background-color:magenta; }");
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

