#-------------------------------------------------
#
# Project created by QtCreator 2015-11-30T07:55:38
#
#-------------------------------------------------

QT       += core
QT       += gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WalletManager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    addincome.cpp \
    addexpense.cpp \
    viewincome.cpp \
    viewexpense.cpp \
    income.cpp \
    expense.cpp \
    transaction.cpp \
    login.cpp \
    user.cpp \
    settings.cpp \
    dbconnection.cpp

HEADERS  += mainwindow.h \
    addincome.h \
    addexpense.h \
    viewincome.h \
    viewexpense.h \
    income.h \
    expense.h \
    transaction.h \
    login.h \
    user.h \
    settings.h \
    dbconnection.h

FORMS    += mainwindow.ui \
    addincome.ui \
    addexpense.ui \
    viewincome.ui \
    viewexpense.ui \
    login.ui \
    settings.ui

RESOURCES += \
    images.qrc
