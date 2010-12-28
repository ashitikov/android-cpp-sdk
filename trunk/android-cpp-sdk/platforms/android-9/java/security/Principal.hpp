/*================================================================================
  code generated by: java2cpp
  class: java.security.Principal
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PRINCIPAL_HPP_DECL
#define J2CPP_JAVA_SECURITY_PRINCIPAL_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace security {

	class Principal;
	class Principal
		: public cpp_object<Principal>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		Principal(jobject jobj)
		: cpp_object<Principal>(jobj)
		{
		}

		cpp_boolean equals(local_ref< java::lang::Object > const&);
		local_ref< java::lang::String > getName();
		cpp_int hashCode();
		local_ref< java::lang::String > toString();
	}; //class Principal

} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PRINCIPAL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PRINCIPAL_HPP_IMPL
#define J2CPP_JAVA_SECURITY_PRINCIPAL_HPP_IMPL

namespace j2cpp {


cpp_boolean java::security::Principal::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::security::Principal::getName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_int java::security::Principal::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > java::security::Principal::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::Principal,"java/security/Principal")
J2CPP_DEFINE_METHOD(java::security::Principal,0,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::security::Principal,1,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::Principal,2,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::security::Principal,3,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PRINCIPAL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION