/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.NoHttpResponseException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_NOHTTPRESPONSEEXCEPTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_NOHTTPRESPONSEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class IOException; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/IOException.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class NoHttpResponseException;
	class NoHttpResponseException
		: public object<NoHttpResponseException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit NoHttpResponseException(jobject jobj)
		: object<NoHttpResponseException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::IOException>() const;
		operator local_ref<java::io::Serializable>() const;


		NoHttpResponseException(local_ref< java::lang::String > const&);
	}; //class NoHttpResponseException

} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_NOHTTPRESPONSEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_NOHTTPRESPONSEEXCEPTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_NOHTTPRESPONSEEXCEPTION_HPP_IMPL

namespace j2cpp {



org::apache::http::NoHttpResponseException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

org::apache::http::NoHttpResponseException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

org::apache::http::NoHttpResponseException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::NoHttpResponseException::operator local_ref<java::io::IOException>() const
{
	return local_ref<java::io::IOException>(get_jobject());
}

org::apache::http::NoHttpResponseException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


org::apache::http::NoHttpResponseException::NoHttpResponseException(local_ref< java::lang::String > const &a0)
: object<org::apache::http::NoHttpResponseException>(
	call_new_object<
		org::apache::http::NoHttpResponseException::J2CPP_CLASS_NAME,
		org::apache::http::NoHttpResponseException::J2CPP_METHOD_NAME(0),
		org::apache::http::NoHttpResponseException::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(org::apache::http::NoHttpResponseException,"org/apache/http/NoHttpResponseException")
J2CPP_DEFINE_METHOD(org::apache::http::NoHttpResponseException,0,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_NOHTTPRESPONSEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION