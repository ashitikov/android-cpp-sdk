/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.FormattedHeader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_FORMATTEDHEADER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_FORMATTEDHEADER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } } }


#include <org/apache/http/util/CharArrayBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class FormattedHeader;
	class FormattedHeader
		: public cpp_object<FormattedHeader>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		FormattedHeader(jobject jobj)
		: cpp_object<FormattedHeader>(jobj)
		{
		}

		local_ref< org::apache::http::util::CharArrayBuffer > getBuffer();
		cpp_int getValuePos();
	}; //class FormattedHeader

} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_FORMATTEDHEADER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_FORMATTEDHEADER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_FORMATTEDHEADER_HPP_IMPL

namespace j2cpp {


local_ref< org::apache::http::util::CharArrayBuffer > org::apache::http::FormattedHeader::getBuffer()
{
	return local_ref< org::apache::http::util::CharArrayBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_int org::apache::http::FormattedHeader::getValuePos()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::FormattedHeader,"org/apache/http/FormattedHeader")
J2CPP_DEFINE_METHOD(org::apache::http::FormattedHeader,0,"getBuffer","()Lorg/apache/http/util/CharArrayBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::FormattedHeader,1,"getValuePos","()I")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_FORMATTEDHEADER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
