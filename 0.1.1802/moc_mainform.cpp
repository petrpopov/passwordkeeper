/****************************************************************************
** MainForm meta object code from reading C++ file 'mainform.h'
**
** Created: ?? 18. ??? 16:39:20 2006
**      by: The Qt MOC ($Id: $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "mainform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MainForm::className() const
{
    return "MainForm";
}

QMetaObject *MainForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MainForm( "MainForm", &MainForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MainForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MainForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MainForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MainForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MainForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::Out },
	{ 0, &static_QUType_QString, 0, QUParameter::InOut }
    };
    static const QUMethod slot_0 = {"getHash", 2, param_slot_0 };
    static const QUMethod slot_1 = {"sortListView", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"setEnabledActions", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out }
    };
    static const QUMethod slot_3 = {"ifProfileExists", 1, param_slot_3 };
    static const QUMethod slot_4 = {"createProfile", 0, 0 };
    static const QUMethod slot_5 = {"openProfile", 0, 0 };
    static const QUMethod slot_6 = {"closeProfile", 0, 0 };
    static const QUMethod slot_7 = {"deleteProfile", 0, 0 };
    static const QUMethod slot_8 = {"changeProfile", 0, 0 };
    static const QUMethod slot_9 = {"clear", 0, 0 };
    static const QUMethod slot_10 = {"Caption", 0, 0 };
    static const QUMethod slot_11 = {"open", 0, 0 };
    static const QUMethod slot_12 = {"save", 0, 0 };
    static const QUMethod slot_13 = {"newField", 0, 0 };
    static const QUMethod slot_14 = {"editField", 0, 0 };
    static const QUParameter param_slot_15[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_15 = {"edit", 1, param_slot_15 };
    static const QUMethod slot_16 = {"deleteField", 0, 0 };
    static const QUMethod slot_17 = {"deleteAll", 0, 0 };
    static const QUMethod slot_18 = {"about", 0, 0 };
    static const QUMethod slot_19 = {"undo", 0, 0 };
    static const QUMethod slot_20 = {"redo", 0, 0 };
    static const QUMethod slot_21 = {"fillListForUndo", 0, 0 };
    static const QUParameter param_slot_22[] = {
	{ 0, &static_QUType_ptr, "CurList", QUParameter::InOut }
    };
    static const QUMethod slot_22 = {"fillSaveStruct", 1, param_slot_22 };
    static const QUParameter param_slot_23[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_23 = {"slotRMB", 3, param_slot_23 };
    static const QUMethod slot_24 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "getHash(QString&)", &slot_0, QMetaData::Private },
	{ "sortListView()", &slot_1, QMetaData::Private },
	{ "setEnabledActions(int)", &slot_2, QMetaData::Private },
	{ "ifProfileExists()", &slot_3, QMetaData::Private },
	{ "createProfile()", &slot_4, QMetaData::Private },
	{ "openProfile()", &slot_5, QMetaData::Private },
	{ "closeProfile()", &slot_6, QMetaData::Private },
	{ "deleteProfile()", &slot_7, QMetaData::Private },
	{ "changeProfile()", &slot_8, QMetaData::Private },
	{ "clear()", &slot_9, QMetaData::Private },
	{ "Caption()", &slot_10, QMetaData::Private },
	{ "open()", &slot_11, QMetaData::Private },
	{ "save()", &slot_12, QMetaData::Private },
	{ "newField()", &slot_13, QMetaData::Private },
	{ "editField()", &slot_14, QMetaData::Private },
	{ "edit(QListViewItem*)", &slot_15, QMetaData::Private },
	{ "deleteField()", &slot_16, QMetaData::Private },
	{ "deleteAll()", &slot_17, QMetaData::Private },
	{ "about()", &slot_18, QMetaData::Private },
	{ "undo()", &slot_19, QMetaData::Private },
	{ "redo()", &slot_20, QMetaData::Private },
	{ "fillListForUndo()", &slot_21, QMetaData::Private },
	{ "fillSaveStruct(CurList&)", &slot_22, QMetaData::Private },
	{ "slotRMB(QListViewItem*,const QPoint&,int)", &slot_23, QMetaData::Private },
	{ "languageChange()", &slot_24, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"MainForm", parentObject,
	slot_tbl, 25,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MainForm.setMetaObject( metaObj );
    return metaObj;
}

void* MainForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MainForm" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool MainForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: static_QUType_QString.set(_o,getHash((QString&)static_QUType_QString.get(_o+1))); break;
    case 1: sortListView(); break;
    case 2: setEnabledActions((int)static_QUType_int.get(_o+1)); break;
    case 3: static_QUType_bool.set(_o,ifProfileExists()); break;
    case 4: createProfile(); break;
    case 5: openProfile(); break;
    case 6: closeProfile(); break;
    case 7: deleteProfile(); break;
    case 8: changeProfile(); break;
    case 9: clear(); break;
    case 10: Caption(); break;
    case 11: open(); break;
    case 12: save(); break;
    case 13: newField(); break;
    case 14: editField(); break;
    case 15: edit((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 16: deleteField(); break;
    case 17: deleteAll(); break;
    case 18: about(); break;
    case 19: undo(); break;
    case 20: redo(); break;
    case 21: fillListForUndo(); break;
    case 22: fillSaveStruct((CurList&)*((CurList*)static_QUType_ptr.get(_o+1))); break;
    case 23: slotRMB((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2)),(int)static_QUType_int.get(_o+3)); break;
    case 24: languageChange(); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MainForm::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MainForm::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool MainForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
