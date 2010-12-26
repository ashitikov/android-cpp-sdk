/*================================================================================
  code generated by: java2cpp
  class: android.test.TestSuiteProvider
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_TESTSUITEPROVIDER_HPP_DECL
#define J2CPP_ANDROID_TEST_TESTSUITEPROVIDER_HPP_DECL


namespace j2cpp { namespace junit { namespace framework { class TestSuite; } } }


#include <junit/framework/TestSuite.hpp>


namespace j2cpp {

namespace android { namespace test {

	class TestSuiteProvider;
	class TestSuiteProvider
		: public cpp_object<TestSuiteProvider>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		TestSuiteProvider(jobject jobj)
		: cpp_object<TestSuiteProvider>(jobj)
		{
		}

		local_ref< junit::framework::TestSuite > getTestSuite();
	}; //class TestSuiteProvider

} //namespace test
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_TESTSUITEPROVIDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_TESTSUITEPROVIDER_HPP_IMPL
#define J2CPP_ANDROID_TEST_TESTSUITEPROVIDER_HPP_IMPL

namespace j2cpp {


local_ref< junit::framework::TestSuite > android::test::TestSuiteProvider::getTestSuite()
{
	return local_ref< junit::framework::TestSuite >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::test::TestSuiteProvider,"android/test/TestSuiteProvider")
J2CPP_DEFINE_METHOD(android::test::TestSuiteProvider,0,"getTestSuite","()Ljunit/framework/TestSuite;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_TESTSUITEPROVIDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
