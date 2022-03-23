/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd_Income;
    QAction *actionAdd_Expense;
    QAction *actionView_Income;
    QAction *actionView_Expense;
    QAction *actionSettings;
    QAction *actionLog_out;
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbLIncome;
    QLabel *lblIncomeAmount;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblExpense;
    QLabel *lblExpenseAmount;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblBalance;
    QLabel *lblBalanceAmount;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(669, 482);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/other/get-money.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionAdd_Income = new QAction(MainWindow);
        actionAdd_Income->setObjectName(QStringLiteral("actionAdd_Income"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/icons/i_green_plus.png"), QSize(), QIcon::Normal, QIcon::On);
        actionAdd_Income->setIcon(icon1);
        actionAdd_Expense = new QAction(MainWindow);
        actionAdd_Expense->setObjectName(QStringLiteral("actionAdd_Expense"));
        actionAdd_Expense->setCheckable(false);
        actionAdd_Expense->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/icons/i_red_plus.png"), QSize(), QIcon::Normal, QIcon::On);
        actionAdd_Expense->setIcon(icon2);
        actionAdd_Expense->setVisible(true);
        actionAdd_Expense->setIconVisibleInMenu(true);
        actionView_Income = new QAction(MainWindow);
        actionView_Income->setObjectName(QStringLiteral("actionView_Income"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/icons/i_view_income.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionView_Income->setIcon(icon3);
        actionView_Expense = new QAction(MainWindow);
        actionView_Expense->setObjectName(QStringLiteral("actionView_Expense"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/icons/i_view_expense.png"), QSize(), QIcon::Normal, QIcon::On);
        actionView_Expense->setIcon(icon4);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/icons/i_settings.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSettings->setIcon(icon5);
        actionLog_out = new QAction(MainWindow);
        actionLog_out->setObjectName(QStringLiteral("actionLog_out"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/icons/i_log-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLog_out->setIcon(icon6);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setTabsClosable(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 61, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, -1, 100, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbLIncome = new QLabel(tab);
        lbLIncome->setObjectName(QStringLiteral("lbLIncome"));
        lbLIncome->setMinimumSize(QSize(110, 30));
        QFont font;
        font.setFamily(QStringLiteral("Calibri Light"));
        font.setPointSize(14);
        lbLIncome->setFont(font);

        horizontalLayout_2->addWidget(lbLIncome);

        lblIncomeAmount = new QLabel(tab);
        lblIncomeAmount->setObjectName(QStringLiteral("lblIncomeAmount"));
        lblIncomeAmount->setMinimumSize(QSize(70, 30));
        lblIncomeAmount->setFont(font);
        lblIncomeAmount->setStyleSheet(QStringLiteral("color:rgb(0, 170, 0)"));

        horizontalLayout_2->addWidget(lblIncomeAmount);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lblExpense = new QLabel(tab);
        lblExpense->setObjectName(QStringLiteral("lblExpense"));
        lblExpense->setMinimumSize(QSize(110, 30));
        lblExpense->setFont(font);

        horizontalLayout_3->addWidget(lblExpense);

        lblExpenseAmount = new QLabel(tab);
        lblExpenseAmount->setObjectName(QStringLiteral("lblExpenseAmount"));
        lblExpenseAmount->setMinimumSize(QSize(70, 30));
        lblExpenseAmount->setFont(font);
        lblExpenseAmount->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        horizontalLayout_3->addWidget(lblExpenseAmount);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lblBalance = new QLabel(tab);
        lblBalance->setObjectName(QStringLiteral("lblBalance"));
        lblBalance->setMinimumSize(QSize(110, 30));
        lblBalance->setFont(font);

        horizontalLayout_4->addWidget(lblBalance);

        lblBalanceAmount = new QLabel(tab);
        lblBalanceAmount->setObjectName(QStringLiteral("lblBalanceAmount"));
        lblBalanceAmount->setMinimumSize(QSize(70, 30));
        lblBalanceAmount->setFont(font);

        horizontalLayout_4->addWidget(lblBalanceAmount);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 4, 1, 2, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 20, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Reference Sans Serif"));
        font1.setPointSize(26);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout, 0, 0, 3, 4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 0, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/other/wallet.png")));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 4, 0, 2, 1);

        tabWidget->addTab(tab, QString());

        gridLayout_4->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 669, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setContextMenuPolicy(Qt::NoContextMenu);
        mainToolBar->setLayoutDirection(Qt::LeftToRight);
        mainToolBar->setAutoFillBackground(false);
        mainToolBar->setMovable(false);
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionSettings);
        menuFile->addAction(actionLog_out);
        mainToolBar->addAction(actionAdd_Income);
        mainToolBar->addAction(actionAdd_Expense);
        mainToolBar->addAction(actionView_Income);
        mainToolBar->addAction(actionView_Expense);
        mainToolBar->addAction(actionSettings);
        mainToolBar->addAction(actionLog_out);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Wallet Manager", Q_NULLPTR));
        actionAdd_Income->setText(QApplication::translate("MainWindow", "Add Income", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAdd_Income->setToolTip(QApplication::translate("MainWindow", "Add Income Transaction", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionAdd_Income->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", Q_NULLPTR));
        actionAdd_Expense->setText(QApplication::translate("MainWindow", "Add Expense", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAdd_Expense->setToolTip(QApplication::translate("MainWindow", "Add Expense Transaction", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionAdd_Expense->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", Q_NULLPTR));
        actionView_Income->setText(QApplication::translate("MainWindow", "View Income", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionView_Income->setToolTip(QApplication::translate("MainWindow", "View Income", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionView_Income->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", Q_NULLPTR));
        actionView_Expense->setText(QApplication::translate("MainWindow", "View Expense", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionView_Expense->setToolTip(QApplication::translate("MainWindow", "View Expense ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionView_Expense->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", Q_NULLPTR));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSettings->setToolTip(QApplication::translate("MainWindow", "Edit Settings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSettings->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
        actionLog_out->setText(QApplication::translate("MainWindow", "Log out", Q_NULLPTR));
        actionLog_out->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", Q_NULLPTR));
        lbLIncome->setText(QApplication::translate("MainWindow", "Total Income     : ", Q_NULLPTR));
        lblIncomeAmount->setText(QString());
        lblExpense->setText(QApplication::translate("MainWindow", "Total Expense    : ", Q_NULLPTR));
        lblExpenseAmount->setText(QString());
        lblBalance->setText(QApplication::translate("MainWindow", "Total Balance     :", Q_NULLPTR));
        lblBalanceAmount->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Welcome to Wallet Manager", Q_NULLPTR));
        label->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Account Details", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "Wallet Manager", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
