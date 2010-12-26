/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.conn.ssl.AbstractVerifier
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SSL_ABSTRACTVERIFIER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_SSL_ABSTRACTVERIFIER_HPP_DECL


namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLSession; } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLSocket; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class X509Certificate; } } } }


#include <java/lang/String.hpp>
#include <java/security/cert/X509Certificate.hpp>
#include <javax/net/ssl/SSLSession.hpp>
#include <javax/net/ssl/SSLSocket.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace ssl {

	class AbstractVerifier;
	class AbstractVerifier
		: public cpp_object<AbstractVerifier>
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

		AbstractVerifier(jobject jobj)
		: cpp_object<AbstractVerifier>(jobj)
		{
		}

		void verify(local_ref< java::lang::String > const&, local_ref< javax::net::ssl::SSLSocket > const&);
		cpp_boolean verify(local_ref< java::lang::String > const&, local_ref< javax::net::ssl::SSLSession > const&);
		void verify(local_ref< java::lang::String > const&, local_ref< java::security::cert::X509Certificate > const&);
		void verify(local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&, cpp_boolean const&);
		static cpp_boolean acceptableCountryWildcard(local_ref< java::lang::String > const&);
		static local_ref< cpp_object_array<java::lang::String, 1> > getCNs(local_ref< java::security::cert::X509Certificate > const&);
		static local_ref< cpp_object_array<java::lang::String, 1> > getDNSSubjectAlts(local_ref< java::security::cert::X509Certificate > const&);
		static cpp_int countDots(local_ref< java::lang::String > const&);
	}; //class AbstractVerifier

} //namespace ssl
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SSL_ABSTRACTVERIFIER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SSL_ABSTRACTVERIFIER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_SSL_ABSTRACTVERIFIER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::conn::ssl::AbstractVerifier > create< org::apache::http::conn::ssl::AbstractVerifier>()
{
	return local_ref< org::apache::http::conn::ssl::AbstractVerifier >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::conn::ssl::AbstractVerifier::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::conn::ssl::AbstractVerifier::J2CPP_CLASS_NAME, org::apache::http::conn::ssl::AbstractVerifier::J2CPP_METHOD_NAME(0), org::apache::http::conn::ssl::AbstractVerifier::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void org::apache::http::conn::ssl::AbstractVerifier::verify(local_ref< java::lang::String > const &a0, local_ref< javax::net::ssl::SSLSocket > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::conn::ssl::AbstractVerifier::verify(local_ref< java::lang::String > const &a0, local_ref< javax::net::ssl::SSLSession > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::apache::http::conn::ssl::AbstractVerifier::verify(local_ref< java::lang::String > const &a0, local_ref< java::security::cert::X509Certificate > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::apache::http::conn::ssl::AbstractVerifier::verify(local_ref< java::lang::String > const &a0, local_ref< cpp_object_array<java::lang::String, 1> > const &a1, local_ref< cpp_object_array<java::lang::String, 1> > const &a2, cpp_boolean const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::conn::ssl::AbstractVerifier::acceptableCountryWildcard(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::String, 1> > org::apache::http::conn::ssl::AbstractVerifier::getCNs(local_ref< java::security::cert::X509Certificate > const &a0)
{
	return local_ref< cpp_object_array<java::lang::String, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::String, 1> > org::apache::http::conn::ssl::AbstractVerifier::getDNSSubjectAlts(local_ref< java::security::cert::X509Certificate > const &a0)
{
	return local_ref< cpp_object_array<java::lang::String, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int org::apache::http::conn::ssl::AbstractVerifier::countDots(local_ref< java::lang::String > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::ssl::AbstractVerifier,"org/apache/http/conn/ssl/AbstractVerifier")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::AbstractVerifier,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::AbstractVerifier,1,"verify","(Ljava/lang/String;Ljavax/net/ssl/SSLSocket;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::AbstractVerifier,2,"verify","(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::AbstractVerifier,3,"verify","(Ljava/lang/String;Ljava/security/cert/X509Certificate;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::AbstractVerifier,4,"verify","(Ljava/lang/String;[java.lang.String[java.lang.StringZ)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::AbstractVerifier,5,"acceptableCountryWildcard","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::AbstractVerifier,6,"getCNs","(Ljava/security/cert/X509Certificate;)[java.lang.String")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::AbstractVerifier,7,"getDNSSubjectAlts","(Ljava/security/cert/X509Certificate;)[java.lang.String")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::AbstractVerifier,8,"countDots","(Ljava/lang/String;)I")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SSL_ABSTRACTVERIFIER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
