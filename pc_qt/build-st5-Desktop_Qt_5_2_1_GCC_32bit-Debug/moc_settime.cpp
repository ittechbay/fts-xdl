/****************************************************************************
** Meta object code from reading C++ file 'settime.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../settime.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settime.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SetTime_t {
    QByteArrayData data[9];
    char stringdata[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SetTime_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SetTime_t qt_meta_stringdata_SetTime = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 27),
QT_MOC_LITERAL(2, 36, 0),
QT_MOC_LITERAL(3, 37, 8),
QT_MOC_LITERAL(4, 46, 23),
QT_MOC_LITERAL(5, 70, 4),
QT_MOC_LITERAL(6, 75, 10),
QT_MOC_LITERAL(7, 86, 31),
QT_MOC_LITERAL(8, 118, 4)
    },
    "SetTime\0on_timeEdit_dateTimeChanged\0"
    "\0dateTime\0on_timeEdit_timeChanged\0"
    "time\0onTimerOut\0on_comboBox_currentIndexChanged\0"
    "arg1\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SetTime[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08,
       4,    1,   37,    2, 0x08,
       6,    0,   40,    2, 0x08,
       7,    1,   41,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::QDateTime,    3,
    QMetaType::Void, QMetaType::QTime,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void SetTime::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SetTime *_t = static_cast<SetTime *>(_o);
        switch (_id) {
        case 0: _t->on_timeEdit_dateTimeChanged((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 1: _t->on_timeEdit_timeChanged((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 2: _t->onTimerOut(); break;
        case 3: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SetTime::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SetTime.data,
      qt_meta_data_SetTime,  qt_static_metacall, 0, 0}
};


const QMetaObject *SetTime::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SetTime::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SetTime.stringdata))
        return static_cast<void*>(const_cast< SetTime*>(this));
    return QDialog::qt_metacast(_clname);
}

int SetTime::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
