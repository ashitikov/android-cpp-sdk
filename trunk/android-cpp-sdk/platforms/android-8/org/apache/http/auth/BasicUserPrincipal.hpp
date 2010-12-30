/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.auth.BasicUserPrincipal
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_BASICUSERPRINCIPAL_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_AUTH_BASICUSERPRINCIPAL_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace auth {

	class BasicUserPrincipal;
	class BasicUserPrincipal
		: public cpp_object<BasicUserPrincipal>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		BasicUserPrincipal(jobject jobj)
		: cpp_object<BasicUserPrincipal>(jobj)
		{
		}

		local_ref< java::lang::String > getName();
		cpp_int hashCode();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		local_ref< java::lang::String > toString();
	}; //class BasicUserPrincipal

} //namespace auth
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_BASICUSERPRINCIPAL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_BASICUSERPRINCIPAL_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_AUTH_BASICUSERPRINCIPAL_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::auth::BasicUserPrincipal > create< org::apache::http::auth::BasicUserPrincipal>(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::apache::http::auth::BasicUserPrincipal >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::auth::BasicUserPrincipal::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::auth::BasicUserPrincipal::J2CPP_CLASS_NAME, org::apache::http::auth::BasicUserPrincipal::J2CPP_METHOD_NAME(0), org::apache::http::auth::BasicUserPrincipal::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::auth::BasicUserPrincipal::getName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_int org::apache::http::auth::BasicUserPrincipal::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_boolean org::apache::http::auth::BasicUserPrincipal::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::auth::BasicUserPrincipal::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::auth::BasicUserPrincipal,"org/apache/http/auth/BasicUserPrincipal")
J2CPP_DEFINE_METHOD(org::apache::http::auth::BasicUserPrincipal,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::BasicUserPrincipal,1,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::BasicUserPrincipal,2,"hashCode","()I")
J2CPP_DEFINE_METHOD(org::apache::http::auth::BasicUserPrincipal,3,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::auth::BasicUserPrincipal,4,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_BASICUSERPRINCIPAL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION