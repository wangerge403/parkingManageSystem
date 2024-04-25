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
    "Camerathread_open_Signale",
    "",
    "Plate_start",
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
    "on_CtrolButton_clicked",
    "on_ButtonModify_clicked",
    "on_ButtonADD_clicked",
    "on_ButtonDelete_clicked",
    "on_carInforButton_clicked",
    "on_MainButton_clicked",
    "park_num",
    "on_submitCar_clicked",
    "on_DeleteCar_clicked",
    "on_Carcheck_clicked",
    "on_Car_delete_clicked",
    "camera_Init",
    "on_camera_take_clicked",
    "on_camera_button_clicked",
    "on_check_camera_clicked",
    "on_thread_camera_init_clicked",
    "on_thread_release_clicked",
    "on_camera_open_button_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCarENDCLASS_t {
    uint offsetsAndSizes[64];
    char stringdata0[4];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[4];
    char stringdata5[7];
    char stringdata6[10];
    char stringdata7[15];
    char stringdata8[10];
    char stringdata9[14];
    char stringdata10[21];
    char stringdata11[21];
    char stringdata12[21];
    char stringdata13[5];
    char stringdata14[23];
    char stringdata15[24];
    char stringdata16[21];
    char stringdata17[24];
    char stringdata18[26];
    char stringdata19[22];
    char stringdata20[9];
    char stringdata21[21];
    char stringdata22[21];
    char stringdata23[20];
    char stringdata24[22];
    char stringdata25[12];
    char stringdata26[23];
    char stringdata27[25];
    char stringdata28[24];
    char stringdata29[30];
    char stringdata30[26];
    char stringdata31[30];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCarENDCLASS_t qt_meta_stringdata_CLASSCarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 3),  // "Car"
        QT_MOC_LITERAL(4, 25),  // "Camerathread_open_Signale"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 11),  // "Plate_start"
        QT_MOC_LITERAL(43, 3),  // "Mat"
        QT_MOC_LITERAL(47, 6),  // "rgbImg"
        QT_MOC_LITERAL(54, 9),  // "UpPieData"
        QT_MOC_LITERAL(64, 14),  // "m_Parking_name"
        QT_MOC_LITERAL(79, 9),  // "m_reserve"
        QT_MOC_LITERAL(89, 13),  // "m_now_count_L"
        QT_MOC_LITERAL(103, 20),  // "now_count_dec_signal"
        QT_MOC_LITERAL(124, 20),  // "now_count_acc_signal"
        QT_MOC_LITERAL(145, 20),  // "on_PieSliceHighlight"
        QT_MOC_LITERAL(166, 4),  // "show"
        QT_MOC_LITERAL(171, 22),  // "on_CtrolButton_clicked"
        QT_MOC_LITERAL(194, 23),  // "on_ButtonModify_clicked"
        QT_MOC_LITERAL(218, 20),  // "on_ButtonADD_clicked"
        QT_MOC_LITERAL(239, 23),  // "on_ButtonDelete_clicked"
        QT_MOC_LITERAL(263, 25),  // "on_carInforButton_clicked"
        QT_MOC_LITERAL(289, 21),  // "on_MainButton_clicked"
        QT_MOC_LITERAL(311, 8),  // "park_num"
        QT_MOC_LITERAL(320, 20),  // "on_submitCar_clicked"
        QT_MOC_LITERAL(341, 20),  // "on_DeleteCar_clicked"
        QT_MOC_LITERAL(362, 19),  // "on_Carcheck_clicked"
        QT_MOC_LITERAL(382, 21),  // "on_Car_delete_clicked"
        QT_MOC_LITERAL(404, 11),  // "camera_Init"
        QT_MOC_LITERAL(416, 22),  // "on_camera_take_clicked"
        QT_MOC_LITERAL(439, 24),  // "on_camera_button_clicked"
        QT_MOC_LITERAL(464, 23),  // "on_check_camera_clicked"
        QT_MOC_LITERAL(488, 29),  // "on_thread_camera_init_clicked"
        QT_MOC_LITERAL(518, 25),  // "on_thread_release_clicked"
        QT_MOC_LITERAL(544, 29)   // "on_camera_open_button_clicked"
    },
    "Car",
    "Camerathread_open_Signale",
    "",
    "Plate_start",
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
    "on_CtrolButton_clicked",
    "on_ButtonModify_clicked",
    "on_ButtonADD_clicked",
    "on_ButtonDelete_clicked",
    "on_carInforButton_clicked",
    "on_MainButton_clicked",
    "park_num",
    "on_submitCar_clicked",
    "on_DeleteCar_clicked",
    "on_Carcheck_clicked",
    "on_Car_delete_clicked",
    "camera_Init",
    "on_camera_take_clicked",
    "on_camera_button_clicked",
    "on_check_camera_clicked",
    "on_thread_camera_init_clicked",
    "on_thread_release_clicked",
    "on_camera_open_button_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  158,    2, 0x06,    1 /* Public */,
       3,    1,  159,    2, 0x06,    2 /* Public */,
       6,    3,  162,    2, 0x06,    4 /* Public */,
      10,    0,  169,    2, 0x06,    8 /* Public */,
      11,    0,  170,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,  171,    2, 0x08,   10 /* Private */,
      14,    0,  174,    2, 0x08,   12 /* Private */,
      15,    0,  175,    2, 0x08,   13 /* Private */,
      16,    0,  176,    2, 0x08,   14 /* Private */,
      17,    0,  177,    2, 0x08,   15 /* Private */,
      18,    0,  178,    2, 0x08,   16 /* Private */,
      19,    0,  179,    2, 0x08,   17 /* Private */,
      20,    0,  180,    2, 0x08,   18 /* Private */,
      21,    0,  181,    2, 0x08,   19 /* Private */,
      22,    0,  182,    2, 0x08,   20 /* Private */,
      23,    0,  183,    2, 0x08,   21 /* Private */,
      24,    0,  184,    2, 0x08,   22 /* Private */,
      25,    0,  185,    2, 0x08,   23 /* Private */,
      26,    0,  186,    2, 0x08,   24 /* Private */,
      27,    0,  187,    2, 0x08,   25 /* Private */,
      28,    0,  188,    2, 0x08,   26 /* Private */,
      29,    0,  189,    2, 0x08,   27 /* Private */,
      30,    0,  190,    2, 0x08,   28 /* Private */,
      31,    0,  191,    2, 0x08,   29 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    7,    8,    9,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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
        // method 'Camerathread_open_Signale'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
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
        // method 'on_CtrolButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ButtonModify_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ButtonADD_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ButtonDelete_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_carInforButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_MainButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'park_num'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_submitCar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_DeleteCar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Carcheck_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Car_delete_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'camera_Init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_camera_take_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_camera_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_check_camera_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_thread_camera_init_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_thread_release_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_camera_open_button_clicked'
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
        case 0: _t->Camerathread_open_Signale(); break;
        case 1: _t->Plate_start((*reinterpret_cast< std::add_pointer_t<Mat>>(_a[1]))); break;
        case 2: _t->UpPieData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 3: _t->now_count_dec_signal(); break;
        case 4: _t->now_count_acc_signal(); break;
        case 5: _t->on_PieSliceHighlight((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->on_CtrolButton_clicked(); break;
        case 7: _t->on_ButtonModify_clicked(); break;
        case 8: _t->on_ButtonADD_clicked(); break;
        case 9: _t->on_ButtonDelete_clicked(); break;
        case 10: _t->on_carInforButton_clicked(); break;
        case 11: _t->on_MainButton_clicked(); break;
        case 12: _t->park_num(); break;
        case 13: _t->on_submitCar_clicked(); break;
        case 14: _t->on_DeleteCar_clicked(); break;
        case 15: _t->on_Carcheck_clicked(); break;
        case 16: _t->on_Car_delete_clicked(); break;
        case 17: _t->camera_Init(); break;
        case 18: _t->on_camera_take_clicked(); break;
        case 19: _t->on_camera_button_clicked(); break;
        case 20: _t->on_check_camera_clicked(); break;
        case 21: _t->on_thread_camera_init_clicked(); break;
        case 22: _t->on_thread_release_clicked(); break;
        case 23: _t->on_camera_open_button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Car::*)();
            if (_t _q_method = &Car::Camerathread_open_Signale; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Car::*)(Mat );
            if (_t _q_method = &Car::Plate_start; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Car::*)(QString , int , int );
            if (_t _q_method = &Car::UpPieData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Car::*)();
            if (_t _q_method = &Car::now_count_dec_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Car::*)();
            if (_t _q_method = &Car::now_count_acc_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
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
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void Car::Camerathread_open_Signale()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Car::Plate_start(Mat _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Car::UpPieData(QString _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Car::now_count_dec_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Car::now_count_acc_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
