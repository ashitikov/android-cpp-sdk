/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.conn.DefaultClientConnection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTCLIENTCONNECTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTCLIENTCONNECTION_HPP_DECL


namespace j2cpp { namespace java { namespace net { class Socket; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpHost; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }


#include <java/net/Socket.hpp>
#include <org/apache/http/HttpHost.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn {

	class DefaultClientConnection;
	class DefaultClientConnection
		: public cpp_object<DefaultClientConnection>
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

		DefaultClientConnection(jobject jobj)
		: cpp_object<DefaultClientConnection>(jobj)
		{
		}

		local_ref< org::apache::http::HttpHost > getTargetHost();
		cpp_boolean isSecure();
		local_ref< java::net::Socket > getSocket();
		void opening(local_ref< java::net::Socket > const&, local_ref< org::apache::http::HttpHost > const&);
		void openCompleted(cpp_boolean const&, local_ref< org::apache::http::params::HttpParams > const&);
		void shutdown();
		void close();
		void update(local_ref< java::net::Socket > const&, local_ref< org::apache::http::HttpHost > const&, cpp_boolean const&, local_ref< org::apache::http::params::HttpParams > const&);
		local_ref< org::apache::http::HttpResponse > receiveResponseHeader();
		void sendRequestHeader(local_ref< org::apache::http::HttpRequest > const&);
	}; //class DefaultClientConnection

} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTCLIENTCONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTCLIENTCONNECTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTCLIENTCONNECTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::impl::conn::DefaultClientConnection > create< org::apache::http::impl::conn::DefaultClientConnection>()
{
	return local_ref< org::apache::http::impl::conn::DefaultClientConnection >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::conn::DefaultClientConnection::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::conn::DefaultClientConnection::J2CPP_CLASS_NAME, org::apache::http::impl::conn::DefaultClientConnection::J2CPP_METHOD_NAME(0), org::apache::http::impl::conn::DefaultClientConnection::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< org::apache::http::HttpHost > org::apache::http::impl::conn::DefaultClientConnection::getTargetHost()
{
	return local_ref< org::apache::http::HttpHost >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_boolean org::apache::http::impl::conn::DefaultClientConnection::isSecure()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::net::Socket > org::apache::http::impl::conn::DefaultClientConnection::getSocket()
{
	return local_ref< java::net::Socket >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void org::apache::http::impl::conn::DefaultClientConnection::opening(local_ref< java::net::Socket > const &a0, local_ref< org::apache::http::HttpHost > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::apache::http::impl::conn::DefaultClientConnection::openCompleted(cpp_boolean const &a0, local_ref< org::apache::http::params::HttpParams > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::apache::http::impl::conn::DefaultClientConnection::shutdown()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void org::apache::http::impl::conn::DefaultClientConnection::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}




void org::apache::http::impl::conn::DefaultClientConnection::update(local_ref< java::net::Socket > const &a0, local_ref< org::apache::http::HttpHost > const &a1, cpp_boolean const &a2, local_ref< org::apache::http::params::HttpParams > const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< org::apache::http::HttpResponse > org::apache::http::impl::conn::DefaultClientConnection::receiveResponseHeader()
{
	return local_ref< org::apache::http::HttpResponse >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

void org::apache::http::impl::conn::DefaultClientConnection::sendRequestHeader(local_ref< org::apache::http::HttpRequest > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::DefaultClientConnection,"org/apache/http/impl/conn/DefaultClientConnection")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultClientConnection,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultClientConnection,1,"getTargetHost","()Lorg/apache/http/HttpHost;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultClientConnection,2,"isSecure","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultClientConnection,3,"getSocket","()Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultClientConnection,4,"opening","(Ljava/net/Socket;Lorg/apache/http/HttpHost;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultClientConnection,5,"openCompleted","(ZLorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultClientConnection,6,"shutdown","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultClientConnection,7,"close","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultClientConnection,8,"createSessionInputBuffer","(Ljava/net/Socket;ILorg/apache/http/params/HttpParams;)Lorg/apache/http/io/SessionInputBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultClientConnection,9,"createSessionOutputBuffer","(Ljava/net/Socket;ILorg/apache/http/params/HttpParams;)Lorg/apache/http/io/SessionOutputBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultClientConnection,10,"createResponseParser","(Lorg/apache/http/io/SessionInputBuffer;Lorg/apache/http/HttpResponseFactory;Lorg/apache/http/params/HttpParams;)Lorg/apache/http/io/HttpMessageParser;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultClientConnection,11,"update","(Ljava/net/Socket;Lorg/apache/http/HttpHost;ZLorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultClientConnection,12,"receiveResponseHeader","()Lorg/apache/http/HttpResponse;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultClientConnection,13,"sendRequestHeader","(Lorg/apache/http/HttpRequest;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTCLIENTCONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
