/*================================================================================
  code generated by: java2cpp
  class: org.w3c.dom.Text
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_TEXT_HPP_DECL
#define J2CPP_ORG_W3C_DOM_TEXT_HPP_DECL






namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class Text;
	class Text
		: public cpp_object<Text>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		Text(jobject jobj)
		: cpp_object<Text>(jobj)
		{
		}

		local_ref< org::w3c::dom::Text > splitText(cpp_int const&);
	}; //class Text

} //namespace dom
} //namespace w3c
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_TEXT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_TEXT_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_TEXT_HPP_IMPL

namespace j2cpp {


local_ref< org::w3c::dom::Text > org::w3c::dom::Text::splitText(cpp_int const &a0)
{
	return local_ref< org::w3c::dom::Text >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::w3c::dom::Text,"org/w3c/dom/Text")
J2CPP_DEFINE_METHOD(org::w3c::dom::Text,0,"splitText","(I)Lorg/w3c/dom/Text;")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_TEXT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
