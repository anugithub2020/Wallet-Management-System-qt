/****************************************************************************
** Meta object code from reading C++ file 'settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Settings_t {
    QByteArrayData data[14];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Settings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Settings_t qt_meta_stringdata_Settings = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Settings"
QT_MOC_LITERAL(1, 9, 13), // "toggleButtons"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "deleteRecord"
QT_MOC_LITERAL(4, 37, 23), // "on_btnIncomeCat_clicked"
QT_MOC_LITERAL(5, 61, 24), // "on_btnExpenseCat_clicked"
QT_MOC_LITERAL(6, 86, 20), // "on_btnAddCat_clicked"
QT_MOC_LITERAL(7, 107, 21), // "on_btnEditCat_clicked"
QT_MOC_LITERAL(8, 129, 18), // "on_btnUser_clicked"
QT_MOC_LITERAL(9, 148, 21), // "on_btnAddUser_clicked"
QT_MOC_LITERAL(10, 170, 22), // "on_btnEditUser_clicked"
QT_MOC_LITERAL(11, 193, 15), // "doToggleButtons"
QT_MOC_LITERAL(12, 209, 2), // "on"
QT_MOC_LITERAL(13, 212, 14) // "doDeleteRecord"

    },
    "Settings\0toggleButtons\0\0deleteRecord\0"
    "on_btnIncomeCat_clicked\0"
    "on_btnExpenseCat_clicked\0on_btnAddCat_clicked\0"
    "on_btnEditCat_clicked\0on_btnUser_clicked\0"
    "on_btnAddUser_clicked\0on_btnEditUser_clicked\0"
    "doToggleButtons\0on\0doDeleteRecord"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Settings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    0,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   73,    2, 0x08 /* Private */,
       5,    0,   74,    2, 0x08 /* Private */,
       6,    0,   75,    2, 0x08 /* Private */,
       7,    0,   76,    2, 0x08 /* Private */,
       8,    0,   77,    2, 0x08 /* Private */,
       9,    0,   78,    2, 0x08 /* Private */,
      10,    0,   79,    2, 0x08 /* Private */,
      11,    1,   80,    2, 0x08 /* Private */,
      13,    0,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,

       0        // eod
};

void Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Settings *_t = static_cast<Settings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toggleButtons((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->deleteRecord(); break;
        case 2: _t->on_btnIncomeCat_clicked(); break;
        case 3: _t->on_btnExpenseCat_clicked(); break;
        case 4: _t->on_btnAddCat_clicked(); break;
        case 5: _t->on_btnEditCat_clicked(); break;
        case 6: _t->on_btnUser_clicked(); break;
        case 7: _t->on_btnAddUser_clicked(); break;
        case 8: _t->on_btnEditUser_clicked(); break;
        case 9: _t->doToggleButtons((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->doDeleteRecord(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Settings::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Settings::toggleButtons)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Settings::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Settings::deleteRecord)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Settings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Settings.data,
      qt_meta_data_Settings,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Settings.stringdata0))
        return static_cast<void*>(const_cast< Settings*>(this));
    return QWidget::qt_metacast(_clname);
}

int Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Settings::toggleButtons(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Settings::deleteRecord()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
