/****************************************************************************
** Meta object code from reading C++ file 'car.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../car.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCharts/qlineseries.h>
#include <QtCharts/qabstractbarseries.h>
#include <QtCharts/qvbarmodelmapper.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCharts/qcandlestickseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'car.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSCarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCarENDCLASS = QtMocHelpers::stringData(
    "Car",
    "Plate_start",
    "",
    "Mat",
    "rgbImg",
    "UpPieData",
    "m_Parking_name",
    "m_reserve",
    "m_now_count_L",
    "now_count_dec_signal",
    "now_count_acc_signal",
    "on_PieSliceHighlight",
    "show",
    "on_MainButton_clicked",
    "park_num",
    "camera_Init",
    "on_camera_button_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCarENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[4];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[7];
    char stringdata5[10];
    char stringdata6[15];
    char stringdata7[10];
    char stringdata8[14];
    char stringdata9[21];
    char stringdata10[21];
    char stringdata11[21];
    char stringdata12[5];
    char stringdata13[22];
    char stringdata14[9];
    char stringdata15[12];
    char stringdata16[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCarENDCLASS_t qt_meta_stringdata_CLASSCarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 3),  // "Car"
        QT_MOC_LITERAL(4, 11),  // "Plate_start"
        QT_MOC_LITERAL(16, 0),  // ""
        QT_MOC_LITERAL(17, 3),  // "Mat"
        QT_MOC_LITERAL(21, 6),  // "rgbImg"
        QT_MOC_LITERAL(28, 9),  // "UpPieData"
        QT_MOC_LITERAL(38, 14),  // "m_Parking_name"
        QT_MOC_LITERAL(53, 9),  // "m_reserve"
        QT_MOC_LITERAL(63, 13),  // "m_now_count_L"
        QT_MOC_LITERAL(77, 20),  // "now_count_dec_signal"
        QT_MOC_LITERAL(98, 20),  // "now_count_acc_signal"
        QT_MOC_LITERAL(119, 20),  // "on_PieSliceHighlight"
        QT_MOC_LITERAL(140, 4),  // "show"
        QT_MOC_LITERAL(145, 21),  // "on_MainButton_clicked"
        QT_MOC_LITERAL(167, 8),  // "park_num"
        QT_MOC_LITERAL(176, 11),  // "camera_Init"
        QT_MOC_LITERAL(188, 24)   // "on_camera_button_clicked"
    },
    "Car",
    "Plate_start",
    "",
    "Mat",
    "rgbImg",
    "UpPieData",
    "m_Parking_name",
    "m_reserve",
    "m_now_count_L",
    "now_count_dec_signal",
    "now_count_acc_signal",
    "on_PieSliceHighlight",
    "show",
    "on_MainButton_clicked",
    "park_num",
    "camera_Init",
    "on_camera_button_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       5,    3,   71,    2, 0x06,    3 /* Public */,
       9,    0,   78,    2, 0x06,    7 /* Public */,
      10,    0,   79,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,   80,    2, 0x08,    9 /* Private */,
      13,    0,   83,    2, 0x08,   11 /* Private */,
      14,    0,   84,    2, 0x08,   12 /* Private */,
      15,    0,   85,    2, 0x08,   13 /* Private */,
      16,    0,   86,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Car::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSCarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Car, std::true_type>,
        // method 'Plate_start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Mat, std::false_type>,
        // method 'UpPieData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'now_count_dec_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'now_count_acc_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PieSliceHighlight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_MainButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'park_num'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'camera_Init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_camera_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Car::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Car *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Plate_start((*reinterpret_cast< std::add_pointer_t<Mat>>(_a[1]))); break;
        case 1: _t->UpPieData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->now_count_dec_signal(); break;
        case 3: _t->now_count_acc_signal(); break;
        case 4: _t->on_PieSliceHighlight((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->on_MainButton_clicked(); break;
        case 6: _t->park_num(); break;
        case 7: _t->camera_Init(); break;
        case 8: _t->on_camera_button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Car::*)(Mat );
            if (_t _q_method = &Car::Plate_start; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Car::*)(QString , int , int );
            if (_t _q_method = &Car::UpPieData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Car::*)();
            if (_t _q_method = &Car::now_count_dec_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Car::*)();
            if (_t _q_method = &Car::now_count_acc_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *Car::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Car::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Car::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Car::Plate_start(Mat _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Car::UpPieData(QString _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Car::now_count_dec_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Car::now_count_acc_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
