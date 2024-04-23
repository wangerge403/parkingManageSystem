/****************************************************************************
** Meta object code from reading C++ file 'car.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../car.h"
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
    "starting",
    "",
    "QSqlQuery",
    "q",
    "name",
    "Camerathread_open_Signale",
    "Plate_start",
    "Mat",
    "rgbImg",
    "Plate_Recognize",
    "plateStr",
    "UpPieData",
    "m_Parking_name",
    "m_reserve",
    "m_now_count_L",
    "now_count_dec_signal",
    "now_count_acc_signal",
    "sendPlate_signal",
    "mysql*",
    "mysql",
    "license_plate",
    "formattedDateTime",
    "location",
    "on_PieSliceHighlight",
    "show",
    "on_CtrolButton_clicked",
    "on_ButtonModify_clicked",
    "on_ButtonADD_clicked",
    "on_ButtonDelete_clicked",
    "on_submitCar_clicked",
    "on_messageButton_clicked",
    "park_num",
    "on_DeleteCar_clicked",
    "on_Carcheck_clicked",
    "on_Car_delete_clicked",
    "camera_Init",
    "video_Init",
    "on_fileopen_clicked",
    "on_video_start_clicked",
    "on_video_pause_clicked",
    "Get_Duration",
    "Slider_Changed",
    "On_Position_Changed",
    "position",
    "on_camera_take_clicked",
    "on_camera_button_clicked",
    "on_MainButton_clicked",
    "updateImage",
    "on_check_camera_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCarENDCLASS_t {
    uint offsetsAndSizes[100];
    char stringdata0[4];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[2];
    char stringdata5[5];
    char stringdata6[26];
    char stringdata7[12];
    char stringdata8[4];
    char stringdata9[7];
    char stringdata10[16];
    char stringdata11[9];
    char stringdata12[10];
    char stringdata13[15];
    char stringdata14[10];
    char stringdata15[14];
    char stringdata16[21];
    char stringdata17[21];
    char stringdata18[17];
    char stringdata19[7];
    char stringdata20[6];
    char stringdata21[14];
    char stringdata22[18];
    char stringdata23[9];
    char stringdata24[21];
    char stringdata25[5];
    char stringdata26[23];
    char stringdata27[24];
    char stringdata28[21];
    char stringdata29[24];
    char stringdata30[21];
    char stringdata31[25];
    char stringdata32[9];
    char stringdata33[21];
    char stringdata34[20];
    char stringdata35[22];
    char stringdata36[12];
    char stringdata37[11];
    char stringdata38[20];
    char stringdata39[23];
    char stringdata40[23];
    char stringdata41[13];
    char stringdata42[15];
    char stringdata43[20];
    char stringdata44[9];
    char stringdata45[23];
    char stringdata46[25];
    char stringdata47[22];
    char stringdata48[12];
    char stringdata49[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCarENDCLASS_t qt_meta_stringdata_CLASSCarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 3),  // "Car"
        QT_MOC_LITERAL(4, 8),  // "starting"
        QT_MOC_LITERAL(13, 0),  // ""
        QT_MOC_LITERAL(14, 9),  // "QSqlQuery"
        QT_MOC_LITERAL(24, 1),  // "q"
        QT_MOC_LITERAL(26, 4),  // "name"
        QT_MOC_LITERAL(31, 25),  // "Camerathread_open_Signale"
        QT_MOC_LITERAL(57, 11),  // "Plate_start"
        QT_MOC_LITERAL(69, 3),  // "Mat"
        QT_MOC_LITERAL(73, 6),  // "rgbImg"
        QT_MOC_LITERAL(80, 15),  // "Plate_Recognize"
        QT_MOC_LITERAL(96, 8),  // "plateStr"
        QT_MOC_LITERAL(105, 9),  // "UpPieData"
        QT_MOC_LITERAL(115, 14),  // "m_Parking_name"
        QT_MOC_LITERAL(130, 9),  // "m_reserve"
        QT_MOC_LITERAL(140, 13),  // "m_now_count_L"
        QT_MOC_LITERAL(154, 20),  // "now_count_dec_signal"
        QT_MOC_LITERAL(175, 20),  // "now_count_acc_signal"
        QT_MOC_LITERAL(196, 16),  // "sendPlate_signal"
        QT_MOC_LITERAL(213, 6),  // "mysql*"
        QT_MOC_LITERAL(220, 5),  // "mysql"
        QT_MOC_LITERAL(226, 13),  // "license_plate"
        QT_MOC_LITERAL(240, 17),  // "formattedDateTime"
        QT_MOC_LITERAL(258, 8),  // "location"
        QT_MOC_LITERAL(267, 20),  // "on_PieSliceHighlight"
        QT_MOC_LITERAL(288, 4),  // "show"
        QT_MOC_LITERAL(293, 22),  // "on_CtrolButton_clicked"
        QT_MOC_LITERAL(316, 23),  // "on_ButtonModify_clicked"
        QT_MOC_LITERAL(340, 20),  // "on_ButtonADD_clicked"
        QT_MOC_LITERAL(361, 23),  // "on_ButtonDelete_clicked"
        QT_MOC_LITERAL(385, 20),  // "on_submitCar_clicked"
        QT_MOC_LITERAL(406, 24),  // "on_messageButton_clicked"
        QT_MOC_LITERAL(431, 8),  // "park_num"
        QT_MOC_LITERAL(440, 20),  // "on_DeleteCar_clicked"
        QT_MOC_LITERAL(461, 19),  // "on_Carcheck_clicked"
        QT_MOC_LITERAL(481, 21),  // "on_Car_delete_clicked"
        QT_MOC_LITERAL(503, 11),  // "camera_Init"
        QT_MOC_LITERAL(515, 10),  // "video_Init"
        QT_MOC_LITERAL(526, 19),  // "on_fileopen_clicked"
        QT_MOC_LITERAL(546, 22),  // "on_video_start_clicked"
        QT_MOC_LITERAL(569, 22),  // "on_video_pause_clicked"
        QT_MOC_LITERAL(592, 12),  // "Get_Duration"
        QT_MOC_LITERAL(605, 14),  // "Slider_Changed"
        QT_MOC_LITERAL(620, 19),  // "On_Position_Changed"
        QT_MOC_LITERAL(640, 8),  // "position"
        QT_MOC_LITERAL(649, 22),  // "on_camera_take_clicked"
        QT_MOC_LITERAL(672, 24),  // "on_camera_button_clicked"
        QT_MOC_LITERAL(697, 21),  // "on_MainButton_clicked"
        QT_MOC_LITERAL(719, 11),  // "updateImage"
        QT_MOC_LITERAL(731, 23)   // "on_check_camera_clicked"
    },
    "Car",
    "starting",
    "",
    "QSqlQuery",
    "q",
    "name",
    "Camerathread_open_Signale",
    "Plate_start",
    "Mat",
    "rgbImg",
    "Plate_Recognize",
    "plateStr",
    "UpPieData",
    "m_Parking_name",
    "m_reserve",
    "m_now_count_L",
    "now_count_dec_signal",
    "now_count_acc_signal",
    "sendPlate_signal",
    "mysql*",
    "mysql",
    "license_plate",
    "formattedDateTime",
    "location",
    "on_PieSliceHighlight",
    "show",
    "on_CtrolButton_clicked",
    "on_ButtonModify_clicked",
    "on_ButtonADD_clicked",
    "on_ButtonDelete_clicked",
    "on_submitCar_clicked",
    "on_messageButton_clicked",
    "park_num",
    "on_DeleteCar_clicked",
    "on_Carcheck_clicked",
    "on_Car_delete_clicked",
    "camera_Init",
    "video_Init",
    "on_fileopen_clicked",
    "on_video_start_clicked",
    "on_video_pause_clicked",
    "Get_Duration",
    "Slider_Changed",
    "On_Position_Changed",
    "position",
    "on_camera_take_clicked",
    "on_camera_button_clicked",
    "on_MainButton_clicked",
    "updateImage",
    "on_check_camera_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  206,    2, 0x06,    1 /* Public */,
       6,    0,  211,    2, 0x06,    4 /* Public */,
       7,    1,  212,    2, 0x06,    5 /* Public */,
      10,    2,  215,    2, 0x06,    7 /* Public */,
      12,    3,  220,    2, 0x06,   10 /* Public */,
      16,    0,  227,    2, 0x06,   14 /* Public */,
      17,    0,  228,    2, 0x06,   15 /* Public */,
      18,    4,  229,    2, 0x06,   16 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      24,    1,  238,    2, 0x08,   21 /* Private */,
      26,    0,  241,    2, 0x08,   23 /* Private */,
      27,    0,  242,    2, 0x08,   24 /* Private */,
      28,    0,  243,    2, 0x08,   25 /* Private */,
      29,    0,  244,    2, 0x08,   26 /* Private */,
      30,    0,  245,    2, 0x08,   27 /* Private */,
      31,    0,  246,    2, 0x08,   28 /* Private */,
      32,    0,  247,    2, 0x08,   29 /* Private */,
      33,    0,  248,    2, 0x08,   30 /* Private */,
      34,    0,  249,    2, 0x08,   31 /* Private */,
      35,    0,  250,    2, 0x08,   32 /* Private */,
      36,    0,  251,    2, 0x08,   33 /* Private */,
      37,    0,  252,    2, 0x08,   34 /* Private */,
      38,    0,  253,    2, 0x08,   35 /* Private */,
      39,    0,  254,    2, 0x08,   36 /* Private */,
      40,    0,  255,    2, 0x08,   37 /* Private */,
      41,    0,  256,    2, 0x08,   38 /* Private */,
      42,    0,  257,    2, 0x08,   39 /* Private */,
      43,    1,  258,    2, 0x08,   40 /* Private */,
      45,    0,  261,    2, 0x08,   42 /* Private */,
      46,    0,  262,    2, 0x08,   43 /* Private */,
      47,    0,  263,    2, 0x08,   44 /* Private */,
      48,    1,  264,    2, 0x08,   45 /* Private */,
      49,    0,  267,    2, 0x08,   47 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   13,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19, QMetaType::QString, QMetaType::QString, QMetaType::QString,   20,   21,   22,   23,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   25,
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
    QMetaType::Void, QMetaType::LongLong,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,    2,
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
        // method 'starting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSqlQuery, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'Camerathread_open_Signale'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Plate_start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Mat, std::false_type>,
        // method 'Plate_Recognize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Mat, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'UpPieData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'now_count_dec_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'now_count_acc_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendPlate_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<mysql *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
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
        // method 'on_submitCar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_messageButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'park_num'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_DeleteCar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Carcheck_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Car_delete_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'camera_Init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'video_Init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_fileopen_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_video_start_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_video_pause_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Get_Duration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Slider_Changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'On_Position_Changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'on_camera_take_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_camera_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_MainButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QImage, std::false_type>,
        // method 'on_check_camera_clicked'
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
        case 0: _t->starting((*reinterpret_cast< std::add_pointer_t<QSqlQuery>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->Camerathread_open_Signale(); break;
        case 2: _t->Plate_start((*reinterpret_cast< std::add_pointer_t<Mat>>(_a[1]))); break;
        case 3: _t->Plate_Recognize((*reinterpret_cast< std::add_pointer_t<Mat>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->UpPieData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 5: _t->now_count_dec_signal(); break;
        case 6: _t->now_count_acc_signal(); break;
        case 7: _t->sendPlate_signal((*reinterpret_cast< std::add_pointer_t<mysql*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 8: _t->on_PieSliceHighlight((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->on_CtrolButton_clicked(); break;
        case 10: _t->on_ButtonModify_clicked(); break;
        case 11: _t->on_ButtonADD_clicked(); break;
        case 12: _t->on_ButtonDelete_clicked(); break;
        case 13: _t->on_submitCar_clicked(); break;
        case 14: _t->on_messageButton_clicked(); break;
        case 15: _t->park_num(); break;
        case 16: _t->on_DeleteCar_clicked(); break;
        case 17: _t->on_Carcheck_clicked(); break;
        case 18: _t->on_Car_delete_clicked(); break;
        case 19: _t->camera_Init(); break;
        case 20: _t->video_Init(); break;
        case 21: _t->on_fileopen_clicked(); break;
        case 22: _t->on_video_start_clicked(); break;
        case 23: _t->on_video_pause_clicked(); break;
        case 24: _t->Get_Duration(); break;
        case 25: _t->Slider_Changed(); break;
        case 26: _t->On_Position_Changed((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 27: _t->on_camera_take_clicked(); break;
        case 28: _t->on_camera_button_clicked(); break;
        case 29: _t->on_MainButton_clicked(); break;
        case 30: _t->updateImage((*reinterpret_cast< std::add_pointer_t<QImage>>(_a[1]))); break;
        case 31: _t->on_check_camera_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< mysql* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Car::*)(QSqlQuery , QString );
            if (_t _q_method = &Car::starting; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Car::*)();
            if (_t _q_method = &Car::Camerathread_open_Signale; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Car::*)(Mat );
            if (_t _q_method = &Car::Plate_start; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Car::*)(Mat , QString );
            if (_t _q_method = &Car::Plate_Recognize; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Car::*)(QString , int , int );
            if (_t _q_method = &Car::UpPieData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Car::*)();
            if (_t _q_method = &Car::now_count_dec_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Car::*)();
            if (_t _q_method = &Car::now_count_acc_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Car::*)(mysql * , QString , QString , QString );
            if (_t _q_method = &Car::sendPlate_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
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
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void Car::starting(QSqlQuery _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Car::Camerathread_open_Signale()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Car::Plate_start(Mat _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Car::Plate_Recognize(Mat _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Car::UpPieData(QString _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Car::now_count_dec_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Car::now_count_acc_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Car::sendPlate_signal(mysql * _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
