/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.xml.sax.helpers.AttributeListImpl
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_HELPERS_ATTRIBUTELISTIMPL_HPP_DECL
#define J2CPP_ORG_XML_SAX_HELPERS_ATTRIBUTELISTIMPL_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class AttributeList; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/xml/sax/AttributeList.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax { namespace helpers {

	class AttributeListImpl;
	class AttributeListImpl
		: public object<AttributeListImpl>
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
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)

		explicit AttributeListImpl(jobject jobj)
		: object<AttributeListImpl>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::xml::sax::AttributeList>() const;


		AttributeListImpl();
		AttributeListImpl(local_ref< org::xml::sax::AttributeList > const&);
		void setAttributeList(local_ref< org::xml::sax::AttributeList >  const&);
		void addAttribute(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void removeAttribute(local_ref< java::lang::String >  const&);
		void clear();
		jint getLength();
		local_ref< java::lang::String > getName(jint);
		local_ref< java::lang::String > getType(jint);
		local_ref< java::lang::String > getValue(jint);
		local_ref< java::lang::String > getType(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getValue(local_ref< java::lang::String >  const&);
	}; //class AttributeListImpl

} //namespace helpers
} //namespace sax
} //namespace xml
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_HELPERS_ATTRIBUTELISTIMPL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_HELPERS_ATTRIBUTELISTIMPL_HPP_IMPL
#define J2CPP_ORG_XML_SAX_HELPERS_ATTRIBUTELISTIMPL_HPP_IMPL

namespace j2cpp {



org::xml::sax::helpers::AttributeListImpl::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::xml::sax::helpers::AttributeListImpl::operator local_ref<org::xml::sax::AttributeList>() const
{
	return local_ref<org::xml::sax::AttributeList>(get_jobject());
}


org::xml::sax::helpers::AttributeListImpl::AttributeListImpl()
: object<org::xml::sax::helpers::AttributeListImpl>(
	call_new_object<
		org::xml::sax::helpers::AttributeListImpl::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_NAME(0),
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



org::xml::sax::helpers::AttributeListImpl::AttributeListImpl(local_ref< org::xml::sax::AttributeList > const &a0)
: object<org::xml::sax::helpers::AttributeListImpl>(
	call_new_object<
		org::xml::sax::helpers::AttributeListImpl::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_NAME(1),
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


void org::xml::sax::helpers::AttributeListImpl::setAttributeList(local_ref< org::xml::sax::AttributeList > const &a0)
{
	return call_method<
		org::xml::sax::helpers::AttributeListImpl::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_NAME(2),
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::helpers::AttributeListImpl::addAttribute(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		org::xml::sax::helpers::AttributeListImpl::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_NAME(3),
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::xml::sax::helpers::AttributeListImpl::removeAttribute(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::helpers::AttributeListImpl::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_NAME(4),
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void org::xml::sax::helpers::AttributeListImpl::clear()
{
	return call_method<
		org::xml::sax::helpers::AttributeListImpl::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_NAME(5),
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}

jint org::xml::sax::helpers::AttributeListImpl::getLength()
{
	return call_method<
		org::xml::sax::helpers::AttributeListImpl::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_NAME(6),
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > org::xml::sax::helpers::AttributeListImpl::getName(jint a0)
{
	return call_method<
		org::xml::sax::helpers::AttributeListImpl::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_NAME(7),
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::xml::sax::helpers::AttributeListImpl::getType(jint a0)
{
	return call_method<
		org::xml::sax::helpers::AttributeListImpl::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_NAME(8),
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::xml::sax::helpers::AttributeListImpl::getValue(jint a0)
{
	return call_method<
		org::xml::sax::helpers::AttributeListImpl::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_NAME(9),
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::xml::sax::helpers::AttributeListImpl::getType(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::helpers::AttributeListImpl::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_NAME(10),
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::xml::sax::helpers::AttributeListImpl::getValue(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::helpers::AttributeListImpl::J2CPP_CLASS_NAME,
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_NAME(11),
		org::xml::sax::helpers::AttributeListImpl::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::xml::sax::helpers::AttributeListImpl,"org/xml/sax/helpers/AttributeListImpl")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::AttributeListImpl,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::AttributeListImpl,1,"<init>","(Lorg/xml/sax/AttributeList;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::AttributeListImpl,2,"setAttributeList","(Lorg/xml/sax/AttributeList;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::AttributeListImpl,3,"addAttribute","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::AttributeListImpl,4,"removeAttribute","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::AttributeListImpl,5,"clear","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::AttributeListImpl,6,"getLength","()I")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::AttributeListImpl,7,"getName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::AttributeListImpl,8,"getType","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::AttributeListImpl,9,"getValue","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::AttributeListImpl,10,"getType","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::AttributeListImpl,11,"getValue","(Ljava/lang/String;)Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_HELPERS_ATTRIBUTELISTIMPL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION