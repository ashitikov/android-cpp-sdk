/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.auth.AuthScheme
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEME_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEME_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class Credentials; } } } } }


#include <java/lang/String.hpp>
#include <org/apache/http/Header.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/auth/Credentials.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace auth {

	class AuthScheme;
	class AuthScheme
		: public cpp_object<AuthScheme>
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

		AuthScheme(jobject jobj)
		: cpp_object<AuthScheme>(jobj)
		{
		}

		void processChallenge(local_ref< org::apache::http::Header > const&);
		local_ref< java::lang::String > getSchemeName();
		local_ref< java::lang::String > getParameter(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getRealm();
		cpp_boolean isConnectionBased();
		cpp_boolean isComplete();
		local_ref< org::apache::http::Header > authenticate(local_ref< org::apache::http::auth::Credentials > const&, local_ref< org::apache::http::HttpRequest > const&);
	}; //class AuthScheme

} //namespace auth
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEME_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEME_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEME_HPP_IMPL

namespace j2cpp {


void org::apache::http::auth::AuthScheme::processChallenge(local_ref< org::apache::http::Header > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::auth::AuthScheme::getSchemeName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::auth::AuthScheme::getParameter(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::auth::AuthScheme::getRealm()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean org::apache::http::auth::AuthScheme::isConnectionBased()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean org::apache::http::auth::AuthScheme::isComplete()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< org::apache::http::Header > org::apache::http::auth::AuthScheme::authenticate(local_ref< org::apache::http::auth::Credentials > const &a0, local_ref< org::apache::http::HttpRequest > const &a1)
{
	return local_ref< org::apache::http::Header >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::auth::AuthScheme,"org/apache/http/auth/AuthScheme")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScheme,0,"processChallenge","(Lorg/apache/http/Header;)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScheme,1,"getSchemeName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScheme,2,"getParameter","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScheme,3,"getRealm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScheme,4,"isConnectionBased","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScheme,5,"isComplete","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScheme,6,"authenticate","(Lorg/apache/http/auth/Credentials;Lorg/apache/http/HttpRequest;)Lorg/apache/http/Header;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEME_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
