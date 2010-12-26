/*================================================================================
  code generated by: java2cpp
  class: android.test.suitebuilder.TestSuiteBuilder
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_SUITEBUILDER_TESTSUITEBUILDER_HPP_DECL
#define J2CPP_ANDROID_TEST_SUITEBUILDER_TESTSUITEBUILDER_HPP_DECL


namespace j2cpp { namespace junit { namespace framework { class TestSuite; } } }
namespace j2cpp { namespace java { namespace lang { class ClassLoader; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace com { namespace android { namespace internal { namespace util { class Predicate; } } } } }


#include <com/android/internal/util/Predicate.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>
#include <junit/framework/TestSuite.hpp>


namespace j2cpp {

namespace android { namespace test { namespace suitebuilder {

	class TestSuiteBuilder;
	namespace TestSuiteBuilder_ {

		class FailedToCreateTests;
		class FailedToCreateTests
			: public cpp_object<FailedToCreateTests>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			FailedToCreateTests(jobject jobj)
			: cpp_object<FailedToCreateTests>(jobj)
			{
			}

			void testSuiteConstructionFailed();
		}; //class FailedToCreateTests

	} //namespace TestSuiteBuilder_

	class TestSuiteBuilder
		: public cpp_object<TestSuiteBuilder>
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

		typedef TestSuiteBuilder_::FailedToCreateTests FailedToCreateTests;

		TestSuiteBuilder(jobject jobj)
		: cpp_object<TestSuiteBuilder>(jobj)
		{
		}

		local_ref< android::test::suitebuilder::TestSuiteBuilder > includePackages(local_ref< cpp_object_array<java::lang::String, 1> > const&);
		local_ref< android::test::suitebuilder::TestSuiteBuilder > excludePackages(local_ref< cpp_object_array<java::lang::String, 1> > const&);
		local_ref< android::test::suitebuilder::TestSuiteBuilder > addRequirements(local_ref< java::util::List > const&);
		local_ref< android::test::suitebuilder::TestSuiteBuilder > includeAllPackagesUnderHere();
		local_ref< android::test::suitebuilder::TestSuiteBuilder > named(local_ref< java::lang::String > const&);
		local_ref< junit::framework::TestSuite > build();
		local_ref< android::test::suitebuilder::TestSuiteBuilder > addRequirements(local_ref< cpp_object_array<com::android::internal::util::Predicate, 1> > const&);
	}; //class TestSuiteBuilder

} //namespace suitebuilder
} //namespace test
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_SUITEBUILDER_TESTSUITEBUILDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_SUITEBUILDER_TESTSUITEBUILDER_HPP_IMPL
#define J2CPP_ANDROID_TEST_SUITEBUILDER_TESTSUITEBUILDER_HPP_IMPL

namespace j2cpp {



template <>
local_ref< android::test::suitebuilder::TestSuiteBuilder_::FailedToCreateTests > create< android::test::suitebuilder::TestSuiteBuilder_::FailedToCreateTests>(local_ref< java::lang::Exception > const &a0)
{
	return local_ref< android::test::suitebuilder::TestSuiteBuilder_::FailedToCreateTests >(
		environment::get().get_jenv()->NewObject(
			get_class<android::test::suitebuilder::TestSuiteBuilder_::FailedToCreateTests::J2CPP_CLASS_NAME>(),
			get_method_id<android::test::suitebuilder::TestSuiteBuilder_::FailedToCreateTests::J2CPP_CLASS_NAME, android::test::suitebuilder::TestSuiteBuilder_::FailedToCreateTests::J2CPP_METHOD_NAME(0), android::test::suitebuilder::TestSuiteBuilder_::FailedToCreateTests::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void android::test::suitebuilder::TestSuiteBuilder_::FailedToCreateTests::testSuiteConstructionFailed()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::test::suitebuilder::TestSuiteBuilder_::FailedToCreateTests,"android/test/suitebuilder/TestSuiteBuilder$FailedToCreateTests")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestSuiteBuilder_::FailedToCreateTests,0,"<init>","(Ljava/lang/Exception;)V")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestSuiteBuilder_::FailedToCreateTests,1,"testSuiteConstructionFailed","()V")


template <>
local_ref< android::test::suitebuilder::TestSuiteBuilder > create< android::test::suitebuilder::TestSuiteBuilder>(local_ref< java::lang::Class > const &a0)
{
	return local_ref< android::test::suitebuilder::TestSuiteBuilder >(
		environment::get().get_jenv()->NewObject(
			get_class<android::test::suitebuilder::TestSuiteBuilder::J2CPP_CLASS_NAME>(),
			get_method_id<android::test::suitebuilder::TestSuiteBuilder::J2CPP_CLASS_NAME, android::test::suitebuilder::TestSuiteBuilder::J2CPP_METHOD_NAME(0), android::test::suitebuilder::TestSuiteBuilder::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::test::suitebuilder::TestSuiteBuilder > create< android::test::suitebuilder::TestSuiteBuilder>(local_ref< java::lang::String > const &a0, local_ref< java::lang::ClassLoader > const &a1)
{
	return local_ref< android::test::suitebuilder::TestSuiteBuilder >(
		environment::get().get_jenv()->NewObject(
			get_class<android::test::suitebuilder::TestSuiteBuilder::J2CPP_CLASS_NAME>(),
			get_method_id<android::test::suitebuilder::TestSuiteBuilder::J2CPP_CLASS_NAME, android::test::suitebuilder::TestSuiteBuilder::J2CPP_METHOD_NAME(1), android::test::suitebuilder::TestSuiteBuilder::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::test::suitebuilder::TestSuiteBuilder > android::test::suitebuilder::TestSuiteBuilder::includePackages(local_ref< cpp_object_array<java::lang::String, 1> > const &a0)
{
	return local_ref< android::test::suitebuilder::TestSuiteBuilder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::test::suitebuilder::TestSuiteBuilder > android::test::suitebuilder::TestSuiteBuilder::excludePackages(local_ref< cpp_object_array<java::lang::String, 1> > const &a0)
{
	return local_ref< android::test::suitebuilder::TestSuiteBuilder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::test::suitebuilder::TestSuiteBuilder > android::test::suitebuilder::TestSuiteBuilder::addRequirements(local_ref< java::util::List > const &a0)
{
	return local_ref< android::test::suitebuilder::TestSuiteBuilder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::test::suitebuilder::TestSuiteBuilder > android::test::suitebuilder::TestSuiteBuilder::includeAllPackagesUnderHere()
{
	return local_ref< android::test::suitebuilder::TestSuiteBuilder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< android::test::suitebuilder::TestSuiteBuilder > android::test::suitebuilder::TestSuiteBuilder::named(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::test::suitebuilder::TestSuiteBuilder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< junit::framework::TestSuite > android::test::suitebuilder::TestSuiteBuilder::build()
{
	return local_ref< junit::framework::TestSuite >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}


local_ref< android::test::suitebuilder::TestSuiteBuilder > android::test::suitebuilder::TestSuiteBuilder::addRequirements(local_ref< cpp_object_array<com::android::internal::util::Predicate, 1> > const &a0)
{
	return local_ref< android::test::suitebuilder::TestSuiteBuilder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::test::suitebuilder::TestSuiteBuilder,"android/test/suitebuilder/TestSuiteBuilder")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestSuiteBuilder,0,"<init>","(Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestSuiteBuilder,1,"<init>","(Ljava/lang/String;Ljava/lang/ClassLoader;)V")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestSuiteBuilder,2,"includePackages","([java.lang.String)Landroid/test/suitebuilder/TestSuiteBuilder;")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestSuiteBuilder,3,"excludePackages","([java.lang.String)Landroid/test/suitebuilder/TestSuiteBuilder;")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestSuiteBuilder,4,"addRequirements","(Ljava/util/List;)Landroid/test/suitebuilder/TestSuiteBuilder;")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestSuiteBuilder,5,"includeAllPackagesUnderHere","()Landroid/test/suitebuilder/TestSuiteBuilder;")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestSuiteBuilder,6,"named","(Ljava/lang/String;)Landroid/test/suitebuilder/TestSuiteBuilder;")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestSuiteBuilder,7,"build","()Ljunit/framework/TestSuite;")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestSuiteBuilder,8,"getSuiteName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::test::suitebuilder::TestSuiteBuilder,9,"addRequirements","([com.android.internal.util.Predicate)Landroid/test/suitebuilder/TestSuiteBuilder;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_SUITEBUILDER_TESTSUITEBUILDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
