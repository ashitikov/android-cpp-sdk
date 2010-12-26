/*================================================================================
  code generated by: java2cpp
  class: java.security.cert.TrustAnchor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_TRUSTANCHOR_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_TRUSTANCHOR_HPP_DECL


namespace j2cpp { namespace javax { namespace security { namespace auth { namespace x500 { class X500Principal; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class PublicKey; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class X509Certificate; } } } }


#include <java/lang/String.hpp>
#include <java/security/PublicKey.hpp>
#include <java/security/cert/X509Certificate.hpp>
#include <javax/security/auth/x500/X500Principal.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class TrustAnchor;
	class TrustAnchor
		: public cpp_object<TrustAnchor>
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

		TrustAnchor(jobject jobj)
		: cpp_object<TrustAnchor>(jobj)
		{
		}

		local_ref< cpp_byte_array<1> > getNameConstraints();
		local_ref< java::security::cert::X509Certificate > getTrustedCert();
		local_ref< javax::security::auth::x500::X500Principal > getCA();
		local_ref< java::lang::String > getCAName();
		local_ref< java::security::PublicKey > getCAPublicKey();
		local_ref< java::lang::String > toString();
	}; //class TrustAnchor

} //namespace cert
} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_TRUSTANCHOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_TRUSTANCHOR_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_TRUSTANCHOR_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::security::cert::TrustAnchor > create< java::security::cert::TrustAnchor>(local_ref< java::security::cert::X509Certificate > const &a0, local_ref< cpp_byte_array<1> > const &a1)
{
	return local_ref< java::security::cert::TrustAnchor >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::cert::TrustAnchor::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::cert::TrustAnchor::J2CPP_CLASS_NAME, java::security::cert::TrustAnchor::J2CPP_METHOD_NAME(0), java::security::cert::TrustAnchor::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::security::cert::TrustAnchor > create< java::security::cert::TrustAnchor>(local_ref< java::lang::String > const &a0, local_ref< java::security::PublicKey > const &a1, local_ref< cpp_byte_array<1> > const &a2)
{
	return local_ref< java::security::cert::TrustAnchor >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::cert::TrustAnchor::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::cert::TrustAnchor::J2CPP_CLASS_NAME, java::security::cert::TrustAnchor::J2CPP_METHOD_NAME(1), java::security::cert::TrustAnchor::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< java::security::cert::TrustAnchor > create< java::security::cert::TrustAnchor>(local_ref< javax::security::auth::x500::X500Principal > const &a0, local_ref< java::security::PublicKey > const &a1, local_ref< cpp_byte_array<1> > const &a2)
{
	return local_ref< java::security::cert::TrustAnchor >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::cert::TrustAnchor::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::cert::TrustAnchor::J2CPP_CLASS_NAME, java::security::cert::TrustAnchor::J2CPP_METHOD_NAME(2), java::security::cert::TrustAnchor::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< cpp_byte_array<1> > java::security::cert::TrustAnchor::getNameConstraints()
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::security::cert::X509Certificate > java::security::cert::TrustAnchor::getTrustedCert()
{
	return local_ref< java::security::cert::X509Certificate >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< javax::security::auth::x500::X500Principal > java::security::cert::TrustAnchor::getCA()
{
	return local_ref< javax::security::auth::x500::X500Principal >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::String > java::security::cert::TrustAnchor::getCAName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::security::PublicKey > java::security::cert::TrustAnchor::getCAPublicKey()
{
	return local_ref< java::security::PublicKey >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::lang::String > java::security::cert::TrustAnchor::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::cert::TrustAnchor,"java/security/cert/TrustAnchor")
J2CPP_DEFINE_METHOD(java::security::cert::TrustAnchor,0,"<init>","(Ljava/security/cert/X509Certificate;[B)V")
J2CPP_DEFINE_METHOD(java::security::cert::TrustAnchor,1,"<init>","(Ljava/lang/String;Ljava/security/PublicKey;[B)V")
J2CPP_DEFINE_METHOD(java::security::cert::TrustAnchor,2,"<init>","(Ljavax/security/auth/x500/X500Principal;Ljava/security/PublicKey;[B)V")
J2CPP_DEFINE_METHOD(java::security::cert::TrustAnchor,3,"getNameConstraints","()[B")
J2CPP_DEFINE_METHOD(java::security::cert::TrustAnchor,4,"getTrustedCert","()Ljava/security/cert/X509Certificate;")
J2CPP_DEFINE_METHOD(java::security::cert::TrustAnchor,5,"getCA","()Ljavax/security/auth/x500/X500Principal;")
J2CPP_DEFINE_METHOD(java::security::cert::TrustAnchor,6,"getCAName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::cert::TrustAnchor,7,"getCAPublicKey","()Ljava/security/PublicKey;")
J2CPP_DEFINE_METHOD(java::security::cert::TrustAnchor,8,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_TRUSTANCHOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
