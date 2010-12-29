/*================================================================================
  code generated by: java2cpp
  class: org.w3c.dom.TypeInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_TYPEINFO_HPP_DECL
#define J2CPP_ORG_W3C_DOM_TYPEINFO_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class TypeInfo;
	class TypeInfo
		: public cpp_object<TypeInfo>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		TypeInfo(jobject jobj)
		: cpp_object<TypeInfo>(jobj)
		{
		}

		local_ref< java::lang::String > getTypeName();
		local_ref< java::lang::String > getTypeNamespace();
		cpp_boolean isDerivedFrom(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, cpp_int const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > DERIVATION_RESTRICTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > DERIVATION_EXTENSION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > DERIVATION_UNION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > DERIVATION_LIST;
	}; //class TypeInfo

} //namespace dom
} //namespace w3c
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_TYPEINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_TYPEINFO_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_TYPEINFO_HPP_IMPL

namespace j2cpp {


local_ref< java::lang::String > org::w3c::dom::TypeInfo::getTypeName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::lang::String > org::w3c::dom::TypeInfo::getTypeNamespace()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_boolean org::w3c::dom::TypeInfo::isDerivedFrom(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


static_field<
	org::w3c::dom::TypeInfo::J2CPP_CLASS_NAME,
	org::w3c::dom::TypeInfo::J2CPP_FIELD_NAME(0),
	org::w3c::dom::TypeInfo::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> org::w3c::dom::TypeInfo::DERIVATION_RESTRICTION;

static_field<
	org::w3c::dom::TypeInfo::J2CPP_CLASS_NAME,
	org::w3c::dom::TypeInfo::J2CPP_FIELD_NAME(1),
	org::w3c::dom::TypeInfo::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> org::w3c::dom::TypeInfo::DERIVATION_EXTENSION;

static_field<
	org::w3c::dom::TypeInfo::J2CPP_CLASS_NAME,
	org::w3c::dom::TypeInfo::J2CPP_FIELD_NAME(2),
	org::w3c::dom::TypeInfo::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> org::w3c::dom::TypeInfo::DERIVATION_UNION;

static_field<
	org::w3c::dom::TypeInfo::J2CPP_CLASS_NAME,
	org::w3c::dom::TypeInfo::J2CPP_FIELD_NAME(3),
	org::w3c::dom::TypeInfo::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> org::w3c::dom::TypeInfo::DERIVATION_LIST;


J2CPP_DEFINE_CLASS(org::w3c::dom::TypeInfo,"org/w3c/dom/TypeInfo")
J2CPP_DEFINE_METHOD(org::w3c::dom::TypeInfo,0,"getTypeName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::TypeInfo,1,"getTypeNamespace","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::TypeInfo,2,"isDerivedFrom","(Ljava/lang/String;Ljava/lang/String;I)Z")
J2CPP_DEFINE_FIELD(org::w3c::dom::TypeInfo,0,"DERIVATION_RESTRICTION","I")
J2CPP_DEFINE_FIELD(org::w3c::dom::TypeInfo,1,"DERIVATION_EXTENSION","I")
J2CPP_DEFINE_FIELD(org::w3c::dom::TypeInfo,2,"DERIVATION_UNION","I")
J2CPP_DEFINE_FIELD(org::w3c::dom::TypeInfo,3,"DERIVATION_LIST","I")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_TYPEINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION