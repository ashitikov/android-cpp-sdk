/*================================================================================
  code generated by: java2cpp
  class: java.math.MathContext
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_MATH_MATHCONTEXT_HPP_DECL
#define J2CPP_JAVA_MATH_MATHCONTEXT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace math { class RoundingMode; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/math/RoundingMode.hpp>


namespace j2cpp {

namespace java { namespace math {

	class MathContext;
	class MathContext
		: public cpp_object<MathContext>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		MathContext(jobject jobj)
		: cpp_object<MathContext>(jobj)
		{
		}

		cpp_int getPrecision();
		local_ref< java::math::RoundingMode > getRoundingMode();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_int hashCode();
		local_ref< java::lang::String > toString();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::math::MathContext > > DECIMAL128;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::math::MathContext > > DECIMAL32;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::math::MathContext > > DECIMAL64;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::math::MathContext > > UNLIMITED;
	}; //class MathContext

} //namespace math
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_MATH_MATHCONTEXT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_MATH_MATHCONTEXT_HPP_IMPL
#define J2CPP_JAVA_MATH_MATHCONTEXT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::math::MathContext > create< java::math::MathContext>(cpp_int const &a0)
{
	return local_ref< java::math::MathContext >(
		environment::get().get_jenv()->NewObject(
			get_class<java::math::MathContext::J2CPP_CLASS_NAME>(),
			get_method_id<java::math::MathContext::J2CPP_CLASS_NAME, java::math::MathContext::J2CPP_METHOD_NAME(0), java::math::MathContext::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::math::MathContext > create< java::math::MathContext>(cpp_int const &a0, local_ref< java::math::RoundingMode > const &a1)
{
	return local_ref< java::math::MathContext >(
		environment::get().get_jenv()->NewObject(
			get_class<java::math::MathContext::J2CPP_CLASS_NAME>(),
			get_method_id<java::math::MathContext::J2CPP_CLASS_NAME, java::math::MathContext::J2CPP_METHOD_NAME(1), java::math::MathContext::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::math::MathContext > create< java::math::MathContext>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::math::MathContext >(
		environment::get().get_jenv()->NewObject(
			get_class<java::math::MathContext::J2CPP_CLASS_NAME>(),
			get_method_id<java::math::MathContext::J2CPP_CLASS_NAME, java::math::MathContext::J2CPP_METHOD_NAME(2), java::math::MathContext::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::math::MathContext::getPrecision()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::math::RoundingMode > java::math::MathContext::getRoundingMode()
{
	return local_ref< java::math::RoundingMode >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean java::math::MathContext::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::math::MathContext::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::lang::String > java::math::MathContext::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}


static_field<
	java::math::MathContext::J2CPP_CLASS_NAME,
	java::math::MathContext::J2CPP_FIELD_NAME(0),
	java::math::MathContext::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::math::MathContext >
> java::math::MathContext::DECIMAL128;

static_field<
	java::math::MathContext::J2CPP_CLASS_NAME,
	java::math::MathContext::J2CPP_FIELD_NAME(1),
	java::math::MathContext::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::math::MathContext >
> java::math::MathContext::DECIMAL32;

static_field<
	java::math::MathContext::J2CPP_CLASS_NAME,
	java::math::MathContext::J2CPP_FIELD_NAME(2),
	java::math::MathContext::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::math::MathContext >
> java::math::MathContext::DECIMAL64;

static_field<
	java::math::MathContext::J2CPP_CLASS_NAME,
	java::math::MathContext::J2CPP_FIELD_NAME(3),
	java::math::MathContext::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::math::MathContext >
> java::math::MathContext::UNLIMITED;


J2CPP_DEFINE_CLASS(java::math::MathContext,"java/math/MathContext")
J2CPP_DEFINE_METHOD(java::math::MathContext,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::math::MathContext,1,"<init>","(ILjava/math/RoundingMode;)V")
J2CPP_DEFINE_METHOD(java::math::MathContext,2,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::math::MathContext,3,"getPrecision","()I")
J2CPP_DEFINE_METHOD(java::math::MathContext,4,"getRoundingMode","()Ljava/math/RoundingMode;")
J2CPP_DEFINE_METHOD(java::math::MathContext,5,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::math::MathContext,6,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::math::MathContext,7,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::math::MathContext,8,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::math::MathContext,0,"DECIMAL128","Ljava/math/MathContext;")
J2CPP_DEFINE_FIELD(java::math::MathContext,1,"DECIMAL32","Ljava/math/MathContext;")
J2CPP_DEFINE_FIELD(java::math::MathContext,2,"DECIMAL64","Ljava/math/MathContext;")
J2CPP_DEFINE_FIELD(java::math::MathContext,3,"UNLIMITED","Ljava/math/MathContext;")

} //namespace j2cpp

#endif //J2CPP_JAVA_MATH_MATHCONTEXT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
