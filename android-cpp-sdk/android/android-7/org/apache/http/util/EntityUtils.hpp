/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.util.EntityUtils
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_UTIL_ENTITYUTILS_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_UTIL_ENTITYUTILS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpEntity; } } } }


#include <java/lang/String.hpp>
#include <org/apache/http/HttpEntity.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace util {

	class EntityUtils;
	class EntityUtils
		: public cpp_object<EntityUtils>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		EntityUtils(jobject jobj)
		: cpp_object<EntityUtils>(jobj)
		{
		}

		static local_ref< cpp_byte_array<1> > toByteArray(local_ref< org::apache::http::HttpEntity > const&);
		static local_ref< java::lang::String > getContentCharSet(local_ref< org::apache::http::HttpEntity > const&);
		static local_ref< java::lang::String > toString(local_ref< org::apache::http::HttpEntity > const&, local_ref< java::lang::String > const&);
		static local_ref< java::lang::String > toString(local_ref< org::apache::http::HttpEntity > const&);
	}; //class EntityUtils

} //namespace util
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_UTIL_ENTITYUTILS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_UTIL_ENTITYUTILS_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_UTIL_ENTITYUTILS_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::util::EntityUtils > create< org::apache::http::util::EntityUtils>()
{
	return local_ref< org::apache::http::util::EntityUtils >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::util::EntityUtils::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::util::EntityUtils::J2CPP_CLASS_NAME, org::apache::http::util::EntityUtils::J2CPP_METHOD_NAME(0), org::apache::http::util::EntityUtils::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< cpp_byte_array<1> > org::apache::http::util::EntityUtils::toByteArray(local_ref< org::apache::http::HttpEntity > const &a0)
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::util::EntityUtils::getContentCharSet(local_ref< org::apache::http::HttpEntity > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::util::EntityUtils::toString(local_ref< org::apache::http::HttpEntity > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::util::EntityUtils::toString(local_ref< org::apache::http::HttpEntity > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::util::EntityUtils,"org/apache/http/util/EntityUtils")
J2CPP_DEFINE_METHOD(org::apache::http::util::EntityUtils,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::util::EntityUtils,1,"toByteArray","(Lorg/apache/http/HttpEntity;)[B")
J2CPP_DEFINE_METHOD(org::apache::http::util::EntityUtils,2,"getContentCharSet","(Lorg/apache/http/HttpEntity;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::util::EntityUtils,3,"toString","(Lorg/apache/http/HttpEntity;Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::util::EntityUtils,4,"toString","(Lorg/apache/http/HttpEntity;)Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_UTIL_ENTITYUTILS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
