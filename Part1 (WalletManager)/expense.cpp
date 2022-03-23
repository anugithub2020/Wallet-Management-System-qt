#include "expense.h"

bool Expense::insertTransaction(Transaction* expense)
{
    //Prepare query
    QSqlQuery query;

    if(expense->getId() == -1) {
        qDebug() << "DEBUG: New transaction";
        query.prepare("INSERT INTO tblexpense(date, amount, payee, category, description) "
                      "VALUES(:date, :amount, :payee, :category, :description)");
    } else {
        qDebug() << "DEBUG: Update transaction";
        query.prepare("UPDATE tblexpense SET date = :date, amount = :amount, payee = :payee, category = :category, "
                      "description = :description WHERE id = :id");
        query.bindValue(":id", expense->getId());
    }

    query.bindValue(":date", expense->getDate());
    query.bindValue(":amount", expense->getAmount());
    query.bindValue(":payee", expense->getParty());
    query.bindValue(":category", expense->getCategory());
    query.bindValue(":description", expense->getDescription());

    //Execute query
    bool isSaved = query.exec();

    qDebug() << "DEBUG: Date saved: " << isSaved;
    qDebug() << "DEBUG: Last Error: " << query.lastError();

    query.finish();

    return isSaved;

}

bool Expense::updateTransaction(Transaction *expense)
{
    qDebug() << "DEBUG: Update transaction";

    //Prepare query
    QSqlQuery query;
    query.prepare("UPDATE tblexpense SET date = :date, amount = :amount, payee = :payee, category = :category, "
                  "description = :description WHERE id = :id");
    query.bindValue(":id", expense->getId());
    query.bindValue(":date", expense->getDate());
    query.bindValue(":amount", expense->getAmount());
    query.bindValue(":payee", expense->getParty());
    query.bindValue(":category", expense->getCategory());
    query.bindValue(":description", expense->getDescription());

    //Execute query
    bool isSaved = query.exec();

    qDebug() << "DEBUG: Date saved: " << isSaved;
    qDebug() << "DEBUG: Last Error: " << query.lastError();

    query.finish();

    return isSaved;
}
