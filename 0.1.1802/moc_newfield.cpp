/****************************************************************************
** NewField meta object code from reading C++ file 'newfield.h'
**
** Created: ?? 18. ??? 16:39:20 2006
**      by: The Qt MOC ($Id: $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "newfield.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *NewField::className() const
{
    return "NewField";
}

QMetaObject *NewField::metaObj = 0;
static QMetaObjectCleanUp cleanUp_NewField( "NewField", &NewField::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString NewField::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "NewField", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString NewField::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "NewField", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* NewField::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"ok", 0, 0 };
    static const QUMethod slot_1 = {"enableOk", 0, 0 };
    static const QUMethod slot_2 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "ok()", &slot_0, QMetaData::Private },
	{ "enableOk()", &slot_1, QMetaData::Private },
	{ "languageChange()", &slot_2, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"NewField", parentObject,
	slot_tbl, 3,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_NewField.setMetaObject( metaObj );
    return metaObj;
}

void* NewField::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "NewField" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool NewField::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: ok(); break;
    case 1: enableOk(); break;
    case 2: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool NewField::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool NewField::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool NewField::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
