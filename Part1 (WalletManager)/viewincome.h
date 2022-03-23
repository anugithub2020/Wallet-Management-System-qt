#ifndef VIEWINCOME_H
#define VIEWINCOME_H

#include <QWidget>
#include <QSqlTableModel>
#include <QDebug>
#include <QSqlQueryModel>
#include "income.h"

namespace Ui {
class ViewIncome;
}

/**
 * @brief View income is a child of QWidget and it is the screen needed to View all the income records
 */
class ViewIncome : public QWidget
{
    Q_OBJECT

public:

    /**
     * @brief Creates the UI, an instance of the income class is created and sets the table up.
     * @param parent refers to the QWidget that calls this constructor
     */
    explicit ViewIncome(QWidget *parent = 0);

    ~ViewIncome(); //!< This is the destructor of this class and it will delete the instance of the ViewIncome UI




void setupTable(); //!< Creates the table with income data that is stored in the database

signals:
    void editTransactionClicked(QString type, QSqlTableModel* tableModel);

private slots:
    void on_btnDelete_clicked(); //!< This method is triggered when the delete button is clicked.

    void on_btnEdit_clicked(); //!< This method is triggered when the update button is clicked.

private:
    Ui::ViewIncome *ui;
    Transaction *income;
    QSqlTableModel *tableModel;
    QSqlQueryModel *queryModel;
};

#endif // VIEWINCOME_H
