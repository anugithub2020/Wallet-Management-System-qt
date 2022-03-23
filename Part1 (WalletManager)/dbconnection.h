#ifndef DBCONNECTION_H
#define DBCONNECTION_H

#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QDir>
#include <QMessageBox>
#include <QFileInfo>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <iostream>
#include <fstream>
#include <string>

/**
 * @brief  The Dbconnection class represents the connectivity of the Database.

 */
class dbconnection
{
public:

    /**
     * @brief This method will create an instance of the QSqlDatabase class and set path to the DB.
     */
    dbconnection();

    /**
     * @brief Path of the database is stored in the text file in the project folder.
     * If the path is not correct, user will have to select the database path by himself.
     * After selecting the database path, it will be stored in the text file.
     * @return The database path will be return as a QString.
     */
    QString getDatabasebPath();

    /**
     * @brief This function will test to see if the database is open and open the database if its not open.
     * @return true if connection is open, false otherwise.
     */
    bool connectDb();

    /**
     * @brief This function will test to see if the database is currently close and close the database if it’s not closed.
     */
    void closeDb();

private:
    QSqlDatabase database;
};

#endif // DBCONNECTION_H
