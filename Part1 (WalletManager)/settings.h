#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include <QSqlTableModel>
#include <QInputDialog>
#include <QDebug>
#include <QSqlRecord>
#include <QSqlField>
#include <QDialog>
#include <QFormLayout>
#include <QDialogButtonBox>
#include <QMessageBox>
#include <QList>
#include "income.h"
#include "expense.h"
#include "user.h"

namespace Ui {
class Settings;
}

/**
 * @brief The Settings class is a child of QWidget and it is the screen needed used to manage all Settings related to Wallet Manager such as add users and categories
 */
class Settings : public QWidget
{
    Q_OBJECT

public:

    /**
     * @brief Creates the UI, initiates an instance of the income and expense classes
     * @param parent describes the QWidget that is called by this constructor
     */
    explicit Settings(QWidget *parent = 0);

    ~Settings(); //!< This is the destructor of this class and closes the database
signals:
    void toggleButtons(bool);
    void deleteRecord();

private slots:

    void on_btnIncomeCat_clicked(); //!< This method is triggered when the income category button is clicked.


    void on_btnExpenseCat_clicked(); //!< This method is triggered when the expense category button is clicked.

    void on_btnAddCat_clicked(); //!< This method is triggered when the add income category button is clicked.
    void on_btnEditCat_clicked(); //!< This method is triggered when the add expense category button is clicked.

    void on_btnUser_clicked(); //!< This method is triggered when the view all user button is clicked.
    void on_btnAddUser_clicked(); //!< This method is triggered when the add user button is clicked.
    void on_btnEditUser_clicked(); //!< This method is triggered when the table view is changed and toggle the visibility of the buttons

    /**
     * @brief This method is triggered when the table view is changed and toggle the visibility of the buttons
     * @param on variable is true when tableView is Income or Expense Category, false if is in the User.
     */
    void doToggleButtons(bool on);

    void doDeleteRecord();  //!< This method is triggered when the delete or  button is clicked.

private:
    Ui::Settings *ui;
    QSqlTableModel *tableModel;
    Transaction *income;
    Transaction *expense;
    User *user;

    /**
     * @brief Creates the table view in the middle of the tab screen.
     * @param type describes the data type filled in the table.
     */
    void setupViewTable(QString type);

    /**
     * @brief Creates the table view in the middle of the tab screen.
     * @param username from the field
     * @param password from the field
     * @return true if the data is correcly inserted and false if not.
    **/

    bool insertUser(QString username, QString password);

    /**
     * @brief This will create new user and it will be stored in the database
     * @param rowNumber selected row number in the QTableView.
     * @param id of the selected record.
     * @param username of the selected record
     * @param password of the selected record
     * @return true if the data is correcly updated and false if not.
     */
    bool updateUser(int rowNumber, int id, QString username, QString password);

};

#endif // SETTINGS_H
