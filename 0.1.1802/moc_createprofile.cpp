/****************************************************************************
** CreateProfile meta object code from reading C++ file 'createprofile.h'
**
** Created: ?? 18. ??? 16:39:20 2006
**      by: The Qt MOC ($Id: $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "createprofile.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CreateProfile::className() const
{
    return "CreateProfile";
}

QMetaObject *CreateProfile::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CreateProfile( "CreateProfile", &CreateProfile::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CreateProfile::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CreateProfile", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CreateProfile::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CreateProfile", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CreateProfile::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"enableOk", 0, 0 };
    static const QUMethod slot_1 = {"ok", 0, 0 };
    static const QUMethod slot_2 = {"clear", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::Out },
	{ 0, &static_QUType_QString, 0, QUParameter::InOut }
    };
    static const QUMethod slot_3 = {"getHash", 2, param_slot_3 };
    static const QUMethod slot_4 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "enableOk()", &slot_0, QMetaData::Private },
	{ "ok()", &slot_1, QMetaData::Private },
	{ "clear()", &slot_2, QMetaData::Private },
	{ "getHash(QString&)", &slot_3, QMetaData::Private },
	{ "languageChange()", &slot_4, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"CreateProfile", parentObject,
	slot_tbl, 5,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CreateProfile.setMetaObject( metaObj );
    return metaObj;
}

void* CreateProfile::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CreateProfile" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool CreateProfile::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: enableOk(); break;
    case 1: ok(); break;
    case 2: clear(); break;
    case 3: static_QUType_QString.set(_o,getHash((QString&)static_QUType_QString.get(_o+1))); break;
    case 4: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CreateProfile::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CreateProfile::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool CreateProfile::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
