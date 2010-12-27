/*================================================================================
  code generated by: java2cpp
  class: java.io.FileInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILEINPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_IO_FILEINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class FileDescriptor; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class FileChannel; } } } }


#include <java/io/File.hpp>
#include <java/io/FileDescriptor.hpp>
#include <java/lang/String.hpp>
#include <java/nio/channels/FileChannel.hpp>


namespace j2cpp {

namespace java { namespace io {

	class FileInputStream;
	class FileInputStream
		: public cpp_object<FileInputStream>
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

		FileInputStream(jobject jobj)
		: cpp_object<FileInputStream>(jobj)
		{
		}

		cpp_int available();
		void close();
		local_ref< java::nio::channels::FileChannel > getChannel();
		local_ref< java::io::FileDescriptor > getFD();
		cpp_int read();
		cpp_int read(local_ref< cpp_byte_array<1> > const&);
		cpp_int read(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		cpp_long skip(cpp_long const&);
	}; //class FileInputStream

} //namespace io
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILEINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILEINPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_IO_FILEINPUTSTREAM_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::io::FileInputStream > create< java::io::FileInputStream>(local_ref< java::io::File > const &a0)
{
	return local_ref< java::io::FileInputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::FileInputStream::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::FileInputStream::J2CPP_CLASS_NAME, java::io::FileInputStream::J2CPP_METHOD_NAME(0), java::io::FileInputStream::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::io::FileInputStream > create< java::io::FileInputStream>(local_ref< java::io::FileDescriptor > const &a0)
{
	return local_ref< java::io::FileInputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::FileInputStream::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::FileInputStream::J2CPP_CLASS_NAME, java::io::FileInputStream::J2CPP_METHOD_NAME(1), java::io::FileInputStream::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::io::FileInputStream > create< java::io::FileInputStream>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::io::FileInputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::FileInputStream::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::FileInputStream::J2CPP_CLASS_NAME, java::io::FileInputStream::J2CPP_METHOD_NAME(2), java::io::FileInputStream::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::io::FileInputStream::available()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void java::io::FileInputStream::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}


local_ref< java::nio::channels::FileChannel > java::io::FileInputStream::getChannel()
{
	return local_ref< java::nio::channels::FileChannel >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::io::FileDescriptor > java::io::FileInputStream::getFD()
{
	return local_ref< java::io::FileDescriptor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_int java::io::FileInputStream::read()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_int java::io::FileInputStream::read(local_ref< cpp_byte_array<1> > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::io::FileInputStream::read(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_long java::io::FileInputStream::skip(cpp_long const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::io::FileInputStream,"java/io/FileInputStream")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,0,"<init>","(Ljava/io/File;)V")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,1,"<init>","(Ljava/io/FileDescriptor;)V")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,2,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,3,"available","()I")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,4,"close","()V")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,5,"finalize","()V")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,6,"getChannel","()Ljava/nio/channels/FileChannel;")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,7,"getFD","()Ljava/io/FileDescriptor;")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,8,"read","()I")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,9,"read","([B)I")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,10,"read","([BII)I")
J2CPP_DEFINE_METHOD(java::io::FileInputStream,11,"skip","(J)J")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILEINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION