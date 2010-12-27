/*================================================================================
  code generated by: java2cpp
  class: android.database.AbstractCursor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_ABSTRACTCURSOR_HPP_DECL
#define J2CPP_ANDROID_DATABASE_ABSTRACTCURSOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace database { class CharArrayBuffer; } } }
namespace j2cpp { namespace android { namespace database { class CursorWindow; } } }
namespace j2cpp { namespace android { namespace database { class DataSetObserver; } } }
namespace j2cpp { namespace android { namespace database { class ContentObserver; } } }
namespace j2cpp { namespace android { namespace content { class ContentResolver; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }


#include <android/content/ContentResolver.hpp>
#include <android/database/CharArrayBuffer.hpp>
#include <android/database/ContentObserver.hpp>
#include <android/database/CursorWindow.hpp>
#include <android/database/DataSetObserver.hpp>
#include <android/net/Uri.hpp>
#include <android/os/Bundle.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace database {

	class AbstractCursor;
	namespace AbstractCursor_ {

		class SelfContentObserver;
		class SelfContentObserver
			: public cpp_object<SelfContentObserver>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)

			SelfContentObserver(jobject jobj)
			: cpp_object<SelfContentObserver>(jobj)
			{
			}

			cpp_boolean deliverSelfNotifications();
			void onChange(cpp_boolean const&);
		}; //class SelfContentObserver

	} //namespace AbstractCursor_

	class AbstractCursor
		: public cpp_object<AbstractCursor>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)

		typedef AbstractCursor_::SelfContentObserver SelfContentObserver;

		AbstractCursor(jobject jobj)
		: cpp_object<AbstractCursor>(jobj)
		{
		}

		cpp_int getCount();
		local_ref< cpp_object_array<java::lang::String, 1> > getColumnNames();
		local_ref< java::lang::String > getString(cpp_int const&);
		cpp_short getShort(cpp_int const&);
		cpp_int getInt(cpp_int const&);
		cpp_long getLong(cpp_int const&);
		cpp_float getFloat(cpp_int const&);
		cpp_double getDouble(cpp_int const&);
		cpp_boolean isNull(cpp_int const&);
		local_ref< cpp_byte_array<1> > getBlob(cpp_int const&);
		local_ref< android::database::CursorWindow > getWindow();
		cpp_int getColumnCount();
		void deactivate();
		cpp_boolean requery();
		cpp_boolean isClosed();
		void close();
		cpp_boolean onMove(cpp_int const&, cpp_int const&);
		void copyStringToBuffer(cpp_int const&, local_ref< android::database::CharArrayBuffer > const&);
		cpp_int getPosition();
		cpp_boolean moveToPosition(cpp_int const&);
		void fillWindow(cpp_int const&, local_ref< android::database::CursorWindow > const&);
		cpp_boolean move(cpp_int const&);
		cpp_boolean moveToFirst();
		cpp_boolean moveToLast();
		cpp_boolean moveToNext();
		cpp_boolean moveToPrevious();
		cpp_boolean isFirst();
		cpp_boolean isLast();
		cpp_boolean isBeforeFirst();
		cpp_boolean isAfterLast();
		cpp_int getColumnIndex(local_ref< java::lang::String > const&);
		cpp_int getColumnIndexOrThrow(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getColumnName(cpp_int const&);
		void registerContentObserver(local_ref< android::database::ContentObserver > const&);
		void unregisterContentObserver(local_ref< android::database::ContentObserver > const&);
		void registerDataSetObserver(local_ref< android::database::DataSetObserver > const&);
		void unregisterDataSetObserver(local_ref< android::database::DataSetObserver > const&);
		void setNotificationUri(local_ref< android::content::ContentResolver > const&, local_ref< android::net::Uri > const&);
		cpp_boolean getWantsAllOnMoveCalls();
		local_ref< android::os::Bundle > getExtras();
		local_ref< android::os::Bundle > respond(local_ref< android::os::Bundle > const&);

	}; //class AbstractCursor

} //namespace database
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_ABSTRACTCURSOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_ABSTRACTCURSOR_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_ABSTRACTCURSOR_HPP_IMPL

namespace j2cpp {



template <>
local_ref< android::database::AbstractCursor_::SelfContentObserver > create< android::database::AbstractCursor_::SelfContentObserver>(local_ref< android::database::AbstractCursor > const &a0)
{
	return local_ref< android::database::AbstractCursor_::SelfContentObserver >(
		environment::get().get_jenv()->NewObject(
			get_class<android::database::AbstractCursor_::SelfContentObserver::J2CPP_CLASS_NAME>(),
			get_method_id<android::database::AbstractCursor_::SelfContentObserver::J2CPP_CLASS_NAME, android::database::AbstractCursor_::SelfContentObserver::J2CPP_METHOD_NAME(0), android::database::AbstractCursor_::SelfContentObserver::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::database::AbstractCursor_::SelfContentObserver::deliverSelfNotifications()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void android::database::AbstractCursor_::SelfContentObserver::onChange(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::database::AbstractCursor_::SelfContentObserver,"android/database/AbstractCursor$SelfContentObserver")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor_::SelfContentObserver,0,"<init>","(Landroid/database/AbstractCursor;)V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor_::SelfContentObserver,1,"deliverSelfNotifications","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor_::SelfContentObserver,2,"onChange","(Z)V")


template <>
local_ref< android::database::AbstractCursor > create< android::database::AbstractCursor>()
{
	return local_ref< android::database::AbstractCursor >(
		environment::get().get_jenv()->NewObject(
			get_class<android::database::AbstractCursor::J2CPP_CLASS_NAME>(),
			get_method_id<android::database::AbstractCursor::J2CPP_CLASS_NAME, android::database::AbstractCursor::J2CPP_METHOD_NAME(0), android::database::AbstractCursor::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_int android::database::AbstractCursor::getCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::String, 1> > android::database::AbstractCursor::getColumnNames()
{
	return local_ref< cpp_object_array<java::lang::String, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > android::database::AbstractCursor::getString(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_short android::database::AbstractCursor::getShort(cpp_int const &a0)
{
	return cpp_short(
		environment::get().get_jenv()->CallShortMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::database::AbstractCursor::getInt(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long android::database::AbstractCursor::getLong(cpp_int const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_float android::database::AbstractCursor::getFloat(cpp_int const &a0)
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_double android::database::AbstractCursor::getDouble(cpp_int const &a0)
{
	return cpp_double(
		environment::get().get_jenv()->CallDoubleMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::database::AbstractCursor::isNull(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_byte_array<1> > android::database::AbstractCursor::getBlob(cpp_int const &a0)
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::database::CursorWindow > android::database::AbstractCursor::getWindow()
{
	return local_ref< android::database::CursorWindow >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_int android::database::AbstractCursor::getColumnCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

void android::database::AbstractCursor::deactivate()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_boolean android::database::AbstractCursor::requery()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

cpp_boolean android::database::AbstractCursor::isClosed()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

void android::database::AbstractCursor::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

cpp_boolean android::database::AbstractCursor::onMove(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::database::AbstractCursor::copyStringToBuffer(cpp_int const &a0, local_ref< android::database::CharArrayBuffer > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::database::AbstractCursor::getPosition()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

cpp_boolean android::database::AbstractCursor::moveToPosition(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

void android::database::AbstractCursor::fillWindow(cpp_int const &a0, local_ref< android::database::CursorWindow > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::database::AbstractCursor::move(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::database::AbstractCursor::moveToFirst()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>()
		)
	);
}

cpp_boolean android::database::AbstractCursor::moveToLast()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

cpp_boolean android::database::AbstractCursor::moveToNext()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>()
		)
	);
}

cpp_boolean android::database::AbstractCursor::moveToPrevious()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>()
		)
	);
}

cpp_boolean android::database::AbstractCursor::isFirst()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>()
		)
	);
}

cpp_boolean android::database::AbstractCursor::isLast()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>()
		)
	);
}

cpp_boolean android::database::AbstractCursor::isBeforeFirst()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>()
		)
	);
}

cpp_boolean android::database::AbstractCursor::isAfterLast()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>()
		)
	);
}

cpp_int android::database::AbstractCursor::getColumnIndex(local_ref< java::lang::String > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::database::AbstractCursor::getColumnIndexOrThrow(local_ref< java::lang::String > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::database::AbstractCursor::getColumnName(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype()
		)
	);
}

void android::database::AbstractCursor::registerContentObserver(local_ref< android::database::ContentObserver > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype()
		)
	);
}

void android::database::AbstractCursor::unregisterContentObserver(local_ref< android::database::ContentObserver > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype()
		)
	);
}

void android::database::AbstractCursor::registerDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>(),
			a0.get_jtype()
		)
	);
}

void android::database::AbstractCursor::unregisterDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>(),
			a0.get_jtype()
		)
	);
}


void android::database::AbstractCursor::setNotificationUri(local_ref< android::content::ContentResolver > const &a0, local_ref< android::net::Uri > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::database::AbstractCursor::getWantsAllOnMoveCalls()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>()
		)
	);
}

local_ref< android::os::Bundle > android::database::AbstractCursor::getExtras()
{
	return local_ref< android::os::Bundle >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), false>()
		)
	);
}

local_ref< android::os::Bundle > android::database::AbstractCursor::respond(local_ref< android::os::Bundle > const &a0)
{
	return local_ref< android::os::Bundle >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(42), J2CPP_METHOD_SIGNATURE(42), false>(),
			a0.get_jtype()
		)
	);
}







J2CPP_DEFINE_CLASS(android::database::AbstractCursor,"android/database/AbstractCursor")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,1,"getCount","()I")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,2,"getColumnNames","()[java.lang.String")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,3,"getString","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,4,"getShort","(I)S")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,5,"getInt","(I)I")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,6,"getLong","(I)J")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,7,"getFloat","(I)F")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,8,"getDouble","(I)D")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,9,"isNull","(I)Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,10,"getBlob","(I)[B")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,11,"getWindow","()Landroid/database/CursorWindow;")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,12,"getColumnCount","()I")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,13,"deactivate","()V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,14,"requery","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,15,"isClosed","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,16,"close","()V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,17,"onMove","(II)Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,18,"copyStringToBuffer","(ILandroid/database/CharArrayBuffer;)V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,19,"getPosition","()I")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,20,"moveToPosition","(I)Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,21,"fillWindow","(ILandroid/database/CursorWindow;)V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,22,"move","(I)Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,23,"moveToFirst","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,24,"moveToLast","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,25,"moveToNext","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,26,"moveToPrevious","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,27,"isFirst","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,28,"isLast","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,29,"isBeforeFirst","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,30,"isAfterLast","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,31,"getColumnIndex","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,32,"getColumnIndexOrThrow","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,33,"getColumnName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,34,"registerContentObserver","(Landroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,35,"unregisterContentObserver","(Landroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,36,"registerDataSetObserver","(Landroid/database/DataSetObserver;)V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,37,"unregisterDataSetObserver","(Landroid/database/DataSetObserver;)V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,38,"onChange","(Z)V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,39,"setNotificationUri","(Landroid/content/ContentResolver;Landroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,40,"getWantsAllOnMoveCalls","()Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,41,"getExtras","()Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,42,"respond","(Landroid/os/Bundle;)Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,43,"isFieldUpdated","(I)Z")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,44,"getUpdatedField","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,45,"checkPosition","()V")
J2CPP_DEFINE_METHOD(android::database::AbstractCursor,46,"finalize","()V")
J2CPP_DEFINE_FIELD(android::database::AbstractCursor,0,"mUpdatedRows","Ljava/util/HashMap;")
J2CPP_DEFINE_FIELD(android::database::AbstractCursor,1,"mRowIdColumnIndex","I")
J2CPP_DEFINE_FIELD(android::database::AbstractCursor,2,"mPos","I")
J2CPP_DEFINE_FIELD(android::database::AbstractCursor,3,"mCurrentRowID","Ljava/lang/Long;")
J2CPP_DEFINE_FIELD(android::database::AbstractCursor,4,"mContentResolver","Landroid/content/ContentResolver;")
J2CPP_DEFINE_FIELD(android::database::AbstractCursor,5,"mClosed","Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_ABSTRACTCURSOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION