/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.params.HttpProtocolParamBean
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPROTOCOLPARAMBEAN_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPROTOCOLPARAMBEAN_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class HttpVersion; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <org/apache/http/HttpVersion.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace params {

	class HttpProtocolParamBean;
	class HttpProtocolParamBean
		: public cpp_object<HttpProtocolParamBean>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		HttpProtocolParamBean(jobject jobj)
		: cpp_object<HttpProtocolParamBean>(jobj)
		{
		}

		void setHttpElementCharset(local_ref< java::lang::String > const&);
		void setContentCharset(local_ref< java::lang::String > const&);
		void setVersion(local_ref< org::apache::http::HttpVersion > const&);
		void setUserAgent(local_ref< java::lang::String > const&);
		void setUseExpectContinue(cpp_boolean const&);
	}; //class HttpProtocolParamBean

} //namespace params
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPROTOCOLPARAMBEAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPROTOCOLPARAMBEAN_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPROTOCOLPARAMBEAN_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::params::HttpProtocolParamBean > create< org::apache::http::params::HttpProtocolParamBean>(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return local_ref< org::apache::http::params::HttpProtocolParamBean >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::params::HttpProtocolParamBean::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::params::HttpProtocolParamBean::J2CPP_CLASS_NAME, org::apache::http::params::HttpProtocolParamBean::J2CPP_METHOD_NAME(0), org::apache::http::params::HttpProtocolParamBean::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::params::HttpProtocolParamBean::setHttpElementCharset(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::params::HttpProtocolParamBean::setContentCharset(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::params::HttpProtocolParamBean::setVersion(local_ref< org::apache::http::HttpVersion > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::params::HttpProtocolParamBean::setUserAgent(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::params::HttpProtocolParamBean::setUseExpectContinue(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::params::HttpProtocolParamBean,"org/apache/http/params/HttpProtocolParamBean")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParamBean,0,"<init>","(Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParamBean,1,"setHttpElementCharset","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParamBean,2,"setContentCharset","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParamBean,3,"setVersion","(Lorg/apache/http/HttpVersion;)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParamBean,4,"setUserAgent","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParamBean,5,"setUseExpectContinue","(Z)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPROTOCOLPARAMBEAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION