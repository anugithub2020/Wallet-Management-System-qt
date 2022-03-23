#ifndef ADDINCOME_H
#define ADDINCOME_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QSqlRecord>
#include "income.h"


namespace Ui {
class AddIncome;
}

/**
 * @brief The AddIncome class is a child of QWidget and it is essentially the screen used
 * to add a New Income or Edit a previous Income record.
 */
class AddIncome : public QWidget
{
    Q_OBJECT

public:

    /**
     * @brief Creates the UI, setting up the connectors and  an instance of the income class is created.
     * @param parent refers to the QWidget that calls this constructor
     */
    explicit AddIncome(QWidget *parent = 0);

    ~AddIncome(); //!< This is the destructor of this class and it will delete the AddIncome UI instance
    /**
     * @brief This function will create the screen to conduct an income edit.
     * @param tableModel will contain a single record which will be loaded to the fields
     * of the Addexpense screen fields.
     */
    void setupEdit(QSqlTableModel* tableModel);

private slots:

    /**
     * @brief This function will get all the values from the text fields and stores within an income object. After
     * After the validation, the object will be saved in the database.
     */
    void save();

    void clear(); //!< This function will clear all the fields and reset the date to today.




private:
    Ui::AddIncome *ui;
    Transaction *income; //polymorphism
    int tempId;
};

#endif // ADDINCOME_H
