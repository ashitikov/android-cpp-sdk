/*================================================================================
  code generated by: java2cpp
  class: java.security.ProtectionDomain
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PROTECTIONDOMAIN_HPP_DECL
#define J2CPP_JAVA_SECURITY_PROTECTIONDOMAIN_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class ClassLoader; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class CodeSource; } } }
namespace j2cpp { namespace java { namespace security { class Permission; } } }
namespace j2cpp { namespace java { namespace security { class Principal; } } }
namespace j2cpp { namespace java { namespace security { class PermissionCollection; } } }


#include <java/lang/ClassLoader.hpp>
#include <java/lang/String.hpp>
#include <java/security/CodeSource.hpp>
#include <java/security/Permission.hpp>
#include <java/security/PermissionCollection.hpp>
#include <java/security/Principal.hpp>


namespace j2cpp {

namespace java { namespace security {

	class ProtectionDomain;
	class ProtectionDomain
		: public cpp_object<ProtectionDomain>
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

		ProtectionDomain(jobject jobj)
		: cpp_object<ProtectionDomain>(jobj)
		{
		}

		local_ref< java::lang::ClassLoader > getClassLoader();
		local_ref< java::security::CodeSource > getCodeSource();
		local_ref< java::security::PermissionCollection > getPermissions();
		local_ref< cpp_object_array<java::security::Principal, 1> > getPrincipals();
		cpp_boolean implies(local_ref< java::security::Permission > const&);
		local_ref< java::lang::String > toString();
	}; //class ProtectionDomain

} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PROTECTIONDOMAIN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PROTECTIONDOMAIN_HPP_IMPL
#define J2CPP_JAVA_SECURITY_PROTECTIONDOMAIN_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::security::ProtectionDomain > create< java::security::ProtectionDomain>(local_ref< java::security::CodeSource > const &a0, local_ref< java::security::PermissionCollection > const &a1)
{
	return local_ref< java::security::ProtectionDomain >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::ProtectionDomain::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::ProtectionDomain::J2CPP_CLASS_NAME, java::security::ProtectionDomain::J2CPP_METHOD_NAME(0), java::security::ProtectionDomain::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::security::ProtectionDomain > create< java::security::ProtectionDomain>(local_ref< java::security::CodeSource > const &a0, local_ref< java::security::PermissionCollection > const &a1, local_ref< java::lang::ClassLoader > const &a2, local_ref< cpp_object_array<java::security::Principal, 1> > const &a3)
{
	return local_ref< java::security::ProtectionDomain >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::ProtectionDomain::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::ProtectionDomain::J2CPP_CLASS_NAME, java::security::ProtectionDomain::J2CPP_METHOD_NAME(1), java::security::ProtectionDomain::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< java::lang::ClassLoader > java::security::ProtectionDomain::getClassLoader()
{
	return local_ref< java::lang::ClassLoader >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::security::CodeSource > java::security::ProtectionDomain::getCodeSource()
{
	return local_ref< java::security::CodeSource >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::security::PermissionCollection > java::security::ProtectionDomain::getPermissions()
{
	return local_ref< java::security::PermissionCollection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< cpp_object_array<java::security::Principal, 1> > java::security::ProtectionDomain::getPrincipals()
{
	return local_ref< cpp_object_array<java::security::Principal, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_boolean java::security::ProtectionDomain::implies(local_ref< java::security::Permission > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::security::ProtectionDomain::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::ProtectionDomain,"java/security/ProtectionDomain")
J2CPP_DEFINE_METHOD(java::security::ProtectionDomain,0,"<init>","(Ljava/security/CodeSource;Ljava/security/PermissionCollection;)V")
J2CPP_DEFINE_METHOD(java::security::ProtectionDomain,1,"<init>","(Ljava/security/CodeSource;Ljava/security/PermissionCollection;Ljava/lang/ClassLoader;[java.security.Principal)V")
J2CPP_DEFINE_METHOD(java::security::ProtectionDomain,2,"getClassLoader","()Ljava/lang/ClassLoader;")
J2CPP_DEFINE_METHOD(java::security::ProtectionDomain,3,"getCodeSource","()Ljava/security/CodeSource;")
J2CPP_DEFINE_METHOD(java::security::ProtectionDomain,4,"getPermissions","()Ljava/security/PermissionCollection;")
J2CPP_DEFINE_METHOD(java::security::ProtectionDomain,5,"getPrincipals","()[java.security.Principal")
J2CPP_DEFINE_METHOD(java::security::ProtectionDomain,6,"implies","(Ljava/security/Permission;)Z")
J2CPP_DEFINE_METHOD(java::security::ProtectionDomain,7,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PROTECTIONDOMAIN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
