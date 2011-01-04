/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.client.protocol.RequestAddCookies
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_REQUESTADDCOOKIES_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_REQUESTADDCOOKIES_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequestInterceptor; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/HttpRequestInterceptor.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client { namespace protocol {

	class RequestAddCookies;
	class RequestAddCookies
		: public object<RequestAddCookies>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit RequestAddCookies(jobject jobj)
		: object<RequestAddCookies>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::HttpRequestInterceptor>() const;


		RequestAddCookies();
		void process(local_ref< org::apache::http::HttpRequest >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
	}; //class RequestAddCookies

} //namespace protocol
} //namespace client
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_REQUESTADDCOOKIES_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_REQUESTADDCOOKIES_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_REQUESTADDCOOKIES_HPP_IMPL

namespace j2cpp {



org::apache::http::client::protocol::RequestAddCookies::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::client::protocol::RequestAddCookies::operator local_ref<org::apache::http::HttpRequestInterceptor>() const
{
	return local_ref<org::apache::http::HttpRequestInterceptor>(get_jobject());
}


org::apache::http::client::protocol::RequestAddCookies::RequestAddCookies()
: object<org::apache::http::client::protocol::RequestAddCookies>(
	call_new_object<
		org::apache::http::client::protocol::RequestAddCookies::J2CPP_CLASS_NAME,
		org::apache::http::client::protocol::RequestAddCookies::J2CPP_METHOD_NAME(0),
		org::apache::http::client::protocol::RequestAddCookies::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


void org::apache::http::client::protocol::RequestAddCookies::process(local_ref< org::apache::http::HttpRequest > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return call_method<
		org::apache::http::client::protocol::RequestAddCookies::J2CPP_CLASS_NAME,
		org::apache::http::client::protocol::RequestAddCookies::J2CPP_METHOD_NAME(1),
		org::apache::http::client::protocol::RequestAddCookies::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::apache::http::client::protocol::RequestAddCookies,"org/apache/http/client/protocol/RequestAddCookies")
J2CPP_DEFINE_METHOD(org::apache::http::client::protocol::RequestAddCookies,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::client::protocol::RequestAddCookies,1,"process","(Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_REQUESTADDCOOKIES_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION