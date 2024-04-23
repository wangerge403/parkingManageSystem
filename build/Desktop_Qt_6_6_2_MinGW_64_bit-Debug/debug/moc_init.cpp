/****************************************************************************
** Meta object code from reading C++ file 'init.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../init.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'init.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSinitFileENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSinitFileENDCLASS = QtMocHelpers::stringData(
    "initFile",
    "starting",
    "",
    "mysql",
    "mysql_c",
    "on_submit_init_clicked",
    "on_cancel_submit_clicked",
    "Json_Save",
    "InitMySqlFileList*",
    "list",
    "File_MySQLInit"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSinitFileENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[9];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[8];
    char stringdata5[23];
    char stringdata6[25];
    char stringdata7[10];
    char stringdata8[19];
    char stringdata9[5];
    char stringdata10[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSinitFileENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSinitFileENDCLASS_t qt_meta_stringdata_CLASSinitFileENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "initFile"
        QT_MOC_LITERAL(9, 8),  // "starting"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 5),  // "mysql"
        QT_MOC_LITERAL(25, 7),  // "mysql_c"
        QT_MOC_LITERAL(33, 22),  // "on_submit_init_clicked"
        QT_MOC_LITERAL(56, 24),  // "on_cancel_submit_clicked"
        QT_MOC_LITERAL(81, 9),  // "Json_Save"
        QT_MOC_LITERAL(91, 18),  // "InitMySqlFileList*"
        QT_MOC_LITERAL(110, 4),  // "list"
        QT_MOC_LITERAL(115, 14)   // "File_MySQLInit"
    },
    "initFile",
    "starting",
    "",
    "mysql",
    "mysql_c",
    "on_submit_init_clicked",
    "on_cancel_submit_clicked",
    "Json_Save",
    "InitMySqlFileList*",
    "list",
    "File_MySQLInit"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSinitFileENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   47,    2, 0x08,    3 /* Private */,
       6,    0,   48,    2, 0x08,    4 /* Private */,
       7,    1,   49,    2, 0x08,    5 /* Private */,
      10,    0,   52,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Bool,

       0        // eod
};

Q_CONSTINIT const QMetaObject initFile::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSinitFileENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSinitFileENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSinitFileENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<initFile, std::true_type>,
        // method 'starting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<mysql, std::false_type>,
        // method 'on_submit_init_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cancel_submit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Json_Save'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<InitMySqlFileList *, std::false_type>,
        // method 'File_MySQLInit'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void initFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<initFile *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->starting((*reinterpret_cast< std::add_pointer_t<mysql>>(_a[1]))); break;
        case 1: _t->on_submit_init_clicked(); break;
        case 2: _t->on_cancel_submit_clicked(); break;
        case 3: _t->Json_Save((*reinterpret_cast< std::add_pointer_t<InitMySqlFileList*>>(_a[1]))); break;
        case 4: { bool _r = _t->File_MySQLInit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (initFile::*)(mysql );
            if (_t _q_method = &initFile::starting; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *initFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *initFile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSinitFileENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int initFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void initFile::starting(mysql _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
