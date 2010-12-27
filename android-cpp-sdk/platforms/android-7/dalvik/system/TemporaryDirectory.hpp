/*================================================================================
  code generated by: java2cpp
  class: dalvik.system.TemporaryDirectory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_SYSTEM_TEMPORARYDIRECTORY_HPP_DECL
#define J2CPP_DALVIK_SYSTEM_TEMPORARYDIRECTORY_HPP_DECL


namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/File.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace dalvik { namespace system {

	class TemporaryDirectory;
	class TemporaryDirectory
		: public cpp_object<TemporaryDirectory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		TemporaryDirectory(jobject jobj)
		: cpp_object<TemporaryDirectory>(jobj)
		{
		}

		static void setUpDirectory(local_ref< java::lang::String > const&);
		static void setUpDirectory(local_ref< java::io::File > const&);
	}; //class TemporaryDirectory

} //namespace system
} //namespace dalvik


} //namespace j2cpp

#endif //J2CPP_DALVIK_SYSTEM_TEMPORARYDIRECTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_SYSTEM_TEMPORARYDIRECTORY_HPP_IMPL
#define J2CPP_DALVIK_SYSTEM_TEMPORARYDIRECTORY_HPP_IMPL

namespace j2cpp {


template <>
local_ref< dalvik::system::TemporaryDirectory > create< dalvik::system::TemporaryDirectory>()
{
	return local_ref< dalvik::system::TemporaryDirectory >(
		environment::get().get_jenv()->NewObject(
			get_class<dalvik::system::TemporaryDirectory::J2CPP_CLASS_NAME>(),
			get_method_id<dalvik::system::TemporaryDirectory::J2CPP_CLASS_NAME, dalvik::system::TemporaryDirectory::J2CPP_METHOD_NAME(0), dalvik::system::TemporaryDirectory::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void dalvik::system::TemporaryDirectory::setUpDirectory(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

void dalvik::system::TemporaryDirectory::setUpDirectory(local_ref< java::io::File > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(dalvik::system::TemporaryDirectory,"dalvik/system/TemporaryDirectory")
J2CPP_DEFINE_METHOD(dalvik::system::TemporaryDirectory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(dalvik::system::TemporaryDirectory,1,"setUpDirectory","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(dalvik::system::TemporaryDirectory,2,"setUpDirectory","(Ljava/io/File;)V")

} //namespace j2cpp

#endif //J2CPP_DALVIK_SYSTEM_TEMPORARYDIRECTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION