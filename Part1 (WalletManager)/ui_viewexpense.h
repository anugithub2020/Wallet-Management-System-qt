/********************************************************************************
** Form generated from reading UI file 'viewexpense.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWEXPENSE_H
#define UI_VIEWEXPENSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewExpense
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QSpacerItem *verticalSpacer;
    QTableView *tblExpense;
    QLabel *label;

    void setupUi(QWidget *ViewExpense)
    {
        if (ViewExpense->objectName().isEmpty())
            ViewExpense->setObjectName(QStringLiteral("ViewExpense"));
        ViewExpense->resize(650, 400);
        gridLayout_2 = new QGridLayout(ViewExpense);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(10, -1, -1, -1);
        btnEdit = new QPushButton(ViewExpense);
        btnEdit->setObjectName(QStringLiteral("btnEdit"));

        gridLayout->addWidget(btnEdit, 0, 0, 1, 1);

        btnDelete = new QPushButton(ViewExpense);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));

        gridLayout->addWidget(btnDelete, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        tblExpense = new QTableView(ViewExpense);
        tblExpense->setObjectName(QStringLiteral("tblExpense"));
        tblExpense->setSelectionMode(QAbstractItemView::SingleSelection);
        tblExpense->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblExpense->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(tblExpense, 1, 0, 1, 1);

        label = new QLabel(ViewExpense);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 2);


        retranslateUi(ViewExpense);

        QMetaObject::connectSlotsByName(ViewExpense);
    } // setupUi

    void retranslateUi(QWidget *ViewExpense)
    {
        ViewExpense->setWindowTitle(QApplication::translate("ViewExpense", "Form", Q_NULLPTR));
        btnEdit->setText(QApplication::translate("ViewExpense", "Update", Q_NULLPTR));
        btnDelete->setText(QApplication::translate("ViewExpense", "Delete", Q_NULLPTR));
        label->setText(QApplication::translate("ViewExpense", " Expenses", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViewExpense: public Ui_ViewExpense {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWEXPENSE_H
