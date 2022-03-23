/********************************************************************************
** Form generated from reading UI file 'viewincome.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWINCOME_H
#define UI_VIEWINCOME_H

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

class Ui_ViewIncome
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *btnDelete;
    QPushButton *btnEdit;
    QSpacerItem *verticalSpacer;
    QTableView *tblIncome;
    QLabel *viewIncome;

    void setupUi(QWidget *ViewIncome)
    {
        if (ViewIncome->objectName().isEmpty())
            ViewIncome->setObjectName(QStringLiteral("ViewIncome"));
        ViewIncome->resize(650, 400);
        gridLayout_2 = new QGridLayout(ViewIncome);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(10, -1, -1, -1);
        btnDelete = new QPushButton(ViewIncome);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));

        gridLayout->addWidget(btnDelete, 1, 0, 1, 1);

        btnEdit = new QPushButton(ViewIncome);
        btnEdit->setObjectName(QStringLiteral("btnEdit"));

        gridLayout->addWidget(btnEdit, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        tblIncome = new QTableView(ViewIncome);
        tblIncome->setObjectName(QStringLiteral("tblIncome"));
        tblIncome->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblIncome->setSelectionMode(QAbstractItemView::SingleSelection);
        tblIncome->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout_2->addWidget(tblIncome, 1, 0, 1, 1);

        viewIncome = new QLabel(ViewIncome);
        viewIncome->setObjectName(QStringLiteral("viewIncome"));
        QFont font;
        font.setPointSize(20);
        viewIncome->setFont(font);
        viewIncome->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(viewIncome, 0, 0, 1, 2);


        retranslateUi(ViewIncome);

        QMetaObject::connectSlotsByName(ViewIncome);
    } // setupUi

    void retranslateUi(QWidget *ViewIncome)
    {
        ViewIncome->setWindowTitle(QApplication::translate("ViewIncome", "Form", Q_NULLPTR));
        btnDelete->setText(QApplication::translate("ViewIncome", "Delete", Q_NULLPTR));
        btnEdit->setText(QApplication::translate("ViewIncome", "Update", Q_NULLPTR));
        viewIncome->setText(QApplication::translate("ViewIncome", "Income", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViewIncome: public Ui_ViewIncome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWINCOME_H
