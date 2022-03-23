#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <QSqlQuery>
#include <QDebug>
#include <QSqlTableModel>
#include <QModelIndexList>
#include <QStandardItemModel>
#include <QStandardItem>
#include "dbconnection.h"

/**
 * @brief This class represent the Transaction Object of Wallet Manager. Transaction class is an abstract class. This class contains two members called Income and Expense transaction types
 */
class Transaction
{
public:

    /**
     * @brief get the Id of the transaction
     * @return id
     */
    int getId() const;

    /**
     * @brief set the id of the tranaction
     * @param value describes the transaction Id
     */
    void setId(int value);

    /**
     * @brief get the date of the transaction
     * @return date
     */
    QString getDate() const;

    /**
     * @brief set the date of the transaction
     * @param value describes the transaction Date
     */
    void setDate(const QString &value);

    /**
     * @brief get the amount of the transaction
     * @return amount
     */
    int getAmount() const;

    /**
     * @brief set the date of the transaction
     * @param value describes the transaction Amount
     */
    void setAmount(int value);

    /**
     * @brief Get transaction party (paid to or paid by)
     * @return Paid to or paid by
     */
    QString getParty() const;

    /**
     * @brief set transaction party (paid to or paid by)
     * @param value describes the transaction Amount
     */
    void setParty(const QString &value);

    /**
     * @brief set the category of the transaction
     * @param value describes the transaction Category
     */
    void setCategory(const QString &value);

    /**
     * @brief get the category of the transaction
     * @return the Category
     */
    QString getCategory() const;

    /**
     * @brief set the description of the transaction
     * @return the Description
     */
    QString getDescription() const;

    /**
     * @brief set the description of the transaction
     * @param value describes the transaction Description
     */
    void setDescription(const QString &value);


public slots:

    /**
     * @brief Different types of transaction have to be recorded in different ways, there for this is implemented as pure virtual method .
     * @param transaction is a pointer points to an object of the type Transaction
     * @return bool variable is to verify the insersion record is successful
     */
    virtual bool insertTransaction(Transaction* transaction) = 0;

    /**
     * Different types of transaction have to be updated in different ways, there for this is implemented as pure virtual method .
     * @param transaction is a pointer which points to an object of the type Transaction
     * @return bool variable is to verify the updatind data is successful
     */

    virtual bool updateTransaction(Transaction* transaction) = 0;

    /**
     * @brief Returns a pointer to QSqlTableModel object that it created after querying the data.
     * @param type describes the data set to query from
     * @return a pointer to the QSqlTableModel
     */
    QSqlTableModel* viewTransaction(QString type);

    /**
     * @brief Returns a pointer to QSqlTableModel object that it created after querying the data and this contain one record.
     * @param type describes the data set to query from.
     * @param record that is equal to the id will be queried.
     * @return a pointer to the QSqlTableModel with one record.
     */
    QSqlTableModel* getTransaction(QString type, int id);

    /**
     * @brief Deletes the transaction from the database
     * @param list refers to the item that should be deleted.
     **/

    void deleteTransaction(QModelIndexList list);

    /**
     * @brief gets the categories as a list according to the type selected
     * @param type refers to which transaction category you want
     * @return a pointer to a QStandardItemModel object
     */
    QStandardItemModel* getCategoriesList(QString type);

private:
    dbconnection *dbConn;
    QSqlTableModel *tableModel;
    QSqlQueryModel *queryModel;
    QStandardItemModel *itemModel;

    int id;
    QString date;
    int amount;
    QString party; //paid to or paid by
    QString category;
    QString description;
};

#endif // TRANSACTION_H
