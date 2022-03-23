/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QGridLayout *gridLayout;
    QPushButton *btnDeleteCat;
    QLabel *lblHeader;
    QTableView *tblView;
    QPushButton *btnEditCat;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnIncomeCat;
    QPushButton *btnExpenseCat;
    QPushButton *btnAddCat;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnUser;
    QPushButton *btnAddUser;
    QPushButton *btnEditUser;
    QPushButton *btnDeleteUser;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(600, 450);
        gridLayout = new QGridLayout(Settings);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnDeleteCat = new QPushButton(Settings);
        btnDeleteCat->setObjectName(QStringLiteral("btnDeleteCat"));
        btnDeleteCat->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(btnDeleteCat, 6, 2, 1, 1);

        lblHeader = new QLabel(Settings);
        lblHeader->setObjectName(QStringLiteral("lblHeader"));
        lblHeader->setMinimumSize(QSize(190, 70));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(16);
        lblHeader->setFont(font);
        lblHeader->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblHeader, 0, 0, 1, 3);

        tblView = new QTableView(Settings);
        tblView->setObjectName(QStringLiteral("tblView"));
        tblView->setMinimumSize(QSize(300, 250));
        QFont font1;
        font1.setKerning(true);
        tblView->setFont(font1);
        tblView->setFrameShape(QFrame::NoFrame);
        tblView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tblView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblView->setSelectionMode(QAbstractItemView::SingleSelection);
        tblView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblView->setShowGrid(true);
        tblView->setCornerButtonEnabled(true);
        tblView->horizontalHeader()->setMinimumSectionSize(37);

        gridLayout->addWidget(tblView, 3, 0, 3, 3);

        btnEditCat = new QPushButton(Settings);
        btnEditCat->setObjectName(QStringLiteral("btnEditCat"));
        btnEditCat->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(btnEditCat, 6, 1, 1, 1);

        groupBox = new QGroupBox(Settings);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setAlignment(Qt::AlignCenter);
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnIncomeCat = new QPushButton(groupBox);
        btnIncomeCat->setObjectName(QStringLiteral("btnIncomeCat"));

        horizontalLayout_2->addWidget(btnIncomeCat);

        btnExpenseCat = new QPushButton(groupBox);
        btnExpenseCat->setObjectName(QStringLiteral("btnExpenseCat"));

        horizontalLayout_2->addWidget(btnExpenseCat);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        btnAddCat = new QPushButton(Settings);
        btnAddCat->setObjectName(QStringLiteral("btnAddCat"));
        btnAddCat->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(btnAddCat, 6, 0, 1, 1);

        groupBox_3 = new QGroupBox(Settings);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setAlignment(Qt::AlignCenter);
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnUser = new QPushButton(groupBox_3);
        btnUser->setObjectName(QStringLiteral("btnUser"));

        horizontalLayout->addWidget(btnUser);

        btnAddUser = new QPushButton(groupBox_3);
        btnAddUser->setObjectName(QStringLiteral("btnAddUser"));
        btnAddUser->setEnabled(false);

        horizontalLayout->addWidget(btnAddUser);

        btnEditUser = new QPushButton(groupBox_3);
        btnEditUser->setObjectName(QStringLiteral("btnEditUser"));
        btnEditUser->setEnabled(false);

        horizontalLayout->addWidget(btnEditUser);

        btnDeleteUser = new QPushButton(groupBox_3);
        btnDeleteUser->setObjectName(QStringLiteral("btnDeleteUser"));
        btnDeleteUser->setEnabled(false);

        horizontalLayout->addWidget(btnDeleteUser);


        gridLayout->addWidget(groupBox_3, 1, 1, 1, 2);


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Form", Q_NULLPTR));
        btnDeleteCat->setText(QApplication::translate("Settings", "Delete", Q_NULLPTR));
        lblHeader->setText(QApplication::translate("Settings", "Settings", Q_NULLPTR));
        btnEditCat->setText(QApplication::translate("Settings", "Edit", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Settings", "View Category List:", Q_NULLPTR));
        btnIncomeCat->setText(QApplication::translate("Settings", "Income Category", Q_NULLPTR));
        btnExpenseCat->setText(QApplication::translate("Settings", "Expense Category", Q_NULLPTR));
        btnAddCat->setText(QApplication::translate("Settings", "Add", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Settings", "User:", Q_NULLPTR));
        btnUser->setText(QApplication::translate("Settings", "View All", Q_NULLPTR));
        btnAddUser->setText(QApplication::translate("Settings", "Add New", Q_NULLPTR));
        btnEditUser->setText(QApplication::translate("Settings", "Edit Seleleted", Q_NULLPTR));
        btnDeleteUser->setText(QApplication::translate("Settings", "Delete Selected", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
