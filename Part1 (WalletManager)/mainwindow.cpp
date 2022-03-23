#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QTabBar *tabBar = ui->tabWidget->findChild<QTabBar *>();
    tabBar->setTabButton(0, QTabBar::RightSide, 0);
    tabBar->setTabButton(0, QTabBar::LeftSide, 0);

    qDebug() << "DEBUG: Calling connectDb ... ";
    dbConn = new dbconnection();
    dbConn->connectDb();

    account_details(0);

    connect(ui->actionAdd_Income, SIGNAL(triggered(bool)), this, SLOT(onAddIncome()));
    connect(ui->actionAdd_Expense, SIGNAL(triggered(bool)), this, SLOT(onAddExpense()));
    connect(ui->actionView_Income, SIGNAL(triggered(bool)), this, SLOT(onViewIncome()));
    connect(ui->actionView_Expense, SIGNAL(triggered(bool)), this, SLOT(onViewExpense()));

    connect(ui->tabWidget, SIGNAL(tabCloseRequested(int)) ,this, SLOT(closeTab(int)));
    connect(ui->tabWidget, SIGNAL(currentChanged(int)), this, SLOT(account_details(int)));
      connect(ui->actionSettings, SIGNAL(triggered(bool)), this, SLOT(account_details()));


}

MainWindow::~MainWindow()
{
    dbConn->closeDb();
    delete ui;
}

void MainWindow::onAddIncome()
{
    QString label = "New Income";
    if (!tabExists(label)) {
        addIncome = new AddIncome(this);
        ui->tabWidget->insertTab(ui->tabWidget->count() + 1, addIncome, label);
        ui->tabWidget->setCurrentIndex(ui->tabWidget->count() - 1);
    }
}

void MainWindow::onAddExpense()
{
    QString label = "New Expense";
    if (!tabExists(label)) {
        addExpense = new AddExpense(this);
        ui->tabWidget->insertTab(ui->tabWidget->count() + 1, addExpense, label);
        ui->tabWidget->setCurrentIndex(ui->tabWidget->count() - 1);
    }
}

void MainWindow::onViewIncome()
{
    QString label = "View Income";
    if (!tabExists(label)) {
        viewIncome = new ViewIncome(this);
        connect(viewIncome, SIGNAL(editTransactionClicked(QString, QSqlTableModel*)), this, SLOT(editTransaction(QString, QSqlTableModel*)));
        ui->tabWidget->insertTab(ui->tabWidget->count() + 1, viewIncome, label);
        ui->tabWidget->setCurrentIndex(ui->tabWidget->count() - 1);
    } else
        viewIncome->setupTable();
}

void MainWindow::onViewExpense()
{
    QString label = "View Expense";
    if (!tabExists(label)) {
        viewExpense = new ViewExpense(this);
        connect(viewExpense, SIGNAL(editTransactionClicked(QString, QSqlTableModel*)), this, SLOT(editTransaction(QString, QSqlTableModel*)));
        ui->tabWidget->insertTab(ui->tabWidget->count() + 1, viewExpense, label);
        ui->tabWidget->setCurrentIndex(ui->tabWidget->count() - 1);
    } else
        viewExpense->setupTable();
}

void MainWindow::closeTab(int index)
{
    qDebug() << "DEBUG: Inside closeTab";
    ui->tabWidget->removeTab(index);
}

bool MainWindow::tabExists(QString label)
{
    for (int i = 0; i < ui->tabWidget->count(); i++) {
      if (ui->tabWidget->tabBar()->tabText(i) == label) {
        ui->tabWidget->setCurrentIndex(i);
        return true;
      }
    }
    return false;
}

void MainWindow::account_details(int index)
{
    qDebug() << "DEBUG: Inside Account details tab. index: " << index;
    if (index == 0) {
        QString totalIncome;
        QSqlQuery query1;
        query1.prepare("select total(amount) from tblincome");if( !query1.exec() )
            qDebug() << query1.lastError();
          while (query1.next())
              totalIncome = query1.value(0).toString();
          ui->lblIncomeAmount->setText(totalIncome);

        QString totalExpense;
        QSqlQuery query2;
        query2.prepare("select total(amount) from tblexpense");
        if( !query2.exec() )
          qDebug() << query2.lastError();
        while (query2.next())
            totalExpense = query2.value(0).toString();
        ui->lblExpenseAmount->setText(totalExpense);

        int income = totalIncome.toInt();
        int expense = totalExpense.toInt();
        int balance = income - expense;
        ui->lblBalanceAmount->setText(QString::number(balance));

        if(balance > 0)
            ui->lblBalanceAmount->setStyleSheet(ui->lblIncomeAmount->styleSheet());
        else
            ui->lblBalanceAmount->setStyleSheet(ui->lblExpenseAmount->styleSheet());
    }
}


void MainWindow::account_details()
{
    qDebug() << "DEBUG: Inside Settings";
    QString label = "Settings";
    if (!tabExists(label)) {
        settings = new Settings(this);
        ui->tabWidget->insertTab(ui->tabWidget->count() + 1, settings, label);
        ui->tabWidget->setCurrentIndex(ui->tabWidget->count() - 1);
    }
}

void MainWindow::editTransaction(QString type, QSqlTableModel *tableModel)
{
    qDebug() << "DEBUG: Inside update_transaction";
    if(type == "income") {
        qDebug() << "DEBUG: Update_transaction type == income";
        addIncome = new AddIncome(this);
        ui->tabWidget->insertTab(ui->tabWidget->count() + 1, addIncome, "Update Income");
        ui->tabWidget->setCurrentIndex(ui->tabWidget->count() - 1);
        addIncome->setupEdit(tableModel);
    }
    else if(type == "expense") {
        qDebug() << "DEBUG: update_transaction type == expense";
        addExpense = new AddExpense(this);
        ui->tabWidget->insertTab(ui->tabWidget->count() + 1, addExpense, "Update Expense");
        ui->tabWidget->setCurrentIndex(ui->tabWidget->count() - 1);
        addExpense->setupEdit(tableModel);
    }
}

void MainWindow::quitApp()
{
    qApp->exit();
}
