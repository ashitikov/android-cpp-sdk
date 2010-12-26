/*================================================================================
  code generated by: java2cpp
  class: android.widget.SimpleCursorAdapter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SIMPLECURSORADAPTER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_SIMPLECURSORADAPTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace widget { class ImageView; } } }
namespace j2cpp { namespace android { namespace widget { class TextView; } } }
namespace j2cpp { namespace android { namespace widget { namespace SimpleCursorAdapter_ { class CursorToStringConverter; } } } }
namespace j2cpp { namespace android { namespace widget { namespace SimpleCursorAdapter_ { class ViewBinder; } } } }


#include <android/content/Context.hpp>
#include <android/database/Cursor.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/widget/ImageView.hpp>
#include <android/widget/SimpleCursorAdapter.hpp>
#include <android/widget/TextView.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class SimpleCursorAdapter;
	namespace SimpleCursorAdapter_ {

		class CursorToStringConverter;
		class CursorToStringConverter
			: public cpp_object<CursorToStringConverter>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			CursorToStringConverter(jobject jobj)
			: cpp_object<CursorToStringConverter>(jobj)
			{
			}

			local_ref< java::lang::CharSequence > convertToString(local_ref< android::database::Cursor > const&);
		}; //class CursorToStringConverter

		class ViewBinder;
		class ViewBinder
			: public cpp_object<ViewBinder>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			ViewBinder(jobject jobj)
			: cpp_object<ViewBinder>(jobj)
			{
			}

			cpp_boolean setViewValue(local_ref< android::view::View > const&, local_ref< android::database::Cursor > const&, cpp_int const&);
		}; //class ViewBinder

	} //namespace SimpleCursorAdapter_

	class SimpleCursorAdapter
		: public cpp_object<SimpleCursorAdapter>
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

		typedef SimpleCursorAdapter_::CursorToStringConverter CursorToStringConverter;
		typedef SimpleCursorAdapter_::ViewBinder ViewBinder;

		SimpleCursorAdapter(jobject jobj)
		: cpp_object<SimpleCursorAdapter>(jobj)
		{
		}

		local_ref< android::view::View > newView(local_ref< android::content::Context > const&, local_ref< android::database::Cursor > const&, local_ref< android::view::ViewGroup > const&);
		local_ref< android::view::View > newDropDownView(local_ref< android::content::Context > const&, local_ref< android::database::Cursor > const&, local_ref< android::view::ViewGroup > const&);
		void bindView(local_ref< android::view::View > const&, local_ref< android::content::Context > const&, local_ref< android::database::Cursor > const&);
		local_ref< android::widget::SimpleCursorAdapter_::ViewBinder > getViewBinder();
		void setViewBinder(local_ref< android::widget::SimpleCursorAdapter_::ViewBinder > const&);
		void setViewImage(local_ref< android::widget::ImageView > const&, local_ref< java::lang::String > const&);
		void setViewText(local_ref< android::widget::TextView > const&, local_ref< java::lang::String > const&);
		cpp_int getStringConversionColumn();
		void setStringConversionColumn(cpp_int const&);
		local_ref< android::widget::SimpleCursorAdapter_::CursorToStringConverter > getCursorToStringConverter();
		void setCursorToStringConverter(local_ref< android::widget::SimpleCursorAdapter_::CursorToStringConverter > const&);
		local_ref< java::lang::CharSequence > convertToString(local_ref< android::database::Cursor > const&);
		void changeCursor(local_ref< android::database::Cursor > const&);
		void changeCursorAndColumns(local_ref< android::database::Cursor > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&, local_ref< cpp_int_array<1> > const&);
	}; //class SimpleCursorAdapter

} //namespace widget
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SIMPLECURSORADAPTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SIMPLECURSORADAPTER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_SIMPLECURSORADAPTER_HPP_IMPL

namespace j2cpp {



local_ref< java::lang::CharSequence > android::widget::SimpleCursorAdapter_::CursorToStringConverter::convertToString(local_ref< android::database::Cursor > const &a0)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::SimpleCursorAdapter_::CursorToStringConverter,"android/widget/SimpleCursorAdapter$CursorToStringConverter")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorAdapter_::CursorToStringConverter,0,"convertToString","(Landroid/database/Cursor;)Ljava/lang/CharSequence;")

cpp_boolean android::widget::SimpleCursorAdapter_::ViewBinder::setViewValue(local_ref< android::view::View > const &a0, local_ref< android::database::Cursor > const &a1, cpp_int const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::SimpleCursorAdapter_::ViewBinder,"android/widget/SimpleCursorAdapter$ViewBinder")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorAdapter_::ViewBinder,0,"setViewValue","(Landroid/view/View;Landroid/database/Cursor;I)Z")


template <>
local_ref< android::widget::SimpleCursorAdapter > create< android::widget::SimpleCursorAdapter>(local_ref< android::content::Context > const &a0, cpp_int const &a1, local_ref< android::database::Cursor > const &a2, local_ref< cpp_object_array<java::lang::String, 1> > const &a3, local_ref< cpp_int_array<1> > const &a4)
{
	return local_ref< android::widget::SimpleCursorAdapter >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::SimpleCursorAdapter::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::SimpleCursorAdapter::J2CPP_CLASS_NAME, android::widget::SimpleCursorAdapter::J2CPP_METHOD_NAME(0), android::widget::SimpleCursorAdapter::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

local_ref< android::view::View > android::widget::SimpleCursorAdapter::newView(local_ref< android::content::Context > const &a0, local_ref< android::database::Cursor > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::view::View > android::widget::SimpleCursorAdapter::newDropDownView(local_ref< android::content::Context > const &a0, local_ref< android::database::Cursor > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::widget::SimpleCursorAdapter::bindView(local_ref< android::view::View > const &a0, local_ref< android::content::Context > const &a1, local_ref< android::database::Cursor > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::widget::SimpleCursorAdapter_::ViewBinder > android::widget::SimpleCursorAdapter::getViewBinder()
{
	return local_ref< android::widget::SimpleCursorAdapter_::ViewBinder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::widget::SimpleCursorAdapter::setViewBinder(local_ref< android::widget::SimpleCursorAdapter_::ViewBinder > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::SimpleCursorAdapter::setViewImage(local_ref< android::widget::ImageView > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::widget::SimpleCursorAdapter::setViewText(local_ref< android::widget::TextView > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::widget::SimpleCursorAdapter::getStringConversionColumn()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

void android::widget::SimpleCursorAdapter::setStringConversionColumn(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::widget::SimpleCursorAdapter_::CursorToStringConverter > android::widget::SimpleCursorAdapter::getCursorToStringConverter()
{
	return local_ref< android::widget::SimpleCursorAdapter_::CursorToStringConverter >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

void android::widget::SimpleCursorAdapter::setCursorToStringConverter(local_ref< android::widget::SimpleCursorAdapter_::CursorToStringConverter > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > android::widget::SimpleCursorAdapter::convertToString(local_ref< android::database::Cursor > const &a0)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::SimpleCursorAdapter::changeCursor(local_ref< android::database::Cursor > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::SimpleCursorAdapter::changeCursorAndColumns(local_ref< android::database::Cursor > const &a0, local_ref< cpp_object_array<java::lang::String, 1> > const &a1, local_ref< cpp_int_array<1> > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::SimpleCursorAdapter,"android/widget/SimpleCursorAdapter")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorAdapter,0,"<init>","(Landroid/content/Context;ILandroid/database/Cursor;[java.lang.String[I)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorAdapter,1,"newView","(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorAdapter,2,"newDropDownView","(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorAdapter,3,"bindView","(Landroid/view/View;Landroid/content/Context;Landroid/database/Cursor;)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorAdapter,4,"getViewBinder","()Landroid/widget/SimpleCursorAdapter$ViewBinder;")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorAdapter,5,"setViewBinder","(Landroid/widget/SimpleCursorAdapter$ViewBinder;)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorAdapter,6,"setViewImage","(Landroid/widget/ImageView;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorAdapter,7,"setViewText","(Landroid/widget/TextView;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorAdapter,8,"getStringConversionColumn","()I")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorAdapter,9,"setStringConversionColumn","(I)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorAdapter,10,"getCursorToStringConverter","()Landroid/widget/SimpleCursorAdapter$CursorToStringConverter;")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorAdapter,11,"setCursorToStringConverter","(Landroid/widget/SimpleCursorAdapter$CursorToStringConverter;)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorAdapter,12,"convertToString","(Landroid/database/Cursor;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorAdapter,13,"changeCursor","(Landroid/database/Cursor;)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleCursorAdapter,14,"changeCursorAndColumns","(Landroid/database/Cursor;[java.lang.String[I)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SIMPLECURSORADAPTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
