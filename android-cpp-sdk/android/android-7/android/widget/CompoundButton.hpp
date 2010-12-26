/*================================================================================
  code generated by: java2cpp
  class: android.widget.CompoundButton
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_COMPOUNDBUTTON_HPP_DECL
#define J2CPP_ANDROID_WIDGET_COMPOUNDBUTTON_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } } }
namespace j2cpp { namespace android { namespace widget { namespace CompoundButton_ { class OnCheckedChangeListener; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }


#include <android/content/Context.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/os/Parcelable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/accessibility/AccessibilityEvent.hpp>
#include <android/widget/CompoundButton.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class CompoundButton;
	namespace CompoundButton_ {

		class OnCheckedChangeListener;
		class OnCheckedChangeListener
			: public cpp_object<OnCheckedChangeListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnCheckedChangeListener(jobject jobj)
			: cpp_object<OnCheckedChangeListener>(jobj)
			{
			}

			void onCheckedChanged(local_ref< android::widget::CompoundButton > const&, cpp_boolean const&);
		}; //class OnCheckedChangeListener

	} //namespace CompoundButton_

	class CompoundButton
		: public cpp_object<CompoundButton>
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
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)

		typedef CompoundButton_::OnCheckedChangeListener OnCheckedChangeListener;

		CompoundButton(jobject jobj)
		: cpp_object<CompoundButton>(jobj)
		{
		}

		void toggle();
		cpp_boolean performClick();
		cpp_boolean isChecked();
		void setChecked(cpp_boolean const&);
		void setOnCheckedChangeListener(local_ref< android::widget::CompoundButton_::OnCheckedChangeListener > const&);
		void setButtonDrawable(cpp_int const&);
		void setButtonDrawable(local_ref< android::graphics::drawable::Drawable > const&);
		cpp_boolean dispatchPopulateAccessibilityEvent(local_ref< android::view::accessibility::AccessibilityEvent > const&);
		local_ref< android::os::Parcelable > onSaveInstanceState();
		void onRestoreInstanceState(local_ref< android::os::Parcelable > const&);
	}; //class CompoundButton

} //namespace widget
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_COMPOUNDBUTTON_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_COMPOUNDBUTTON_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_COMPOUNDBUTTON_HPP_IMPL

namespace j2cpp {



void android::widget::CompoundButton_::OnCheckedChangeListener::onCheckedChanged(local_ref< android::widget::CompoundButton > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::CompoundButton_::OnCheckedChangeListener,"android/widget/CompoundButton$OnCheckedChangeListener")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton_::OnCheckedChangeListener,0,"onCheckedChanged","(Landroid/widget/CompoundButton;Z)V")


template <>
local_ref< android::widget::CompoundButton > create< android::widget::CompoundButton>(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::widget::CompoundButton >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::CompoundButton::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::CompoundButton::J2CPP_CLASS_NAME, android::widget::CompoundButton::J2CPP_METHOD_NAME(0), android::widget::CompoundButton::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::CompoundButton > create< android::widget::CompoundButton>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::widget::CompoundButton >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::CompoundButton::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::CompoundButton::J2CPP_CLASS_NAME, android::widget::CompoundButton::J2CPP_METHOD_NAME(1), android::widget::CompoundButton::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::CompoundButton > create< android::widget::CompoundButton>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, cpp_int const &a2)
{
	return local_ref< android::widget::CompoundButton >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::CompoundButton::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::CompoundButton::J2CPP_CLASS_NAME, android::widget::CompoundButton::J2CPP_METHOD_NAME(2), android::widget::CompoundButton::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::widget::CompoundButton::toggle()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean android::widget::CompoundButton::performClick()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean android::widget::CompoundButton::isChecked()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void android::widget::CompoundButton::setChecked(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::CompoundButton::setOnCheckedChangeListener(local_ref< android::widget::CompoundButton_::OnCheckedChangeListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::CompoundButton::setButtonDrawable(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::CompoundButton::setButtonDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::widget::CompoundButton::dispatchPopulateAccessibilityEvent(local_ref< android::view::accessibility::AccessibilityEvent > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}





local_ref< android::os::Parcelable > android::widget::CompoundButton::onSaveInstanceState()
{
	return local_ref< android::os::Parcelable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

void android::widget::CompoundButton::onRestoreInstanceState(local_ref< android::os::Parcelable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::CompoundButton,"android/widget/CompoundButton")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,3,"toggle","()V")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,4,"performClick","()Z")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,5,"isChecked","()Z")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,6,"setChecked","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,7,"setOnCheckedChangeListener","(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,8,"setButtonDrawable","(I)V")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,9,"setButtonDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,10,"dispatchPopulateAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,11,"onDraw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,12,"onCreateDrawableState","(I)[I")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,13,"drawableStateChanged","()V")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,14,"verifyDrawable","(Landroid/graphics/drawable/Drawable;)Z")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,15,"onSaveInstanceState","()Landroid/os/Parcelable;")
J2CPP_DEFINE_METHOD(android::widget::CompoundButton,16,"onRestoreInstanceState","(Landroid/os/Parcelable;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_COMPOUNDBUTTON_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
