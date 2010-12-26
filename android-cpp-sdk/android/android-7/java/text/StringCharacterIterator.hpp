/*================================================================================
  code generated by: java2cpp
  class: java.text.StringCharacterIterator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_STRINGCHARACTERITERATOR_HPP_DECL
#define J2CPP_JAVA_TEXT_STRINGCHARACTERITERATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace text {

	class StringCharacterIterator;
	class StringCharacterIterator
		: public cpp_object<StringCharacterIterator>
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

		StringCharacterIterator(jobject jobj)
		: cpp_object<StringCharacterIterator>(jobj)
		{
		}

		local_ref< java::lang::Object > clone();
		cpp_char current();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_char first();
		cpp_int getBeginIndex();
		cpp_int getEndIndex();
		cpp_int getIndex();
		cpp_int hashCode();
		cpp_char last();
		cpp_char next();
		cpp_char previous();
		cpp_char setIndex(cpp_int const&);
		void setText(local_ref< java::lang::String > const&);
	}; //class StringCharacterIterator

} //namespace text
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_STRINGCHARACTERITERATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_STRINGCHARACTERITERATOR_HPP_IMPL
#define J2CPP_JAVA_TEXT_STRINGCHARACTERITERATOR_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::text::StringCharacterIterator > create< java::text::StringCharacterIterator>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::text::StringCharacterIterator >(
		environment::get().get_jenv()->NewObject(
			get_class<java::text::StringCharacterIterator::J2CPP_CLASS_NAME>(),
			get_method_id<java::text::StringCharacterIterator::J2CPP_CLASS_NAME, java::text::StringCharacterIterator::J2CPP_METHOD_NAME(0), java::text::StringCharacterIterator::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::text::StringCharacterIterator > create< java::text::StringCharacterIterator>(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< java::text::StringCharacterIterator >(
		environment::get().get_jenv()->NewObject(
			get_class<java::text::StringCharacterIterator::J2CPP_CLASS_NAME>(),
			get_method_id<java::text::StringCharacterIterator::J2CPP_CLASS_NAME, java::text::StringCharacterIterator::J2CPP_METHOD_NAME(1), java::text::StringCharacterIterator::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::text::StringCharacterIterator > create< java::text::StringCharacterIterator>(local_ref< java::lang::String > const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return local_ref< java::text::StringCharacterIterator >(
		environment::get().get_jenv()->NewObject(
			get_class<java::text::StringCharacterIterator::J2CPP_CLASS_NAME>(),
			get_method_id<java::text::StringCharacterIterator::J2CPP_CLASS_NAME, java::text::StringCharacterIterator::J2CPP_METHOD_NAME(2), java::text::StringCharacterIterator::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::text::StringCharacterIterator::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_char java::text::StringCharacterIterator::current()
{
	return cpp_char(
		environment::get().get_jenv()->CallCharMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean java::text::StringCharacterIterator::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_char java::text::StringCharacterIterator::first()
{
	return cpp_char(
		environment::get().get_jenv()->CallCharMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_int java::text::StringCharacterIterator::getBeginIndex()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_int java::text::StringCharacterIterator::getEndIndex()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_int java::text::StringCharacterIterator::getIndex()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_int java::text::StringCharacterIterator::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_char java::text::StringCharacterIterator::last()
{
	return cpp_char(
		environment::get().get_jenv()->CallCharMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_char java::text::StringCharacterIterator::next()
{
	return cpp_char(
		environment::get().get_jenv()->CallCharMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

cpp_char java::text::StringCharacterIterator::previous()
{
	return cpp_char(
		environment::get().get_jenv()->CallCharMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_char java::text::StringCharacterIterator::setIndex(cpp_int const &a0)
{
	return cpp_char(
		environment::get().get_jenv()->CallCharMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::StringCharacterIterator::setText(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::text::StringCharacterIterator,"java/text/StringCharacterIterator")
J2CPP_DEFINE_METHOD(java::text::StringCharacterIterator,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::StringCharacterIterator,1,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::text::StringCharacterIterator,2,"<init>","(Ljava/lang/String;III)V")
J2CPP_DEFINE_METHOD(java::text::StringCharacterIterator,3,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::text::StringCharacterIterator,4,"current","()C")
J2CPP_DEFINE_METHOD(java::text::StringCharacterIterator,5,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::text::StringCharacterIterator,6,"first","()C")
J2CPP_DEFINE_METHOD(java::text::StringCharacterIterator,7,"getBeginIndex","()I")
J2CPP_DEFINE_METHOD(java::text::StringCharacterIterator,8,"getEndIndex","()I")
J2CPP_DEFINE_METHOD(java::text::StringCharacterIterator,9,"getIndex","()I")
J2CPP_DEFINE_METHOD(java::text::StringCharacterIterator,10,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::text::StringCharacterIterator,11,"last","()C")
J2CPP_DEFINE_METHOD(java::text::StringCharacterIterator,12,"next","()C")
J2CPP_DEFINE_METHOD(java::text::StringCharacterIterator,13,"previous","()C")
J2CPP_DEFINE_METHOD(java::text::StringCharacterIterator,14,"setIndex","(I)C")
J2CPP_DEFINE_METHOD(java::text::StringCharacterIterator,15,"setText","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_STRINGCHARACTERITERATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
