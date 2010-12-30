/*================================================================================
  code generated by: java2cpp
  class: android.test.ActivityInstrumentationTestCase2
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_ACTIVITYINSTRUMENTATIONTESTCASE2_HPP_DECL
#define J2CPP_ANDROID_TEST_ACTIVITYINSTRUMENTATIONTESTCASE2_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace app { class Activity; } } }


#include <android/app/Activity.hpp>
#include <android/content/Intent.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace test {

	class ActivityInstrumentationTestCase2;
	class ActivityInstrumentationTestCase2
		: public cpp_object<ActivityInstrumentationTestCase2>
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

		ActivityInstrumentationTestCase2(jobject jobj)
		: cpp_object<ActivityInstrumentationTestCase2>(jobj)
		{
		}

		local_ref< android::app::Activity > getActivity();
		void setActivityIntent(local_ref< android::content::Intent > const&);
		void setActivityInitialTouchMode(cpp_boolean const&);
	}; //class ActivityInstrumentationTestCase2

} //namespace test
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_ACTIVITYINSTRUMENTATIONTESTCASE2_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_ACTIVITYINSTRUMENTATIONTESTCASE2_HPP_IMPL
#define J2CPP_ANDROID_TEST_ACTIVITYINSTRUMENTATIONTESTCASE2_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::test::ActivityInstrumentationTestCase2 > create< android::test::ActivityInstrumentationTestCase2>(local_ref< java::lang::String > const &a0, local_ref< java::lang::Class > const &a1)
{
	return local_ref< android::test::ActivityInstrumentationTestCase2 >(
		environment::get().get_jenv()->NewObject(
			get_class<android::test::ActivityInstrumentationTestCase2::J2CPP_CLASS_NAME>(),
			get_method_id<android::test::ActivityInstrumentationTestCase2::J2CPP_CLASS_NAME, android::test::ActivityInstrumentationTestCase2::J2CPP_METHOD_NAME(0), android::test::ActivityInstrumentationTestCase2::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::test::ActivityInstrumentationTestCase2 > create< android::test::ActivityInstrumentationTestCase2>(local_ref< java::lang::Class > const &a0)
{
	return local_ref< android::test::ActivityInstrumentationTestCase2 >(
		environment::get().get_jenv()->NewObject(
			get_class<android::test::ActivityInstrumentationTestCase2::J2CPP_CLASS_NAME>(),
			get_method_id<android::test::ActivityInstrumentationTestCase2::J2CPP_CLASS_NAME, android::test::ActivityInstrumentationTestCase2::J2CPP_METHOD_NAME(1), android::test::ActivityInstrumentationTestCase2::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::app::Activity > android::test::ActivityInstrumentationTestCase2::getActivity()
{
	return local_ref< android::app::Activity >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void android::test::ActivityInstrumentationTestCase2::setActivityIntent(local_ref< android::content::Intent > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void android::test::ActivityInstrumentationTestCase2::setActivityInitialTouchMode(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}





J2CPP_DEFINE_CLASS(android::test::ActivityInstrumentationTestCase2,"android/test/ActivityInstrumentationTestCase2")
J2CPP_DEFINE_METHOD(android::test::ActivityInstrumentationTestCase2,0,"<init>","(Ljava/lang/String;Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(android::test::ActivityInstrumentationTestCase2,1,"<init>","(Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(android::test::ActivityInstrumentationTestCase2,2,"getActivity","()Landroid/app/Activity;")
J2CPP_DEFINE_METHOD(android::test::ActivityInstrumentationTestCase2,3,"setActivityIntent","(Landroid/content/Intent;)V")
J2CPP_DEFINE_METHOD(android::test::ActivityInstrumentationTestCase2,4,"setActivityInitialTouchMode","(Z)V")
J2CPP_DEFINE_METHOD(android::test::ActivityInstrumentationTestCase2,5,"setUp","()V")
J2CPP_DEFINE_METHOD(android::test::ActivityInstrumentationTestCase2,6,"tearDown","()V")
J2CPP_DEFINE_METHOD(android::test::ActivityInstrumentationTestCase2,7,"runTest","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_ACTIVITYINSTRUMENTATIONTESTCASE2_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION