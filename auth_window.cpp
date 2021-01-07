#include "auth_window.h"
#include "ui_auth_window.h"

Auth_Window::Auth_Window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Auth_Window)
{
    ui->setupUi(this);
}


Auth_Window::~Auth_Window()
{
    delete ui;
}

void Auth_Window::on_nameEdit_textEdited(const QString &arg1)
{
    Auth_Window::m_username = arg1;
}

void Auth_Window::on_passEdit_textEdited(const QString &arg1)
{
    Auth_Window::m_userpass = arg1;
}

QString Auth_Window::getLogin()
{
    return Auth_Window::m_username;
}

QString Auth_Window::getPass()
{
    return Auth_Window::m_userpass;
}

void Auth_Window::on_loginPushButton_clicked()
{
    emit login_button_clicked();
}

void Auth_Window::on_registerPushButton_clicked()
{
    emit register_button_clicked();
}
