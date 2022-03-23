/********************************************************************************
** Form generated from reading UI file 'addincome.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDINCOME_H
#define UI_ADDINCOME_H

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

class Ui_AddIncome
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblDate;
    QDateEdit *txtDate;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lblAmount;
    QLineEdit *txtAmount;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lblPayer;
    QLineEdit *txtPayer;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblCategory;
    QComboBox *cmbCategory;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSave;
    QPushButton *btnClear;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lblHeader;
    QVBoxLayout *verticalLayout;
    QLabel *lblDescription;
    QTextEdit *txtDescription;

    void setupUi(QWidget *AddIncome)
    {
        if (AddIncome->objectName().isEmpty())
            AddIncome->setObjectName(QStringLiteral("AddIncome"));
        AddIncome->resize(650, 400);
        gridLayout = new QGridLayout(AddIncome);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lblDate = new QLabel(AddIncome);
        lblDate->setObjectName(QStringLiteral("lblDate"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblDate->sizePolicy().hasHeightForWidth());
        lblDate->setSizePolicy(sizePolicy);
        lblDate->setMinimumSize(QSize(60, 25));

        horizontalLayout_4->addWidget(lblDate);

        txtDate = new QDateEdit(AddIncome);
        txtDate->setObjectName(QStringLiteral("txtDate"));
        txtDate->setFocusPolicy(Qt::NoFocus);
        txtDate->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        txtDate->setCalendarPopup(true);

        horizontalLayout_4->addWidget(txtDate);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        lblAmount = new QLabel(AddIncome);
        lblAmount->setObjectName(QStringLiteral("lblAmount"));
        lblAmount->setMinimumSize(QSize(60, 25));

        horizontalLayout_5->addWidget(lblAmount);

        txtAmount = new QLineEdit(AddIncome);
        txtAmount->setObjectName(QStringLiteral("txtAmount"));
        txtAmount->setMinimumSize(QSize(100, 25));

        horizontalLayout_5->addWidget(txtAmount);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lblPayer = new QLabel(AddIncome);
        lblPayer->setObjectName(QStringLiteral("lblPayer"));
        lblPayer->setMinimumSize(QSize(60, 25));

        horizontalLayout_6->addWidget(lblPayer);

        txtPayer = new QLineEdit(AddIncome);
        txtPayer->setObjectName(QStringLiteral("txtPayer"));
        txtPayer->setMinimumSize(QSize(100, 25));

        horizontalLayout_6->addWidget(txtPayer);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lblCategory = new QLabel(AddIncome);
        lblCategory->setObjectName(QStringLiteral("lblCategory"));
        lblCategory->setMinimumSize(QSize(60, 25));

        horizontalLayout_7->addWidget(lblCategory);

        cmbCategory = new QComboBox(AddIncome);
        cmbCategory->setObjectName(QStringLiteral("cmbCategory"));
        cmbCategory->setMinimumSize(QSize(150, 25));

        horizontalLayout_7->addWidget(cmbCategory);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer = new QSpacerItem(65, 25, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        btnSave = new QPushButton(AddIncome);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setMaximumSize(QSize(100, 30));

        horizontalLayout_8->addWidget(btnSave);

        btnClear = new QPushButton(AddIncome);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnClear->sizePolicy().hasHeightForWidth());
        btnClear->setSizePolicy(sizePolicy1);
        btnClear->setMinimumSize(QSize(0, 0));
        btnClear->setMaximumSize(QSize(100, 30));

        horizontalLayout_8->addWidget(btnClear);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_8);


        horizontalLayout_3->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        lblHeader = new QLabel(AddIncome);
        lblHeader->setObjectName(QStringLiteral("lblHeader"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblHeader->sizePolicy().hasHeightForWidth());
        lblHeader->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(16);
        lblHeader->setFont(font);
        lblHeader->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblHeader, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        lblDescription = new QLabel(AddIncome);
        lblDescription->setObjectName(QStringLiteral("lblDescription"));
        lblDescription->setMinimumSize(QSize(60, 25));

        verticalLayout->addWidget(lblDescription);

        txtDescription = new QTextEdit(AddIncome);
        txtDescription->setObjectName(QStringLiteral("txtDescription"));

        verticalLayout->addWidget(txtDescription);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        QWidget::setTabOrder(txtAmount, txtPayer);
        QWidget::setTabOrder(txtPayer, btnSave);
        QWidget::setTabOrder(btnSave, btnClear);

        retranslateUi(AddIncome);

        cmbCategory->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(AddIncome);
    } // setupUi

    void retranslateUi(QWidget *AddIncome)
    {
        AddIncome->setWindowTitle(QApplication::translate("AddIncome", "Form", Q_NULLPTR));
        lblDate->setText(QApplication::translate("AddIncome", "Date: ", Q_NULLPTR));
        txtDate->setDisplayFormat(QApplication::translate("AddIncome", "dd/MM/yyyy", Q_NULLPTR));
        lblAmount->setText(QApplication::translate("AddIncome", "Amount: ", Q_NULLPTR));
        lblPayer->setText(QApplication::translate("AddIncome", "Paid by: ", Q_NULLPTR));
        lblCategory->setText(QApplication::translate("AddIncome", "Income type: ", Q_NULLPTR));
        btnSave->setText(QApplication::translate("AddIncome", "Save", Q_NULLPTR));
        btnClear->setText(QApplication::translate("AddIncome", "Clear", Q_NULLPTR));
        lblHeader->setText(QApplication::translate("AddIncome", "Add Income", Q_NULLPTR));
        lblDescription->setText(QApplication::translate("AddIncome", "Description: ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddIncome: public Ui_AddIncome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINCOME_H
