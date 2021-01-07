#ifndef REG_WINDOW_H
#define REG_WINDOW_H

#include <QWidget>

namespace Ui {
class Reg_Window;
}

class Reg_Window : public QWidget
{
    Q_OBJECT

public:
    explicit Reg_Window(QWidget *parent = 0);
    ~Reg_Window();
    QString getName();
    QString getPass();
    bool checkPass();
signals:
    void register_button_clicked2();

private slots:
    void on_nameEdit_textEdited(const QString &arg1);
    void on_passEdit_textEdited(const QString &arg1);
    void on_confirmEdit_textEdited(const QString &arg1);
    void on_registerPushButton_clicked();

private:
    Ui::Reg_Window *ui;
    QString m_userName;
    QString m_userPass;
    QString m_confirmation;
};

#endif // REG_WINDOW_H
