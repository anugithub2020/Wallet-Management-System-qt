#include "user.h"
#include <QDebug>

bool User::loginUser(QString username, QString password)
{
    QSqlQuery query;

    if(query.exec("SELECT * FROM tbluser WHERE USERNAME = '"+username+"' AND PASSWORD = '"+password+"'")) {
        while (query.next()) {
            return true;
        }
    }
    return false;

}
