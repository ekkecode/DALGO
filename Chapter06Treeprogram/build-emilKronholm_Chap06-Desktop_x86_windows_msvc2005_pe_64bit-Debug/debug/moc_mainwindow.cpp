/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Chapter06Treeprogram/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_actionrandom_tree_triggered",
    "",
    "on_actioninsert_triggered",
    "on_actiondelete_triggered",
    "on_insert100Random_triggered",
    "on_remove100Random_triggered",
    "on_insertRemove1000RandomKeys_triggered",
    "speedDidChange",
    "QAction*",
    "action",
    "on_actionPreOrder_triggered",
    "on_actionInOrder_triggered",
    "on_actionPostOrder_triggered",
    "on_actionheight_triggered",
    "on_actionnumberOfNodes_triggered",
    "on_actionsave_triggered",
    "on_actionread_triggered",
    "on_actionflashNodesAtIncreasingDepth_triggered",
    "on_actioncreate_random_search_tree_triggered",
    "on_actionWorst_Case_AVL_triggered",
    "on_actionRandom_AVL_triggered",
    "on_actionRandom_NOT_AVL_triggered",
    "on_actionshow_Colors_triggered",
    "on_actionshow_Numbers_triggered",
    "on_actioncontains_triggered",
    "on_actiontestTree1_triggered",
    "on_actiontestfunktion1_triggered",
    "on_actiontestfunktion2_triggered",
    "on_actiontestfunktion3_triggered",
    "on_actiontestfunktion4_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[62];
    char stringdata0[11];
    char stringdata1[31];
    char stringdata2[1];
    char stringdata3[26];
    char stringdata4[26];
    char stringdata5[29];
    char stringdata6[29];
    char stringdata7[40];
    char stringdata8[15];
    char stringdata9[9];
    char stringdata10[7];
    char stringdata11[28];
    char stringdata12[27];
    char stringdata13[29];
    char stringdata14[26];
    char stringdata15[33];
    char stringdata16[24];
    char stringdata17[24];
    char stringdata18[47];
    char stringdata19[45];
    char stringdata20[34];
    char stringdata21[30];
    char stringdata22[34];
    char stringdata23[31];
    char stringdata24[32];
    char stringdata25[28];
    char stringdata26[29];
    char stringdata27[33];
    char stringdata28[33];
    char stringdata29[33];
    char stringdata30[33];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 30),  // "on_actionrandom_tree_triggered"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 25),  // "on_actioninsert_triggered"
        QT_MOC_LITERAL(69, 25),  // "on_actiondelete_triggered"
        QT_MOC_LITERAL(95, 28),  // "on_insert100Random_triggered"
        QT_MOC_LITERAL(124, 28),  // "on_remove100Random_triggered"
        QT_MOC_LITERAL(153, 39),  // "on_insertRemove1000RandomKeys..."
        QT_MOC_LITERAL(193, 14),  // "speedDidChange"
        QT_MOC_LITERAL(208, 8),  // "QAction*"
        QT_MOC_LITERAL(217, 6),  // "action"
        QT_MOC_LITERAL(224, 27),  // "on_actionPreOrder_triggered"
        QT_MOC_LITERAL(252, 26),  // "on_actionInOrder_triggered"
        QT_MOC_LITERAL(279, 28),  // "on_actionPostOrder_triggered"
        QT_MOC_LITERAL(308, 25),  // "on_actionheight_triggered"
        QT_MOC_LITERAL(334, 32),  // "on_actionnumberOfNodes_triggered"
        QT_MOC_LITERAL(367, 23),  // "on_actionsave_triggered"
        QT_MOC_LITERAL(391, 23),  // "on_actionread_triggered"
        QT_MOC_LITERAL(415, 46),  // "on_actionflashNodesAtIncreasi..."
        QT_MOC_LITERAL(462, 44),  // "on_actioncreate_random_search..."
        QT_MOC_LITERAL(507, 33),  // "on_actionWorst_Case_AVL_trigg..."
        QT_MOC_LITERAL(541, 29),  // "on_actionRandom_AVL_triggered"
        QT_MOC_LITERAL(571, 33),  // "on_actionRandom_NOT_AVL_trigg..."
        QT_MOC_LITERAL(605, 30),  // "on_actionshow_Colors_triggered"
        QT_MOC_LITERAL(636, 31),  // "on_actionshow_Numbers_triggered"
        QT_MOC_LITERAL(668, 27),  // "on_actioncontains_triggered"
        QT_MOC_LITERAL(696, 28),  // "on_actiontestTree1_triggered"
        QT_MOC_LITERAL(725, 32),  // "on_actiontestfunktion1_triggered"
        QT_MOC_LITERAL(758, 32),  // "on_actiontestfunktion2_triggered"
        QT_MOC_LITERAL(791, 32),  // "on_actiontestfunktion3_triggered"
        QT_MOC_LITERAL(824, 32)   // "on_actiontestfunktion4_triggered"
    },
    "MainWindow",
    "on_actionrandom_tree_triggered",
    "",
    "on_actioninsert_triggered",
    "on_actiondelete_triggered",
    "on_insert100Random_triggered",
    "on_remove100Random_triggered",
    "on_insertRemove1000RandomKeys_triggered",
    "speedDidChange",
    "QAction*",
    "action",
    "on_actionPreOrder_triggered",
    "on_actionInOrder_triggered",
    "on_actionPostOrder_triggered",
    "on_actionheight_triggered",
    "on_actionnumberOfNodes_triggered",
    "on_actionsave_triggered",
    "on_actionread_triggered",
    "on_actionflashNodesAtIncreasingDepth_triggered",
    "on_actioncreate_random_search_tree_triggered",
    "on_actionWorst_Case_AVL_triggered",
    "on_actionRandom_AVL_triggered",
    "on_actionRandom_NOT_AVL_triggered",
    "on_actionshow_Colors_triggered",
    "on_actionshow_Numbers_triggered",
    "on_actioncontains_triggered",
    "on_actiontestTree1_triggered",
    "on_actiontestfunktion1_triggered",
    "on_actiontestfunktion2_triggered",
    "on_actiontestfunktion3_triggered",
    "on_actiontestfunktion4_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  176,    2, 0x08,    1 /* Private */,
       3,    0,  177,    2, 0x08,    2 /* Private */,
       4,    0,  178,    2, 0x08,    3 /* Private */,
       5,    0,  179,    2, 0x08,    4 /* Private */,
       6,    0,  180,    2, 0x08,    5 /* Private */,
       7,    0,  181,    2, 0x08,    6 /* Private */,
       8,    1,  182,    2, 0x08,    7 /* Private */,
      11,    0,  185,    2, 0x08,    9 /* Private */,
      12,    0,  186,    2, 0x08,   10 /* Private */,
      13,    0,  187,    2, 0x08,   11 /* Private */,
      14,    0,  188,    2, 0x08,   12 /* Private */,
      15,    0,  189,    2, 0x08,   13 /* Private */,
      16,    0,  190,    2, 0x08,   14 /* Private */,
      17,    0,  191,    2, 0x08,   15 /* Private */,
      18,    0,  192,    2, 0x08,   16 /* Private */,
      19,    0,  193,    2, 0x08,   17 /* Private */,
      20,    0,  194,    2, 0x08,   18 /* Private */,
      21,    0,  195,    2, 0x08,   19 /* Private */,
      22,    0,  196,    2, 0x08,   20 /* Private */,
      23,    0,  197,    2, 0x08,   21 /* Private */,
      24,    0,  198,    2, 0x08,   22 /* Private */,
      25,    0,  199,    2, 0x08,   23 /* Private */,
      26,    0,  200,    2, 0x08,   24 /* Private */,
      27,    0,  201,    2, 0x08,   25 /* Private */,
      28,    0,  202,    2, 0x08,   26 /* Private */,
      29,    0,  203,    2, 0x08,   27 /* Private */,
      30,    0,  204,    2, 0x08,   28 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_actionrandom_tree_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actioninsert_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actiondelete_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_insert100Random_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_remove100Random_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_insertRemove1000RandomKeys_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'speedDidChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'on_actionPreOrder_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionInOrder_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionPostOrder_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionheight_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionnumberOfNodes_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionsave_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionread_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionflashNodesAtIncreasingDepth_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actioncreate_random_search_tree_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionWorst_Case_AVL_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRandom_AVL_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRandom_NOT_AVL_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionshow_Colors_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionshow_Numbers_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actioncontains_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actiontestTree1_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actiontestfunktion1_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actiontestfunktion2_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actiontestfunktion3_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actiontestfunktion4_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionrandom_tree_triggered(); break;
        case 1: _t->on_actioninsert_triggered(); break;
        case 2: _t->on_actiondelete_triggered(); break;
        case 3: _t->on_insert100Random_triggered(); break;
        case 4: _t->on_remove100Random_triggered(); break;
        case 5: _t->on_insertRemove1000RandomKeys_triggered(); break;
        case 6: _t->speedDidChange((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 7: _t->on_actionPreOrder_triggered(); break;
        case 8: _t->on_actionInOrder_triggered(); break;
        case 9: _t->on_actionPostOrder_triggered(); break;
        case 10: _t->on_actionheight_triggered(); break;
        case 11: _t->on_actionnumberOfNodes_triggered(); break;
        case 12: _t->on_actionsave_triggered(); break;
        case 13: _t->on_actionread_triggered(); break;
        case 14: _t->on_actionflashNodesAtIncreasingDepth_triggered(); break;
        case 15: _t->on_actioncreate_random_search_tree_triggered(); break;
        case 16: _t->on_actionWorst_Case_AVL_triggered(); break;
        case 17: _t->on_actionRandom_AVL_triggered(); break;
        case 18: _t->on_actionRandom_NOT_AVL_triggered(); break;
        case 19: _t->on_actionshow_Colors_triggered(); break;
        case 20: _t->on_actionshow_Numbers_triggered(); break;
        case 21: _t->on_actioncontains_triggered(); break;
        case 22: _t->on_actiontestTree1_triggered(); break;
        case 23: _t->on_actiontestfunktion1_triggered(); break;
        case 24: _t->on_actiontestfunktion2_triggered(); break;
        case 25: _t->on_actiontestfunktion3_triggered(); break;
        case 26: _t->on_actiontestfunktion4_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}
QT_WARNING_POP
