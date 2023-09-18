#include "logindialogsql.h"
#include "ui_logindialogsql.h"


LoginDialogSql::LoginDialogSql(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialogSql)
{
    ui->setupUi(this);
    ui->le_password->setEchoMode(QLineEdit::EchoMode::Password);//
    //port_validator = new QIntValidator(0, 65535, this);
    //ui->le_port->setValidator(port_validator);
    QPixmap pm = QPixmap(1,1);
    pm.fill(QColor(0,0,0,0));
    setWindowIcon(QIcon(pm));
}

LoginDialogSql::~LoginDialogSql()
{
    delete ui;
    //delete port_validator;
}

void LoginDialogSql::on_pb_Ok_clicked()
{
    host = ui->le_host->text();
    port = ui->sb_port->value();
    dbname = ui->le_dbname->text();
    username = ui->le_username->text();
    password = ui->le_password->text();
    this->close();
    return;
}


void LoginDialogSql::on_pb_Cancel_clicked()
{
    this->close();
    return;
}

