#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QtSql/QtSql>
#include "auth_window.h"
#include "reg_window.h"



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void display(); // прототип пользовательской функции отображения
    bool connectDB(); // прототип методка подключения к БД

private:
    Ui::MainWindow *ui_Main;

    Auth_Window ui_Auth; // экземляры окна авторизации и окна регистрации
    Reg_Window ui_Reg; // принадлежат главному окну

    QString m_username; // строки для обработки
    QString m_userpass; // пользовательского ввода

    QString db_input; // строка для отправки запроса к БД

    QSqlDatabase mw_db; // экзэмляр подклчения к БД

    int user_counter; // счетчик пользователей
    bool m_loginSuccesfull; // флаг успешной авторизации
private slots:
    void authorizeUser(); // пользовательские слоты
    void registerWindowShow();
    void registerUser();
};

#endif // MAINWINDOW_H
