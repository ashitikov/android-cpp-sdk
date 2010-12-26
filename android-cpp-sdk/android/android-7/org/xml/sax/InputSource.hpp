/*================================================================================
  code generated by: java2cpp
  class: org.xml.sax.InputSource
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_INPUTSOURCE_HPP_DECL
#define J2CPP_ORG_XML_SAX_INPUTSOURCE_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Reader; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/InputStream.hpp>
#include <java/io/Reader.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax {

	class InputSource;
	class InputSource
		: public cpp_object<InputSource>
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

		InputSource(jobject jobj)
		: cpp_object<InputSource>(jobj)
		{
		}

		void setPublicId(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getPublicId();
		void setSystemId(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getSystemId();
		void setByteStream(local_ref< java::io::InputStream > const&);
		local_ref< java::io::InputStream > getByteStream();
		void setEncoding(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getEncoding();
		void setCharacterStream(local_ref< java::io::Reader > const&);
		local_ref< java::io::Reader > getCharacterStream();
	}; //class InputSource

} //namespace sax
} //namespace xml
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_INPUTSOURCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_INPUTSOURCE_HPP_IMPL
#define J2CPP_ORG_XML_SAX_INPUTSOURCE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::xml::sax::InputSource > create< org::xml::sax::InputSource>()
{
	return local_ref< org::xml::sax::InputSource >(
		environment::get().get_jenv()->NewObject(
			get_class<org::xml::sax::InputSource::J2CPP_CLASS_NAME>(),
			get_method_id<org::xml::sax::InputSource::J2CPP_CLASS_NAME, org::xml::sax::InputSource::J2CPP_METHOD_NAME(0), org::xml::sax::InputSource::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< org::xml::sax::InputSource > create< org::xml::sax::InputSource>(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::xml::sax::InputSource >(
		environment::get().get_jenv()->NewObject(
			get_class<org::xml::sax::InputSource::J2CPP_CLASS_NAME>(),
			get_method_id<org::xml::sax::InputSource::J2CPP_CLASS_NAME, org::xml::sax::InputSource::J2CPP_METHOD_NAME(1), org::xml::sax::InputSource::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< org::xml::sax::InputSource > create< org::xml::sax::InputSource>(local_ref< java::io::InputStream > const &a0)
{
	return local_ref< org::xml::sax::InputSource >(
		environment::get().get_jenv()->NewObject(
			get_class<org::xml::sax::InputSource::J2CPP_CLASS_NAME>(),
			get_method_id<org::xml::sax::InputSource::J2CPP_CLASS_NAME, org::xml::sax::InputSource::J2CPP_METHOD_NAME(2), org::xml::sax::InputSource::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< org::xml::sax::InputSource > create< org::xml::sax::InputSource>(local_ref< java::io::Reader > const &a0)
{
	return local_ref< org::xml::sax::InputSource >(
		environment::get().get_jenv()->NewObject(
			get_class<org::xml::sax::InputSource::J2CPP_CLASS_NAME>(),
			get_method_id<org::xml::sax::InputSource::J2CPP_CLASS_NAME, org::xml::sax::InputSource::J2CPP_METHOD_NAME(3), org::xml::sax::InputSource::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::InputSource::setPublicId(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::xml::sax::InputSource::getPublicId()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void org::xml::sax::InputSource::setSystemId(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::xml::sax::InputSource::getSystemId()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void org::xml::sax::InputSource::setByteStream(local_ref< java::io::InputStream > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::io::InputStream > org::xml::sax::InputSource::getByteStream()
{
	return local_ref< java::io::InputStream >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void org::xml::sax::InputSource::setEncoding(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::xml::sax::InputSource::getEncoding()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void org::xml::sax::InputSource::setCharacterStream(local_ref< java::io::Reader > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::io::Reader > org::xml::sax::InputSource::getCharacterStream()
{
	return local_ref< java::io::Reader >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::xml::sax::InputSource,"org/xml/sax/InputSource")
J2CPP_DEFINE_METHOD(org::xml::sax::InputSource,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::InputSource,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::InputSource,2,"<init>","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::InputSource,3,"<init>","(Ljava/io/Reader;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::InputSource,4,"setPublicId","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::InputSource,5,"getPublicId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::InputSource,6,"setSystemId","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::InputSource,7,"getSystemId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::InputSource,8,"setByteStream","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::InputSource,9,"getByteStream","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(org::xml::sax::InputSource,10,"setEncoding","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::InputSource,11,"getEncoding","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::InputSource,12,"setCharacterStream","(Ljava/io/Reader;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::InputSource,13,"getCharacterStream","()Ljava/io/Reader;")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_INPUTSOURCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
