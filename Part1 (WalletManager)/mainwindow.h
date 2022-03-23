#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include "dbconnection.h"
#include "addincome.h"
#include "addexpense.h"
#include "viewincome.h"
#include "viewexpense.h"
#include "settings.h"

namespace Ui {
class MainWindow;
}

/**
 * @brief The mainWidnow is a child of QMainWindow and it acts as the controller and contains all the QWidgets of the application.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    /**
     * @brief      The constructor creates the UI, Hides the close button of the displayed tab,
     * calls the account details method and it will displayed the calculated values of the transaction on the main tab.
     * @param parent describes the object that calls this constructor.
     */
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow(); //!< This is the destructor of this class and closes the database
signals:
    void on_actionLog_out_triggered();

private slots:

    void onAddIncome(); //!< Opens a new tab and sets up the UI for New Income

    void onAddExpense(); //!< Opens a new tab and sets up the UI for New Expense

    void onViewIncome(); //!< Opens a new tab and sets up the UI for View Income

    void onViewExpense(); //!< Opens a new tab and sets up the UI for View Expense

    /**
     * @brief Current opened tab will be closed.
     * @param index refers to the id(index) of the current tab.
     */
    void closeTab(int index);

    /**
     * @brief check if a tab is opened or not and if it is open, tab will be moved
     * @param label means the name of the tab that we want to validate the existence.
     * @return true if given tab exists, false otherwise.
     */
    bool tabExists(QString label);

    /**
     * @brief Recalculated the transaction valuesdisplayed in the main but tab index should be Zero
     * @param index refers to the index of the tab.
     */
    void account_details(int index);


    void account_details(); //!< settings tab is opened if it is not opened.

    /**
     * @brief opens new tab to edit the transactions.
     * @param type describes whether its a Income or Expense transacion.
     * @param tableModel is a single of row of the database to be updated.
     */
    void editTransaction(QString type, QSqlTableModel* tableModel);

    void quitApp(); //!< this will terminate the application, it is called only when quit application is clicked
private:
    Ui::MainWindow *ui;
    dbconnection *dbConn;

    AddIncome *addIncome;
    AddExpense *addExpense;
    ViewIncome *viewIncome;
    ViewExpense *viewExpense;
    Settings *settings;

};

#endif // MAINWINDOW_H
