/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.conn.tsccm.RefQueueHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_REFQUEUEHANDLER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_REFQUEUEHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { namespace ref { class Reference; } } } }


#include <java/lang/ref/Reference.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm {

	class RefQueueHandler;
	class RefQueueHandler
		: public cpp_object<RefQueueHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		RefQueueHandler(jobject jobj)
		: cpp_object<RefQueueHandler>(jobj)
		{
		}

		void handleReference(local_ref< java::lang::ref::Reference > const&);
	}; //class RefQueueHandler

} //namespace tsccm
} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_REFQUEUEHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_REFQUEUEHANDLER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_REFQUEUEHANDLER_HPP_IMPL

namespace j2cpp {


void org::apache::http::impl::conn::tsccm::RefQueueHandler::handleReference(local_ref< java::lang::ref::Reference > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::tsccm::RefQueueHandler,"org/apache/http/impl/conn/tsccm/RefQueueHandler")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::RefQueueHandler,0,"handleReference","(Ljava/lang/ref/Reference;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_REFQUEUEHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
