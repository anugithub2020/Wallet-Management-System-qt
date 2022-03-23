#ifndef USER_H
#define USER_H

#include <QString>
#include <QSqlQuery>
#include "dbconnection.h"

/**
 * @brief User class represent the user object of the wallet manager application
 */
class User
{
public:

    /**
     * @brief This method will verify the user credentials that is entered with the database.
     * @return true if the credentials have a match,if not false
     */
    bool loginUser(QString, QString);

private:
    QString username;
    QString password;

};

#endif // USER_H
