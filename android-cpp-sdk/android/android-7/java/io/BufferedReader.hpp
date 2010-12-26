/*================================================================================
  code generated by: java2cpp
  class: java.io.BufferedReader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_BUFFEREDREADER_HPP_DECL
#define J2CPP_JAVA_IO_BUFFEREDREADER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Reader; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/Reader.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace io {

	class BufferedReader;
	class BufferedReader
		: public cpp_object<BufferedReader>
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

		BufferedReader(jobject jobj)
		: cpp_object<BufferedReader>(jobj)
		{
		}

		void close();
		void mark(cpp_int const&);
		cpp_boolean markSupported();
		cpp_int read();
		cpp_int read(local_ref< cpp_char_array<1> > const&, cpp_int const&, cpp_int const&);
		local_ref< java::lang::String > readLine();
		cpp_boolean ready();
		void reset();
		cpp_long skip(cpp_long const&);
	}; //class BufferedReader

} //namespace io
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_IO_BUFFEREDREADER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_BUFFEREDREADER_HPP_IMPL
#define J2CPP_JAVA_IO_BUFFEREDREADER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::io::BufferedReader > create< java::io::BufferedReader>(local_ref< java::io::Reader > const &a0)
{
	return local_ref< java::io::BufferedReader >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::BufferedReader::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::BufferedReader::J2CPP_CLASS_NAME, java::io::BufferedReader::J2CPP_METHOD_NAME(0), java::io::BufferedReader::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::io::BufferedReader > create< java::io::BufferedReader>(local_ref< java::io::Reader > const &a0, cpp_int const &a1)
{
	return local_ref< java::io::BufferedReader >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::BufferedReader::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::BufferedReader::J2CPP_CLASS_NAME, java::io::BufferedReader::J2CPP_METHOD_NAME(1), java::io::BufferedReader::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::io::BufferedReader::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void java::io::BufferedReader::mark(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::io::BufferedReader::markSupported()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int java::io::BufferedReader::read()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int java::io::BufferedReader::read(local_ref< cpp_char_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::io::BufferedReader::readLine()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_boolean java::io::BufferedReader::ready()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

void java::io::BufferedReader::reset()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_long java::io::BufferedReader::skip(cpp_long const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::io::BufferedReader,"java/io/BufferedReader")
J2CPP_DEFINE_METHOD(java::io::BufferedReader,0,"<init>","(Ljava/io/Reader;)V")
J2CPP_DEFINE_METHOD(java::io::BufferedReader,1,"<init>","(Ljava/io/Reader;I)V")
J2CPP_DEFINE_METHOD(java::io::BufferedReader,2,"close","()V")
J2CPP_DEFINE_METHOD(java::io::BufferedReader,3,"mark","(I)V")
J2CPP_DEFINE_METHOD(java::io::BufferedReader,4,"markSupported","()Z")
J2CPP_DEFINE_METHOD(java::io::BufferedReader,5,"read","()I")
J2CPP_DEFINE_METHOD(java::io::BufferedReader,6,"read","([CII)I")
J2CPP_DEFINE_METHOD(java::io::BufferedReader,7,"readLine","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::BufferedReader,8,"ready","()Z")
J2CPP_DEFINE_METHOD(java::io::BufferedReader,9,"reset","()V")
J2CPP_DEFINE_METHOD(java::io::BufferedReader,10,"skip","(J)J")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_BUFFEREDREADER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
