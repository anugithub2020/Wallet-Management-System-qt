/****************************************************************************
** Meta object code from reading C++ file 'viewincome.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../viewincome.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewincome.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ViewIncome_t {
    QByteArrayData data[8];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewIncome_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewIncome_t qt_meta_stringdata_ViewIncome = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ViewIncome"
QT_MOC_LITERAL(1, 11, 22), // "editTransactionClicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "type"
QT_MOC_LITERAL(4, 40, 15), // "QSqlTableModel*"
QT_MOC_LITERAL(5, 56, 10), // "tableModel"
QT_MOC_LITERAL(6, 67, 20), // "on_btnDelete_clicked"
QT_MOC_LITERAL(7, 88, 18) // "on_btnEdit_clicked"

    },
    "ViewIncome\0editTransactionClicked\0\0"
    "type\0QSqlTableModel*\0tableModel\0"
    "on_btnDelete_clicked\0on_btnEdit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewIncome[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   34,    2, 0x08 /* Private */,
       7,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ViewIncome::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ViewIncome *_t = static_cast<ViewIncome *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editTransactionClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QSqlTableModel*(*)>(_a[2]))); break;
        case 1: _t->on_btnDelete_clicked(); break;
        case 2: _t->on_btnEdit_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ViewIncome::*_t)(QString , QSqlTableModel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ViewIncome::editTransactionClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ViewIncome::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ViewIncome.data,
      qt_meta_data_ViewIncome,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ViewIncome::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewIncome::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ViewIncome.stringdata0))
        return static_cast<void*>(const_cast< ViewIncome*>(this));
    return QWidget::qt_metacast(_clname);
}

int ViewIncome::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ViewIncome::editTransactionClicked(QString _t1, QSqlTableModel * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
