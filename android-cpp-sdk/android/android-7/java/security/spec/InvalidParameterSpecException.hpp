/*================================================================================
  code generated by: java2cpp
  class: java.security.spec.InvalidParameterSpecException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_INVALIDPARAMETERSPECEXCEPTION_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_INVALIDPARAMETERSPECEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class InvalidParameterSpecException;
	class InvalidParameterSpecException
		: public cpp_object<InvalidParameterSpecException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		InvalidParameterSpecException(jobject jobj)
		: cpp_object<InvalidParameterSpecException>(jobj)
		{
		}

	}; //class InvalidParameterSpecException

} //namespace spec
} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_INVALIDPARAMETERSPECEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_INVALIDPARAMETERSPECEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_INVALIDPARAMETERSPECEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::security::spec::InvalidParameterSpecException > create< java::security::spec::InvalidParameterSpecException>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::security::spec::InvalidParameterSpecException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::spec::InvalidParameterSpecException::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::spec::InvalidParameterSpecException::J2CPP_CLASS_NAME, java::security::spec::InvalidParameterSpecException::J2CPP_METHOD_NAME(0), java::security::spec::InvalidParameterSpecException::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::security::spec::InvalidParameterSpecException > create< java::security::spec::InvalidParameterSpecException>()
{
	return local_ref< java::security::spec::InvalidParameterSpecException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::spec::InvalidParameterSpecException::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::spec::InvalidParameterSpecException::J2CPP_CLASS_NAME, java::security::spec::InvalidParameterSpecException::J2CPP_METHOD_NAME(1), java::security::spec::InvalidParameterSpecException::J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::spec::InvalidParameterSpecException,"java/security/spec/InvalidParameterSpecException")
J2CPP_DEFINE_METHOD(java::security::spec::InvalidParameterSpecException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::spec::InvalidParameterSpecException,1,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_INVALIDPARAMETERSPECEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
