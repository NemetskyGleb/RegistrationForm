#include "reg_window.h"
#include "ui_reg_window.h"

Reg_Window::Reg_Window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Reg_Window)
{
    ui->setupUi(this);
}

Reg_Window::~Reg_Window()
{
    delete ui;
}

void Reg_Window::on_nameEdit_textEdited(const QString &arg1)
{
    Reg_Window::m_userName = arg1;
}

void Reg_Window::on_passEdit_textEdited(const QString &arg1)
{
    Reg_Window::m_userPass = arg1;
}

void Reg_Window::on_confirmEdit_textEdited(const QString &arg1)
{
    Reg_Window::m_confirmation = arg1;
}

void Reg_Window::on_registerPushButton_clicked()
{
    emit register_button_clicked2();
}

QString Reg_Window::getName()
{
    return m_userName;
}

QString Reg_Window::getPass()
{
    return m_userPass;
}

bool Reg_Window::checkPass()
{
    return (m_confirmation == m_userPass);
}
