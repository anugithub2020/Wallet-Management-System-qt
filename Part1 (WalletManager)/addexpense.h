#ifndef ADDEXPENSE_H
#define ADDEXPENSE_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QSqlRecord>
#include "expense.h"


namespace Ui {
class AddExpense;
}
/**
 * @brief The AddExpense class is a child of QWidget and it is the screen needed
 * to add a New Expense or Update an entered Expense record.
 */

class AddExpense : public QWidget
{
    Q_OBJECT

public:

    /**
     * @brief Creates the UI, setting up the connectors and  an instance of the expense class is created.
     * @param parent describes the QWidget that calls this constructor
     */
    explicit AddExpense(QWidget *parent = 0);

    ~AddExpense(); //!< This is the destructor of this class and it will delete the AddExpense UI instance

    /**
     * @brief This function will create the screen to conduct an expense edit.
     * @param tableModel will contain a single record which will be loaded to the fields
     * of the Addexpense screen feilds
     */
    void setupEdit(QSqlTableModel *tableModel);

private slots:

    /**
     * @brief This function will get all the values from the text fields and stores within an expense object.
     * After the validation, the object will be saved in the database.
     */
    void save();

    /**
     * @brief This function will clear all the fields and reset the date to today.
     */
    void clear();



private:
    Ui::AddExpense *ui;
    Transaction *expense; //polymorphism
    int tempId;
};

#endif // ADDEXPENSE_H
