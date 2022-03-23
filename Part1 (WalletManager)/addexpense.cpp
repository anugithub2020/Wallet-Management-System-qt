#include "addexpense.h"
#include "ui_addexpense.h"

AddExpense::AddExpense(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddExpense)
{
    ui->setupUi(this);
    expense = new Expense;
    tempId = -1;
     ui->txtDate->setDate(QDate::currentDate());
    ui->cmbCategory->setModel(expense->getCategoriesList("Expense"));

    connect(ui->btnSave, SIGNAL(clicked(bool)), this, SLOT(save()));
    connect(ui->btnClear, SIGNAL(clicked(bool)), this, SLOT(clear()));

}

AddExpense::~AddExpense()
{
    delete ui;
}

void AddExpense::setupEdit(QSqlTableModel *tableModel)
{
    ui->lblHeader->setText("Update Expense");
    QString format = "dd/MM/yyyy";
    this->tempId = tableModel->record(0).value(0).toInt();
    ui->txtDate->setDate(QDate::fromString(tableModel->record(0).value(1).toString(), format));
    ui->txtAmount->setText(tableModel->record(0).value(2).toString());
    ui->txtPayee->setText(tableModel->record(0).value(3).toString());
    ui->cmbCategory->setCurrentText(tableModel->record(0).value(4).toString());
    ui->txtDescription->setText(tableModel->record(0).value(5).toString());
}

void AddExpense::save()
{
    Transaction* expense = new Expense;
    expense->setId(this->tempId);
    expense->setDate(ui->txtDate->text());
    expense->setAmount(ui->txtAmount->text().toInt());
    expense->setParty(ui->txtPayee->text());
    expense->setCategory(ui->cmbCategory->currentText());
    expense->setDescription(ui->txtDescription->toPlainText());

    if(expense->getParty() == NULL || expense->getDescription() == NULL) {
        QMessageBox::warning(this, "Fields cannot be empty", "Please make sure all fields are entered");
        return;
    }
    else if(expense->getAmount() <= 0) {
        QMessageBox::warning(this, "Invalid amount", "The amount must be a valid number");
        return;
    }
    if(this->tempId == -1)  {
        bool inserted = expense->insertTransaction(expense);
        if(inserted) {
            QMessageBox::information(this, "Expense","Saved Successfully.");
            clear();
        }
        else
            QMessageBox::warning(this, "An error has occured", "Please try again.");
    }
    else {
        bool inserted = expense->updateTransaction(expense);
        if(inserted) {
            QMessageBox::information(this, "Expense", "Updated Successfully.");
            clear();
        }
        else
            QMessageBox::warning(this, "An error has occured", "Please try again.");
    }
}

void AddExpense::clear()
{
    ui->txtDate->setDate(QDate::currentDate());
    ui->txtAmount->clear();
    ui->txtDescription->clear();
    ui->txtPayee->clear();
}



