#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "logindialogsql.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr, Qt::WindowFlags type = Qt::FramelessWindowHint);
    ~MainWindow();

private slots:
    void on_pb_login_sql_clicked();
    void on_pb_exit_clicked();

private:
    Ui::MainWindow *ui;
    LoginDialogSql *login_dialog;
};
#endif // MAINWINDOW_H
