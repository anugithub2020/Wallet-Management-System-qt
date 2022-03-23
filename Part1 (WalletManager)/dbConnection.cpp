#include "dbconnection.h"

using namespace std;
dbconnection::dbconnection()
{
    qDebug() << "DEBUG: Connecting to database ...";
    database = QSqlDatabase::addDatabase("QSQLITE");

    QString dbPath = getDatabasebPath();

    if(dbPath == NULL) {
        QMessageBox::information(0, "Not Found", "Unable to find the database! Wallet will exit now.");
        exit(213);
    }

    database.setDatabaseName(dbPath);
}

QString dbconnection::getDatabasebPath()
{
    QFile* dbPathTxt = new QFile(QDir::currentPath()+"/dbpath.txt");
    if(!dbPathTxt->open(QIODevice::ReadWrite | QIODevice::Text)) {
        QMessageBox::information(0, "error", dbPathTxt->errorString());
        string txtSPath = ("/dbpath.txt");
        std::ofstream o(txtSPath.c_str());
        o << "D:/debug/WalletManager/WalletManager.sqlite" << std::endl;
    }
    QTextStream in(dbPathTxt);
    QString *dbPath = new QString;
    while(!in.atEnd()) {
        *dbPath = in.readLine();
    }
    QFile dbFile(*dbPath);
    QFileDialog fileDialog;
    while(!dbFile.exists()) {
        *dbPath = fileDialog.getOpenFileName(0,"Open database", QDir::currentPath(), "SQLITE Database (*.sqlite)");
        if(dbPath->isEmpty()) {
            dbPathTxt->close();
            return NULL;
        }
        dbFile.setFileName(*dbPath);
        QTextStream newPath(dbPathTxt);
        newPath << *dbPath << endl;
    }
    qDebug() << "DEBUG: fileName is" << dbPath;
    dbPathTxt->close();
    return *dbPath;
}

bool dbconnection::connectDb()
{
    bool isConnected = database.isOpen();

    if(!isConnected) {
        isConnected = database.open();
    }

    if(database.isOpen())
        qDebug() << "DEBUG: Connected to database ...";

    return isConnected;

}

void dbconnection::closeDb()
{
    if(database.isOpen())
        database.close();
    qDebug() << "DEBUG: Closed DbConnection ...";
}

