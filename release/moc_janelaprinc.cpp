/****************************************************************************
** Meta object code from reading C++ file 'janelaprinc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../velho/poo/qt/DuelSim/janelaprinc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'janelaprinc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_janelaPrinc_t {
    QByteArrayData data[11];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_janelaPrinc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_janelaPrinc_t qt_meta_stringdata_janelaPrinc = {
    {
QT_MOC_LITERAL(0, 0, 11), // "janelaPrinc"
QT_MOC_LITERAL(1, 12, 6), // "ataque"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 7), // "addmago"
QT_MOC_LITERAL(4, 28, 12), // "addguerreiro"
QT_MOC_LITERAL(5, 41, 12), // "addescudeiro"
QT_MOC_LITERAL(6, 54, 13), // "addcurandeiro"
QT_MOC_LITERAL(7, 68, 8), // "addenemy"
QT_MOC_LITERAL(8, 77, 4), // "save"
QT_MOC_LITERAL(9, 82, 4), // "open"
QT_MOC_LITERAL(10, 87, 5) // "reset"

    },
    "janelaPrinc\0ataque\0\0addmago\0addguerreiro\0"
    "addescudeiro\0addcurandeiro\0addenemy\0"
    "save\0open\0reset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_janelaPrinc[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

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

       0        // eod
};

void janelaPrinc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<janelaPrinc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ataque(); break;
        case 1: _t->addmago(); break;
        case 2: _t->addguerreiro(); break;
        case 3: _t->addescudeiro(); break;
        case 4: _t->addcurandeiro(); break;
        case 5: _t->addenemy(); break;
        case 6: _t->save(); break;
        case 7: _t->open(); break;
        case 8: _t->reset(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject janelaPrinc::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_janelaPrinc.data,
    qt_meta_data_janelaPrinc,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *janelaPrinc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *janelaPrinc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_janelaPrinc.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int janelaPrinc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
