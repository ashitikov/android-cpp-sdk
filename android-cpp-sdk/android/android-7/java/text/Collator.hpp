/*================================================================================
  code generated by: java2cpp
  class: java.text.Collator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_COLLATOR_HPP_DECL
#define J2CPP_JAVA_TEXT_COLLATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace text { class CollationKey; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/text/CollationKey.hpp>
#include <java/util/Locale.hpp>


namespace j2cpp {

namespace java { namespace text {

	class Collator;
	class Collator
		: public cpp_object<Collator>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)

		Collator(jobject jobj)
		: cpp_object<Collator>(jobj)
		{
		}

		local_ref< java::lang::Object > clone();
		cpp_int compare(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		cpp_int compare(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_boolean equals(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		static local_ref< cpp_object_array<java::util::Locale, 1> > getAvailableLocales();
		local_ref< java::text::CollationKey > getCollationKey(local_ref< java::lang::String > const&);
		cpp_int getDecomposition();
		static local_ref< java::text::Collator > getInstance();
		static local_ref< java::text::Collator > getInstance(local_ref< java::util::Locale > const&);
		cpp_int getStrength();
		cpp_int hashCode();
		void setDecomposition(cpp_int const&);
		void setStrength(cpp_int const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > NO_DECOMPOSITION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > CANONICAL_DECOMPOSITION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > FULL_DECOMPOSITION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > PRIMARY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > SECONDARY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > TERTIARY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > IDENTICAL;
	}; //class Collator

} //namespace text
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_COLLATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_COLLATOR_HPP_IMPL
#define J2CPP_JAVA_TEXT_COLLATOR_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::text::Collator > create< java::text::Collator>()
{
	return local_ref< java::text::Collator >(
		environment::get().get_jenv()->NewObject(
			get_class<java::text::Collator::J2CPP_CLASS_NAME>(),
			get_method_id<java::text::Collator::J2CPP_CLASS_NAME, java::text::Collator::J2CPP_METHOD_NAME(0), java::text::Collator::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::lang::Object > java::text::Collator::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_int java::text::Collator::compare(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int java::text::Collator::compare(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::text::Collator::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::text::Collator::equals(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::util::Locale, 1> > java::text::Collator::getAvailableLocales()
{
	return local_ref< cpp_object_array<java::util::Locale, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>()
		)
	);
}

local_ref< java::text::CollationKey > java::text::Collator::getCollationKey(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::text::CollationKey >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::text::Collator::getDecomposition()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< java::text::Collator > java::text::Collator::getInstance()
{
	return local_ref< java::text::Collator >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), true>()
		)
	);
}

local_ref< java::text::Collator > java::text::Collator::getInstance(local_ref< java::util::Locale > const &a0)
{
	return local_ref< java::text::Collator >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::text::Collator::getStrength()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_int java::text::Collator::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

void java::text::Collator::setDecomposition(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::Collator::setStrength(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	java::text::Collator::J2CPP_CLASS_NAME,
	java::text::Collator::J2CPP_FIELD_NAME(0),
	java::text::Collator::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> java::text::Collator::NO_DECOMPOSITION;

static_field<
	java::text::Collator::J2CPP_CLASS_NAME,
	java::text::Collator::J2CPP_FIELD_NAME(1),
	java::text::Collator::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> java::text::Collator::CANONICAL_DECOMPOSITION;

static_field<
	java::text::Collator::J2CPP_CLASS_NAME,
	java::text::Collator::J2CPP_FIELD_NAME(2),
	java::text::Collator::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> java::text::Collator::FULL_DECOMPOSITION;

static_field<
	java::text::Collator::J2CPP_CLASS_NAME,
	java::text::Collator::J2CPP_FIELD_NAME(3),
	java::text::Collator::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> java::text::Collator::PRIMARY;

static_field<
	java::text::Collator::J2CPP_CLASS_NAME,
	java::text::Collator::J2CPP_FIELD_NAME(4),
	java::text::Collator::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> java::text::Collator::SECONDARY;

static_field<
	java::text::Collator::J2CPP_CLASS_NAME,
	java::text::Collator::J2CPP_FIELD_NAME(5),
	java::text::Collator::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> java::text::Collator::TERTIARY;

static_field<
	java::text::Collator::J2CPP_CLASS_NAME,
	java::text::Collator::J2CPP_FIELD_NAME(6),
	java::text::Collator::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> java::text::Collator::IDENTICAL;


J2CPP_DEFINE_CLASS(java::text::Collator,"java/text/Collator")
J2CPP_DEFINE_METHOD(java::text::Collator,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::text::Collator,1,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::text::Collator,2,"compare","(Ljava/lang/Object;Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::text::Collator,3,"compare","(Ljava/lang/String;Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(java::text::Collator,4,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::text::Collator,5,"equals","(Ljava/lang/String;Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(java::text::Collator,6,"getAvailableLocales","()[java.util.Locale")
J2CPP_DEFINE_METHOD(java::text::Collator,7,"getCollationKey","(Ljava/lang/String;)Ljava/text/CollationKey;")
J2CPP_DEFINE_METHOD(java::text::Collator,8,"getDecomposition","()I")
J2CPP_DEFINE_METHOD(java::text::Collator,9,"getInstance","()Ljava/text/Collator;")
J2CPP_DEFINE_METHOD(java::text::Collator,10,"getInstance","(Ljava/util/Locale;)Ljava/text/Collator;")
J2CPP_DEFINE_METHOD(java::text::Collator,11,"getStrength","()I")
J2CPP_DEFINE_METHOD(java::text::Collator,12,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::text::Collator,13,"setDecomposition","(I)V")
J2CPP_DEFINE_METHOD(java::text::Collator,14,"setStrength","(I)V")
J2CPP_DEFINE_FIELD(java::text::Collator,0,"NO_DECOMPOSITION","I")
J2CPP_DEFINE_FIELD(java::text::Collator,1,"CANONICAL_DECOMPOSITION","I")
J2CPP_DEFINE_FIELD(java::text::Collator,2,"FULL_DECOMPOSITION","I")
J2CPP_DEFINE_FIELD(java::text::Collator,3,"PRIMARY","I")
J2CPP_DEFINE_FIELD(java::text::Collator,4,"SECONDARY","I")
J2CPP_DEFINE_FIELD(java::text::Collator,5,"TERTIARY","I")
J2CPP_DEFINE_FIELD(java::text::Collator,6,"IDENTICAL","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_COLLATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
