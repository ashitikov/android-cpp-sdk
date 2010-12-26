/*================================================================================
  code generated by: java2cpp
  class: android.os.Environment
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_ENVIRONMENT_HPP_DECL
#define J2CPP_ANDROID_OS_ENVIRONMENT_HPP_DECL


namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/File.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace os {

	class Environment;
	class Environment
		: public cpp_object<Environment>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)

		Environment(jobject jobj)
		: cpp_object<Environment>(jobj)
		{
		}

		static local_ref< java::io::File > getRootDirectory();
		static local_ref< java::io::File > getDataDirectory();
		static local_ref< java::io::File > getExternalStorageDirectory();
		static local_ref< java::io::File > getDownloadCacheDirectory();
		static local_ref< java::lang::String > getExternalStorageState();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > MEDIA_REMOVED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > MEDIA_UNMOUNTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > MEDIA_CHECKING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > MEDIA_NOFS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > MEDIA_MOUNTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > MEDIA_MOUNTED_READ_ONLY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > MEDIA_SHARED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::String > > MEDIA_BAD_REMOVAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::String > > MEDIA_UNMOUNTABLE;
	}; //class Environment

} //namespace os
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_ENVIRONMENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_ENVIRONMENT_HPP_IMPL
#define J2CPP_ANDROID_OS_ENVIRONMENT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::os::Environment > create< android::os::Environment>()
{
	return local_ref< android::os::Environment >(
		environment::get().get_jenv()->NewObject(
			get_class<android::os::Environment::J2CPP_CLASS_NAME>(),
			get_method_id<android::os::Environment::J2CPP_CLASS_NAME, android::os::Environment::J2CPP_METHOD_NAME(0), android::os::Environment::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::io::File > android::os::Environment::getRootDirectory()
{
	return local_ref< java::io::File >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

local_ref< java::io::File > android::os::Environment::getDataDirectory()
{
	return local_ref< java::io::File >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>()
		)
	);
}

local_ref< java::io::File > android::os::Environment::getExternalStorageDirectory()
{
	return local_ref< java::io::File >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>()
		)
	);
}

local_ref< java::io::File > android::os::Environment::getDownloadCacheDirectory()
{
	return local_ref< java::io::File >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>()
		)
	);
}

local_ref< java::lang::String > android::os::Environment::getExternalStorageState()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>()
		)
	);
}


static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(0),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::os::Environment::MEDIA_REMOVED;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(1),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::os::Environment::MEDIA_UNMOUNTED;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(2),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::os::Environment::MEDIA_CHECKING;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(3),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::os::Environment::MEDIA_NOFS;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(4),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::os::Environment::MEDIA_MOUNTED;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(5),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> android::os::Environment::MEDIA_MOUNTED_READ_ONLY;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(6),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::lang::String >
> android::os::Environment::MEDIA_SHARED;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(7),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::lang::String >
> android::os::Environment::MEDIA_BAD_REMOVAL;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(8),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::lang::String >
> android::os::Environment::MEDIA_UNMOUNTABLE;


J2CPP_DEFINE_CLASS(android::os::Environment,"android/os/Environment")
J2CPP_DEFINE_METHOD(android::os::Environment,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::os::Environment,1,"getRootDirectory","()Ljava/io/File;")
J2CPP_DEFINE_METHOD(android::os::Environment,2,"getDataDirectory","()Ljava/io/File;")
J2CPP_DEFINE_METHOD(android::os::Environment,3,"getExternalStorageDirectory","()Ljava/io/File;")
J2CPP_DEFINE_METHOD(android::os::Environment,4,"getDownloadCacheDirectory","()Ljava/io/File;")
J2CPP_DEFINE_METHOD(android::os::Environment,5,"getExternalStorageState","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,0,"MEDIA_REMOVED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,1,"MEDIA_UNMOUNTED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,2,"MEDIA_CHECKING","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,3,"MEDIA_NOFS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,4,"MEDIA_MOUNTED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,5,"MEDIA_MOUNTED_READ_ONLY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,6,"MEDIA_SHARED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,7,"MEDIA_BAD_REMOVAL","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,8,"MEDIA_UNMOUNTABLE","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_ENVIRONMENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
