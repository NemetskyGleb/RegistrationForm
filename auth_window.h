#ifndef AUTH_WINDOW_H
#define AUTH_WINDOW_H

#include <QWidget>

namespace Ui {
class Auth_Window;
}

class Auth_Window : public QWidget
{
    Q_OBJECT

public:
    explicit Auth_Window(QWidget *parent = 0);
    ~Auth_Window();
    QString getLogin();
    QString getPass();
signals:
    void login_button_clicked();
    void register_button_clicked();
private slots:
    void on_nameEdit_textEdited(const QString &arg1);
    void on_passEdit_textEdited(const QString &arg1);
    void on_loginPushButton_clicked();
    void on_registerPushButton_clicked();

private:
    Ui::Auth_Window *ui;
    QString m_username;
    QString m_userpass;
};

#endif // AUTH_WINDOW_H
