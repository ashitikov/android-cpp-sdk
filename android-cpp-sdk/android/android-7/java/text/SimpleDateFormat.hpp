/*================================================================================
  code generated by: java2cpp
  class: java.text.SimpleDateFormat
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_SIMPLEDATEFORMAT_HPP_DECL
#define J2CPP_JAVA_TEXT_SIMPLEDATEFORMAT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class StringBuffer; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace text { class DateFormatSymbols; } } }
namespace j2cpp { namespace java { namespace text { class AttributedCharacterIterator; } } }
namespace j2cpp { namespace java { namespace text { class ParsePosition; } } }
namespace j2cpp { namespace java { namespace text { class FieldPosition; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/text/AttributedCharacterIterator.hpp>
#include <java/text/DateFormatSymbols.hpp>
#include <java/text/FieldPosition.hpp>
#include <java/text/ParsePosition.hpp>
#include <java/util/Date.hpp>
#include <java/util/Locale.hpp>


namespace j2cpp {

namespace java { namespace text {

	class SimpleDateFormat;
	class SimpleDateFormat
		: public cpp_object<SimpleDateFormat>
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

		SimpleDateFormat(jobject jobj)
		: cpp_object<SimpleDateFormat>(jobj)
		{
		}

		void applyLocalizedPattern(local_ref< java::lang::String > const&);
		void applyPattern(local_ref< java::lang::String > const&);
		local_ref< java::lang::Object > clone();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		local_ref< java::text::AttributedCharacterIterator > formatToCharacterIterator(local_ref< java::lang::Object > const&);
		local_ref< java::lang::StringBuffer > format(local_ref< java::util::Date > const&, local_ref< java::lang::StringBuffer > const&, local_ref< java::text::FieldPosition > const&);
		local_ref< java::util::Date > get2DigitYearStart();
		local_ref< java::text::DateFormatSymbols > getDateFormatSymbols();
		cpp_int hashCode();
		local_ref< java::util::Date > parse(local_ref< java::lang::String > const&, local_ref< java::text::ParsePosition > const&);
		void set2DigitYearStart(local_ref< java::util::Date > const&);
		void setDateFormatSymbols(local_ref< java::text::DateFormatSymbols > const&);
		local_ref< java::lang::String > toLocalizedPattern();
		local_ref< java::lang::String > toPattern();
	}; //class SimpleDateFormat

} //namespace text
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_SIMPLEDATEFORMAT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_SIMPLEDATEFORMAT_HPP_IMPL
#define J2CPP_JAVA_TEXT_SIMPLEDATEFORMAT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::text::SimpleDateFormat > create< java::text::SimpleDateFormat>()
{
	return local_ref< java::text::SimpleDateFormat >(
		environment::get().get_jenv()->NewObject(
			get_class<java::text::SimpleDateFormat::J2CPP_CLASS_NAME>(),
			get_method_id<java::text::SimpleDateFormat::J2CPP_CLASS_NAME, java::text::SimpleDateFormat::J2CPP_METHOD_NAME(0), java::text::SimpleDateFormat::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::text::SimpleDateFormat > create< java::text::SimpleDateFormat>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::text::SimpleDateFormat >(
		environment::get().get_jenv()->NewObject(
			get_class<java::text::SimpleDateFormat::J2CPP_CLASS_NAME>(),
			get_method_id<java::text::SimpleDateFormat::J2CPP_CLASS_NAME, java::text::SimpleDateFormat::J2CPP_METHOD_NAME(1), java::text::SimpleDateFormat::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::text::SimpleDateFormat > create< java::text::SimpleDateFormat>(local_ref< java::lang::String > const &a0, local_ref< java::text::DateFormatSymbols > const &a1)
{
	return local_ref< java::text::SimpleDateFormat >(
		environment::get().get_jenv()->NewObject(
			get_class<java::text::SimpleDateFormat::J2CPP_CLASS_NAME>(),
			get_method_id<java::text::SimpleDateFormat::J2CPP_CLASS_NAME, java::text::SimpleDateFormat::J2CPP_METHOD_NAME(2), java::text::SimpleDateFormat::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::text::SimpleDateFormat > create< java::text::SimpleDateFormat>(local_ref< java::lang::String > const &a0, local_ref< java::util::Locale > const &a1)
{
	return local_ref< java::text::SimpleDateFormat >(
		environment::get().get_jenv()->NewObject(
			get_class<java::text::SimpleDateFormat::J2CPP_CLASS_NAME>(),
			get_method_id<java::text::SimpleDateFormat::J2CPP_CLASS_NAME, java::text::SimpleDateFormat::J2CPP_METHOD_NAME(3), java::text::SimpleDateFormat::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::text::SimpleDateFormat::applyLocalizedPattern(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::SimpleDateFormat::applyPattern(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::text::SimpleDateFormat::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_boolean java::text::SimpleDateFormat::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::text::AttributedCharacterIterator > java::text::SimpleDateFormat::formatToCharacterIterator(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::text::AttributedCharacterIterator >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::text::SimpleDateFormat::format(local_ref< java::util::Date > const &a0, local_ref< java::lang::StringBuffer > const &a1, local_ref< java::text::FieldPosition > const &a2)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::util::Date > java::text::SimpleDateFormat::get2DigitYearStart()
{
	return local_ref< java::util::Date >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< java::text::DateFormatSymbols > java::text::SimpleDateFormat::getDateFormatSymbols()
{
	return local_ref< java::text::DateFormatSymbols >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_int java::text::SimpleDateFormat::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< java::util::Date > java::text::SimpleDateFormat::parse(local_ref< java::lang::String > const &a0, local_ref< java::text::ParsePosition > const &a1)
{
	return local_ref< java::util::Date >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::text::SimpleDateFormat::set2DigitYearStart(local_ref< java::util::Date > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::SimpleDateFormat::setDateFormatSymbols(local_ref< java::text::DateFormatSymbols > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::text::SimpleDateFormat::toLocalizedPattern()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

local_ref< java::lang::String > java::text::SimpleDateFormat::toPattern()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::text::SimpleDateFormat,"java/text/SimpleDateFormat")
J2CPP_DEFINE_METHOD(java::text::SimpleDateFormat,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::text::SimpleDateFormat,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::SimpleDateFormat,2,"<init>","(Ljava/lang/String;Ljava/text/DateFormatSymbols;)V")
J2CPP_DEFINE_METHOD(java::text::SimpleDateFormat,3,"<init>","(Ljava/lang/String;Ljava/util/Locale;)V")
J2CPP_DEFINE_METHOD(java::text::SimpleDateFormat,4,"applyLocalizedPattern","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::SimpleDateFormat,5,"applyPattern","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::SimpleDateFormat,6,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::text::SimpleDateFormat,7,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::text::SimpleDateFormat,8,"formatToCharacterIterator","(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;")
J2CPP_DEFINE_METHOD(java::text::SimpleDateFormat,9,"format","(Ljava/util/Date;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::text::SimpleDateFormat,10,"get2DigitYearStart","()Ljava/util/Date;")
J2CPP_DEFINE_METHOD(java::text::SimpleDateFormat,11,"getDateFormatSymbols","()Ljava/text/DateFormatSymbols;")
J2CPP_DEFINE_METHOD(java::text::SimpleDateFormat,12,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::text::SimpleDateFormat,13,"parse","(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Date;")
J2CPP_DEFINE_METHOD(java::text::SimpleDateFormat,14,"set2DigitYearStart","(Ljava/util/Date;)V")
J2CPP_DEFINE_METHOD(java::text::SimpleDateFormat,15,"setDateFormatSymbols","(Ljava/text/DateFormatSymbols;)V")
J2CPP_DEFINE_METHOD(java::text::SimpleDateFormat,16,"toLocalizedPattern","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::text::SimpleDateFormat,17,"toPattern","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_SIMPLEDATEFORMAT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
