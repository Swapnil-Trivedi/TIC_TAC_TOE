/****************************************************************************
** Meta object code from reading C++ file 'game.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TIC_TAC_TOE/game.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Game_t {
    QByteArrayData data[13];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Game_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Game_t qt_meta_stringdata_Game = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Game"
QT_MOC_LITERAL(1, 5, 23), // "on_pushButton00_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 24), // "on_pushButton_01_clicked"
QT_MOC_LITERAL(4, 55, 24), // "on_pushButton_02_clicked"
QT_MOC_LITERAL(5, 80, 24), // "on_pushButton_10_clicked"
QT_MOC_LITERAL(6, 105, 24), // "on_pushButton_11_clicked"
QT_MOC_LITERAL(7, 130, 24), // "on_pushButton_12_clicked"
QT_MOC_LITERAL(8, 155, 24), // "on_pushButton_20_clicked"
QT_MOC_LITERAL(9, 180, 24), // "on_pushButton_21_clicked"
QT_MOC_LITERAL(10, 205, 24), // "on_pushButton_22_clicked"
QT_MOC_LITERAL(11, 230, 15), // "on_Back_clicked"
QT_MOC_LITERAL(12, 246, 18) // "on_restart_clicked"

    },
    "Game\0on_pushButton00_clicked\0\0"
    "on_pushButton_01_clicked\0"
    "on_pushButton_02_clicked\0"
    "on_pushButton_10_clicked\0"
    "on_pushButton_11_clicked\0"
    "on_pushButton_12_clicked\0"
    "on_pushButton_20_clicked\0"
    "on_pushButton_21_clicked\0"
    "on_pushButton_22_clicked\0on_Back_clicked\0"
    "on_restart_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Game[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
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

void Game::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Game *_t = static_cast<Game *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton00_clicked(); break;
        case 1: _t->on_pushButton_01_clicked(); break;
        case 2: _t->on_pushButton_02_clicked(); break;
        case 3: _t->on_pushButton_10_clicked(); break;
        case 4: _t->on_pushButton_11_clicked(); break;
        case 5: _t->on_pushButton_12_clicked(); break;
        case 6: _t->on_pushButton_20_clicked(); break;
        case 7: _t->on_pushButton_21_clicked(); break;
        case 8: _t->on_pushButton_22_clicked(); break;
        case 9: _t->on_Back_clicked(); break;
        case 10: _t->on_restart_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Game::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Game.data,
      qt_meta_data_Game,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Game::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Game::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Game.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Game::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
