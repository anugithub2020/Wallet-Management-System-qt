#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "user.h"
#include "mainwindow.h"

namespace Ui {
class Login;

}
/**
 * @brief The Login class is child of the QDialog class is called when the application is compiled.
 * This screen is called again if the logout is clicked from the MainWindow.
 * This class describes the user
 */

class Login : public QDialog
{
    Q_OBJECT

public:

    /**
     * @brief Creates the UI, initiate MainWindow and the user class and matches the signal to their slots
     * @param parent describes the class which is called by QWidget
     */
    explicit Login(QWidget *parent = 0);

    ~Login(); //!< This is the destructor of this class and it will delete the Login UI instance

private slots:

    void on_btnExit_clicked(); //!< Application will be terminated with the database connection

    /**
     * @brief checking the user credentials with the user class
     *  this will open the main window if the credentials are validated correctly if not message box will appear
     */
    void login();

    /**
     * @brief 	this will hide the main screen and directed back to the login screen.
     */
    void logout();

signals:
    void loginClicked();

private:
    Ui::Login *ui;
    User *user;
    MainWindow *w;

};

#endif // LOGIN_H
