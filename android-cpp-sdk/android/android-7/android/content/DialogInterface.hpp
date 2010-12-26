/*================================================================================
  code generated by: java2cpp
  class: android.content.DialogInterface
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_DIALOGINTERFACE_HPP_DECL
#define J2CPP_ANDROID_CONTENT_DIALOGINTERFACE_HPP_DECL


namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }


#include <android/view/KeyEvent.hpp>


namespace j2cpp {

namespace android { namespace content {

	class DialogInterface;
	namespace DialogInterface_ {

		class OnDismissListener;
		class OnDismissListener
			: public cpp_object<OnDismissListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnDismissListener(jobject jobj)
			: cpp_object<OnDismissListener>(jobj)
			{
			}

			void onDismiss(local_ref< android::content::DialogInterface > const&);
		}; //class OnDismissListener

		class OnMultiChoiceClickListener;
		class OnMultiChoiceClickListener
			: public cpp_object<OnMultiChoiceClickListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnMultiChoiceClickListener(jobject jobj)
			: cpp_object<OnMultiChoiceClickListener>(jobj)
			{
			}

			void onClick(local_ref< android::content::DialogInterface > const&, cpp_int const&, cpp_boolean const&);
		}; //class OnMultiChoiceClickListener

		class OnCancelListener;
		class OnCancelListener
			: public cpp_object<OnCancelListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnCancelListener(jobject jobj)
			: cpp_object<OnCancelListener>(jobj)
			{
			}

			void onCancel(local_ref< android::content::DialogInterface > const&);
		}; //class OnCancelListener

		class OnKeyListener;
		class OnKeyListener
			: public cpp_object<OnKeyListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnKeyListener(jobject jobj)
			: cpp_object<OnKeyListener>(jobj)
			{
			}

			cpp_boolean onKey(local_ref< android::content::DialogInterface > const&, cpp_int const&, local_ref< android::view::KeyEvent > const&);
		}; //class OnKeyListener

		class OnClickListener;
		class OnClickListener
			: public cpp_object<OnClickListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnClickListener(jobject jobj)
			: cpp_object<OnClickListener>(jobj)
			{
			}

			void onClick(local_ref< android::content::DialogInterface > const&, cpp_int const&);
		}; //class OnClickListener

	} //namespace DialogInterface_

	class DialogInterface
		: public cpp_object<DialogInterface>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)

		typedef DialogInterface_::OnDismissListener OnDismissListener;
		typedef DialogInterface_::OnMultiChoiceClickListener OnMultiChoiceClickListener;
		typedef DialogInterface_::OnCancelListener OnCancelListener;
		typedef DialogInterface_::OnKeyListener OnKeyListener;
		typedef DialogInterface_::OnClickListener OnClickListener;

		DialogInterface(jobject jobj)
		: cpp_object<DialogInterface>(jobj)
		{
		}

		void cancel();
		void dismiss();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > BUTTON_POSITIVE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > BUTTON_NEGATIVE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > BUTTON_NEUTRAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > BUTTON1;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > BUTTON2;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > BUTTON3;
	}; //class DialogInterface

} //namespace content
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_DIALOGINTERFACE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_DIALOGINTERFACE_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_DIALOGINTERFACE_HPP_IMPL

namespace j2cpp {



void android::content::DialogInterface_::OnDismissListener::onDismiss(local_ref< android::content::DialogInterface > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::content::DialogInterface_::OnDismissListener,"android/content/DialogInterface$OnDismissListener")
J2CPP_DEFINE_METHOD(android::content::DialogInterface_::OnDismissListener,0,"onDismiss","(Landroid/content/DialogInterface;)V")

void android::content::DialogInterface_::OnMultiChoiceClickListener::onClick(local_ref< android::content::DialogInterface > const &a0, cpp_int const &a1, cpp_boolean const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::content::DialogInterface_::OnMultiChoiceClickListener,"android/content/DialogInterface$OnMultiChoiceClickListener")
J2CPP_DEFINE_METHOD(android::content::DialogInterface_::OnMultiChoiceClickListener,0,"onClick","(Landroid/content/DialogInterface;IZ)V")

void android::content::DialogInterface_::OnCancelListener::onCancel(local_ref< android::content::DialogInterface > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::content::DialogInterface_::OnCancelListener,"android/content/DialogInterface$OnCancelListener")
J2CPP_DEFINE_METHOD(android::content::DialogInterface_::OnCancelListener,0,"onCancel","(Landroid/content/DialogInterface;)V")

cpp_boolean android::content::DialogInterface_::OnKeyListener::onKey(local_ref< android::content::DialogInterface > const &a0, cpp_int const &a1, local_ref< android::view::KeyEvent > const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::content::DialogInterface_::OnKeyListener,"android/content/DialogInterface$OnKeyListener")
J2CPP_DEFINE_METHOD(android::content::DialogInterface_::OnKeyListener,0,"onKey","(Landroid/content/DialogInterface;ILandroid/view/KeyEvent;)Z")

void android::content::DialogInterface_::OnClickListener::onClick(local_ref< android::content::DialogInterface > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::content::DialogInterface_::OnClickListener,"android/content/DialogInterface$OnClickListener")
J2CPP_DEFINE_METHOD(android::content::DialogInterface_::OnClickListener,0,"onClick","(Landroid/content/DialogInterface;I)V")


void android::content::DialogInterface::cancel()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::content::DialogInterface::dismiss()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


static_field<
	android::content::DialogInterface::J2CPP_CLASS_NAME,
	android::content::DialogInterface::J2CPP_FIELD_NAME(0),
	android::content::DialogInterface::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::content::DialogInterface::BUTTON_POSITIVE;

static_field<
	android::content::DialogInterface::J2CPP_CLASS_NAME,
	android::content::DialogInterface::J2CPP_FIELD_NAME(1),
	android::content::DialogInterface::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::content::DialogInterface::BUTTON_NEGATIVE;

static_field<
	android::content::DialogInterface::J2CPP_CLASS_NAME,
	android::content::DialogInterface::J2CPP_FIELD_NAME(2),
	android::content::DialogInterface::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::content::DialogInterface::BUTTON_NEUTRAL;

static_field<
	android::content::DialogInterface::J2CPP_CLASS_NAME,
	android::content::DialogInterface::J2CPP_FIELD_NAME(3),
	android::content::DialogInterface::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::content::DialogInterface::BUTTON1;

static_field<
	android::content::DialogInterface::J2CPP_CLASS_NAME,
	android::content::DialogInterface::J2CPP_FIELD_NAME(4),
	android::content::DialogInterface::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> android::content::DialogInterface::BUTTON2;

static_field<
	android::content::DialogInterface::J2CPP_CLASS_NAME,
	android::content::DialogInterface::J2CPP_FIELD_NAME(5),
	android::content::DialogInterface::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> android::content::DialogInterface::BUTTON3;


J2CPP_DEFINE_CLASS(android::content::DialogInterface,"android/content/DialogInterface")
J2CPP_DEFINE_METHOD(android::content::DialogInterface,0,"cancel","()V")
J2CPP_DEFINE_METHOD(android::content::DialogInterface,1,"dismiss","()V")
J2CPP_DEFINE_FIELD(android::content::DialogInterface,0,"BUTTON_POSITIVE","I")
J2CPP_DEFINE_FIELD(android::content::DialogInterface,1,"BUTTON_NEGATIVE","I")
J2CPP_DEFINE_FIELD(android::content::DialogInterface,2,"BUTTON_NEUTRAL","I")
J2CPP_DEFINE_FIELD(android::content::DialogInterface,3,"BUTTON1","I")
J2CPP_DEFINE_FIELD(android::content::DialogInterface,4,"BUTTON2","I")
J2CPP_DEFINE_FIELD(android::content::DialogInterface,5,"BUTTON3","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_DIALOGINTERFACE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
