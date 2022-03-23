/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_5;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *txtUsername;
    QGridLayout *gridLayout_2;
    QPushButton *btnExit;
    QLineEdit *txtPassword;
    QSpacerItem *verticalSpacer_3;
    QPushButton *btnLogin;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(512, 316);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/other/get-money.png"), QSize(), QIcon::Normal, QIcon::Off);
        Login->setWindowIcon(icon);
        gridLayout_4 = new QGridLayout(Login);
        gridLayout_4->setSpacing(5);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(-1, -1, 10, 10);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(10, -1, -1, -1);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        label_5 = new QLabel(Login);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/images/other/get-money.png")));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_5);

        label_2 = new QLabel(Login);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);


        gridLayout_4->addLayout(verticalLayout_4, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        txtUsername = new QLineEdit(Login);
        txtUsername->setObjectName(QStringLiteral("txtUsername"));
        txtUsername->setMinimumSize(QSize(65, 25));
        txtUsername->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(txtUsername);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 10, -1, -1);
        btnExit = new QPushButton(Login);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        btnExit->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/icons/i_red_cross_btn.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnExit->setIcon(icon1);

        gridLayout_2->addWidget(btnExit, 4, 1, 1, 1);

        txtPassword = new QLineEdit(Login);
        txtPassword->setObjectName(QStringLiteral("txtPassword"));
        txtPassword->setMinimumSize(QSize(65, 25));
        txtPassword->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        txtPassword->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(txtPassword, 1, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 3, 0, 1, 1);

        btnLogin = new QPushButton(Login);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));

        gridLayout_2->addWidget(btnLogin, 2, 0, 1, 2);


        gridLayout->addLayout(gridLayout_2, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 2, 1, 1);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Wallet Manager", Q_NULLPTR));
        label_5->setText(QString());
        label_2->setText(QApplication::translate("Login", "Wallet Manager", Q_NULLPTR));
        txtUsername->setPlaceholderText(QApplication::translate("Login", "Username", Q_NULLPTR));
        btnExit->setText(QApplication::translate("Login", "Exit", Q_NULLPTR));
        txtPassword->setPlaceholderText(QApplication::translate("Login", "Password", Q_NULLPTR));
        btnLogin->setText(QApplication::translate("Login", "Login", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
