#ifndef EXPENSE_H
#define EXPENSE_H

#include <QSqlQuery>
#include <QDebug>
#include "transaction.h"

/**
 * @brief Child of the Transaction class and models the expense object of Wallet Manager
 */
class Expense: public Transaction
{

public slots:

    /**
     * @brief This is pure virtual function in the base class
     * @param expense is a pointer which points to an Expense object
     * @return This will return true if the insertion is successful and false if not.
     */
    bool insertTransaction(Transaction* expense);

    /**
     * @brief Implementaion of the bool updateTransaction(Transaction*) which is a pure virtual
     * in the parent class.
     * @param expense is a pointer which points to an Expense object
     * @return This will return true if the insertion is successful and false if not.
     */
    bool updateTransaction(Transaction* expense);

};

#endif // EXPENSE_H
