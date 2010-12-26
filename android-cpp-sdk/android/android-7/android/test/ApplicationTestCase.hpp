/*================================================================================
  code generated by: java2cpp
  class: android.test.ApplicationTestCase
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_APPLICATIONTESTCASE_HPP_DECL
#define J2CPP_ANDROID_TEST_APPLICATIONTESTCASE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace android { namespace app { class Application; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }


#include <android/app/Application.hpp>
#include <android/content/Context.hpp>
#include <java/lang/Class.hpp>


namespace j2cpp {

namespace android { namespace test {

	class ApplicationTestCase;
	class ApplicationTestCase
		: public cpp_object<ApplicationTestCase>
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

		ApplicationTestCase(jobject jobj)
		: cpp_object<ApplicationTestCase>(jobj)
		{
		}

		local_ref< android::app::Application > getApplication();
		local_ref< android::content::Context > getSystemContext();
		void testApplicationTestCaseSetUpProperly();
	}; //class ApplicationTestCase

} //namespace test
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_APPLICATIONTESTCASE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_APPLICATIONTESTCASE_HPP_IMPL
#define J2CPP_ANDROID_TEST_APPLICATIONTESTCASE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::test::ApplicationTestCase > create< android::test::ApplicationTestCase>(local_ref< java::lang::Class > const &a0)
{
	return local_ref< android::test::ApplicationTestCase >(
		environment::get().get_jenv()->NewObject(
			get_class<android::test::ApplicationTestCase::J2CPP_CLASS_NAME>(),
			get_method_id<android::test::ApplicationTestCase::J2CPP_CLASS_NAME, android::test::ApplicationTestCase::J2CPP_METHOD_NAME(0), android::test::ApplicationTestCase::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::app::Application > android::test::ApplicationTestCase::getApplication()
{
	return local_ref< android::app::Application >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}





local_ref< android::content::Context > android::test::ApplicationTestCase::getSystemContext()
{
	return local_ref< android::content::Context >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void android::test::ApplicationTestCase::testApplicationTestCaseSetUpProperly()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::test::ApplicationTestCase,"android/test/ApplicationTestCase")
J2CPP_DEFINE_METHOD(android::test::ApplicationTestCase,0,"<init>","(Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(android::test::ApplicationTestCase,1,"getApplication","()Landroid/app/Application;")
J2CPP_DEFINE_METHOD(android::test::ApplicationTestCase,2,"setUp","()V")
J2CPP_DEFINE_METHOD(android::test::ApplicationTestCase,3,"createApplication","()V")
J2CPP_DEFINE_METHOD(android::test::ApplicationTestCase,4,"terminateApplication","()V")
J2CPP_DEFINE_METHOD(android::test::ApplicationTestCase,5,"tearDown","()V")
J2CPP_DEFINE_METHOD(android::test::ApplicationTestCase,6,"getSystemContext","()Landroid/content/Context;")
J2CPP_DEFINE_METHOD(android::test::ApplicationTestCase,7,"testApplicationTestCaseSetUpProperly","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_APPLICATIONTESTCASE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
