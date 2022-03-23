/********************************************************************************
** Form generated from reading UI file 'addexpense.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEXPENSE_H
#define UI_ADDEXPENSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddExpense
{
public:
    QGridLayout *gridLayout;
    QLabel *lblHeader;
    QVBoxLayout *verticalLayout;
    QLabel *lblDescription;
    QTextEdit *txtDescription;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblDate;
    QDateEdit *txtDate;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblAmount;
    QLineEdit *txtAmount;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lblPayee;
    QLineEdit *txtPayee;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblCategory;
    QComboBox *cmbCategory;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnSave;
    QPushButton *btnClear;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *AddExpense)
    {
        if (AddExpense->objectName().isEmpty())
            AddExpense->setObjectName(QStringLiteral("AddExpense"));
        AddExpense->resize(650, 400);
        gridLayout = new QGridLayout(AddExpense);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lblHeader = new QLabel(AddExpense);
        lblHeader->setObjectName(QStringLiteral("lblHeader"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblHeader->sizePolicy().hasHeightForWidth());
        lblHeader->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(16);
        lblHeader->setFont(font);
        lblHeader->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblHeader, 0, 1, 1, 4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        lblDescription = new QLabel(AddExpense);
        lblDescription->setObjectName(QStringLiteral("lblDescription"));
        lblDescription->setMinimumSize(QSize(60, 25));

        verticalLayout->addWidget(lblDescription);

        txtDescription = new QTextEdit(AddExpense);
        txtDescription->setObjectName(QStringLiteral("txtDescription"));

        verticalLayout->addWidget(txtDescription);


        gridLayout->addLayout(verticalLayout, 1, 3, 5, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lblDate = new QLabel(AddExpense);
        lblDate->setObjectName(QStringLiteral("lblDate"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblDate->sizePolicy().hasHeightForWidth());
        lblDate->setSizePolicy(sizePolicy1);
        lblDate->setMinimumSize(QSize(60, 25));

        horizontalLayout_4->addWidget(lblDate);

        txtDate = new QDateEdit(AddExpense);
        txtDate->setObjectName(QStringLiteral("txtDate"));
        txtDate->setFocusPolicy(Qt::NoFocus);
        txtDate->setCalendarPopup(true);

        horizontalLayout_4->addWidget(txtDate);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lblAmount = new QLabel(AddExpense);
        lblAmount->setObjectName(QStringLiteral("lblAmount"));
        lblAmount->setMinimumSize(QSize(60, 25));

        horizontalLayout_2->addWidget(lblAmount);

        txtAmount = new QLineEdit(AddExpense);
        txtAmount->setObjectName(QStringLiteral("txtAmount"));
        txtAmount->setMinimumSize(QSize(100, 25));

        horizontalLayout_2->addWidget(txtAmount);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lblPayee = new QLabel(AddExpense);
        lblPayee->setObjectName(QStringLiteral("lblPayee"));
        lblPayee->setMinimumSize(QSize(60, 25));

        horizontalLayout_6->addWidget(lblPayee);

        txtPayee = new QLineEdit(AddExpense);
        txtPayee->setObjectName(QStringLiteral("txtPayee"));
        txtPayee->setMinimumSize(QSize(100, 25));

        horizontalLayout_6->addWidget(txtPayee);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lblCategory = new QLabel(AddExpense);
        lblCategory->setObjectName(QStringLiteral("lblCategory"));
        lblCategory->setMinimumSize(QSize(60, 25));

        horizontalLayout_7->addWidget(lblCategory);

        cmbCategory = new QComboBox(AddExpense);
        cmbCategory->setObjectName(QStringLiteral("cmbCategory"));
        cmbCategory->setMinimumSize(QSize(150, 25));

        horizontalLayout_7->addWidget(cmbCategory);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_2 = new QSpacerItem(65, 25, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        btnSave = new QPushButton(AddExpense);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setMaximumSize(QSize(100, 30));

        horizontalLayout_8->addWidget(btnSave);

        btnClear = new QPushButton(AddExpense);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        btnClear->setMaximumSize(QSize(100, 30));

        horizontalLayout_8->addWidget(btnClear);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_8);


        horizontalLayout->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout, 1, 1, 5, 1);

        QWidget::setTabOrder(txtPayee, btnSave);

        retranslateUi(AddExpense);

        cmbCategory->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(AddExpense);
    } // setupUi

    void retranslateUi(QWidget *AddExpense)
    {
        AddExpense->setWindowTitle(QApplication::translate("AddExpense", "Form", Q_NULLPTR));
        lblHeader->setText(QApplication::translate("AddExpense", "New Expense", Q_NULLPTR));
        lblDescription->setText(QApplication::translate("AddExpense", "Description: ", Q_NULLPTR));
        lblDate->setText(QApplication::translate("AddExpense", "Date: ", Q_NULLPTR));
        txtDate->setDisplayFormat(QApplication::translate("AddExpense", "dd/MM/yyyy", Q_NULLPTR));
        lblAmount->setText(QApplication::translate("AddExpense", "Amount: ", Q_NULLPTR));
        lblPayee->setText(QApplication::translate("AddExpense", "Paid to: ", Q_NULLPTR));
        lblCategory->setText(QApplication::translate("AddExpense", "Expense type: ", Q_NULLPTR));
        btnSave->setText(QApplication::translate("AddExpense", "Save", Q_NULLPTR));
        btnClear->setText(QApplication::translate("AddExpense", "Clear", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddExpense: public Ui_AddExpense {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEXPENSE_H
