/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.io.HttpMessageParser
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IO_HTTPMESSAGEPARSER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IO_HTTPMESSAGEPARSER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class HttpMessage; } } } }


#include <org/apache/http/HttpMessage.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace io {

	class HttpMessageParser;
	class HttpMessageParser
		: public cpp_object<HttpMessageParser>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		HttpMessageParser(jobject jobj)
		: cpp_object<HttpMessageParser>(jobj)
		{
		}

		local_ref< org::apache::http::HttpMessage > parse();
	}; //class HttpMessageParser

} //namespace io
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IO_HTTPMESSAGEPARSER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IO_HTTPMESSAGEPARSER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IO_HTTPMESSAGEPARSER_HPP_IMPL

namespace j2cpp {


local_ref< org::apache::http::HttpMessage > org::apache::http::io::HttpMessageParser::parse()
{
	return local_ref< org::apache::http::HttpMessage >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::io::HttpMessageParser,"org/apache/http/io/HttpMessageParser")
J2CPP_DEFINE_METHOD(org::apache::http::io::HttpMessageParser,0,"parse","()Lorg/apache/http/HttpMessage;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IO_HTTPMESSAGEPARSER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
