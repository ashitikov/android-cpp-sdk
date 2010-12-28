/*================================================================================
  code generated by: java2cpp
  class: java.lang.ArithmeticException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ARITHMETICEXCEPTION_HPP_DECL
#define J2CPP_JAVA_LANG_ARITHMETICEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class ArithmeticException;
	class ArithmeticException
		: public cpp_object<ArithmeticException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit ArithmeticException(jobject jobj)
		: cpp_object<ArithmeticException>(jobj)
		{
		}

		operator local_ref<java::lang::RuntimeException>() const;


		ArithmeticException();
		ArithmeticException(local_ref< java::lang::String > const&);
	}; //class ArithmeticException

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ARITHMETICEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ARITHMETICEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_LANG_ARITHMETICEXCEPTION_HPP_IMPL

namespace j2cpp {



java::lang::ArithmeticException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jtype());
}


java::lang::ArithmeticException::ArithmeticException()
: cpp_object<java::lang::ArithmeticException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::lang::ArithmeticException::J2CPP_CLASS_NAME>(),
		get_method_id<java::lang::ArithmeticException::J2CPP_CLASS_NAME, java::lang::ArithmeticException::J2CPP_METHOD_NAME(0), java::lang::ArithmeticException::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



java::lang::ArithmeticException::ArithmeticException(local_ref< java::lang::String > const &a0)
: cpp_object<java::lang::ArithmeticException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::lang::ArithmeticException::J2CPP_CLASS_NAME>(),
		get_method_id<java::lang::ArithmeticException::J2CPP_CLASS_NAME, java::lang::ArithmeticException::J2CPP_METHOD_NAME(1), java::lang::ArithmeticException::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}



J2CPP_DEFINE_CLASS(java::lang::ArithmeticException,"java/lang/ArithmeticException")
J2CPP_DEFINE_METHOD(java::lang::ArithmeticException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::ArithmeticException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ARITHMETICEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION