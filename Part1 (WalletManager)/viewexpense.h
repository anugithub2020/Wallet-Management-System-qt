#ifndef VIEWEXPENSE_H
#define VIEWEXPENSE_H

#include <QWidget>
#include <QSqlTableModel>
#include <QDebug>
#include <QSqlQueryModel>
#include "expense.h"

namespace Ui {
class ViewExpense;
}

/**
 * @brief View expense is a child of QWidget and it is the screen needed to View all the Expense records
 */
class ViewExpense : public QWidget
{
    Q_OBJECT

public:

    /**
     * @brief View expense is a child of QWidget and it is the screen needed to View all the Expense records
     * @param parent Describes the QWidget that call this constructor
     */
    explicit ViewExpense(QWidget *parent = 0);

    ~ViewExpense(); //!< This is the destructor of this class and it will delete the ViewExpense UI instance

    void setupTable(); //!< Creates the table with expense data that is stored in the database
signals:
    void editTransactionClicked(QString type, QSqlTableModel* tableModel);

private slots:
    void on_btnDelete_clicked(); //!< This method is triggered when the delete button is clicked.

    void on_btnEdit_clicked(); //!< This method is triggered when the update button is clicked.
private:
    Ui::ViewExpense *ui;
    Transaction *expense;
    QSqlTableModel *tableModel;
    QSqlQueryModel *queryModel;
};

#endif // VIEWEXPENSE_H
