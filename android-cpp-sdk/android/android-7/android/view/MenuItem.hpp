/*================================================================================
  code generated by: java2cpp
  class: android.view.MenuItem
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_MENUITEM_HPP_DECL
#define J2CPP_ANDROID_VIEW_MENUITEM_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace view { namespace ContextMenu_ { class ContextMenuInfo; } } } }
namespace j2cpp { namespace android { namespace view { class SubMenu; } } }
namespace j2cpp { namespace android { namespace view { namespace MenuItem_ { class OnMenuItemClickListener; } } } }


#include <android/content/Intent.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/view/ContextMenu.hpp>
#include <android/view/MenuItem.hpp>
#include <android/view/SubMenu.hpp>
#include <java/lang/CharSequence.hpp>


namespace j2cpp {

namespace android { namespace view {

	class MenuItem;
	namespace MenuItem_ {

		class OnMenuItemClickListener;
		class OnMenuItemClickListener
			: public cpp_object<OnMenuItemClickListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnMenuItemClickListener(jobject jobj)
			: cpp_object<OnMenuItemClickListener>(jobj)
			{
			}

			cpp_boolean onMenuItemClick(local_ref< android::view::MenuItem > const&);
		}; //class OnMenuItemClickListener

	} //namespace MenuItem_

	class MenuItem
		: public cpp_object<MenuItem>
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
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)

		typedef MenuItem_::OnMenuItemClickListener OnMenuItemClickListener;

		MenuItem(jobject jobj)
		: cpp_object<MenuItem>(jobj)
		{
		}

		cpp_int getItemId();
		cpp_int getGroupId();
		cpp_int getOrder();
		local_ref< android::view::MenuItem > setTitle(local_ref< java::lang::CharSequence > const&);
		local_ref< android::view::MenuItem > setTitle(cpp_int const&);
		local_ref< java::lang::CharSequence > getTitle();
		local_ref< android::view::MenuItem > setTitleCondensed(local_ref< java::lang::CharSequence > const&);
		local_ref< java::lang::CharSequence > getTitleCondensed();
		local_ref< android::view::MenuItem > setIcon(local_ref< android::graphics::drawable::Drawable > const&);
		local_ref< android::view::MenuItem > setIcon(cpp_int const&);
		local_ref< android::graphics::drawable::Drawable > getIcon();
		local_ref< android::view::MenuItem > setIntent(local_ref< android::content::Intent > const&);
		local_ref< android::content::Intent > getIntent();
		local_ref< android::view::MenuItem > setShortcut(cpp_char const&, cpp_char const&);
		local_ref< android::view::MenuItem > setNumericShortcut(cpp_char const&);
		cpp_char getNumericShortcut();
		local_ref< android::view::MenuItem > setAlphabeticShortcut(cpp_char const&);
		cpp_char getAlphabeticShortcut();
		local_ref< android::view::MenuItem > setCheckable(cpp_boolean const&);
		cpp_boolean isCheckable();
		local_ref< android::view::MenuItem > setChecked(cpp_boolean const&);
		cpp_boolean isChecked();
		local_ref< android::view::MenuItem > setVisible(cpp_boolean const&);
		cpp_boolean isVisible();
		local_ref< android::view::MenuItem > setEnabled(cpp_boolean const&);
		cpp_boolean isEnabled();
		cpp_boolean hasSubMenu();
		local_ref< android::view::SubMenu > getSubMenu();
		local_ref< android::view::MenuItem > setOnMenuItemClickListener(local_ref< android::view::MenuItem_::OnMenuItemClickListener > const&);
		local_ref< android::view::ContextMenu_::ContextMenuInfo > getMenuInfo();
	}; //class MenuItem

} //namespace view
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_MENUITEM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_MENUITEM_HPP_IMPL
#define J2CPP_ANDROID_VIEW_MENUITEM_HPP_IMPL

namespace j2cpp {



cpp_boolean android::view::MenuItem_::OnMenuItemClickListener::onMenuItemClick(local_ref< android::view::MenuItem > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::view::MenuItem_::OnMenuItemClickListener,"android/view/MenuItem$OnMenuItemClickListener")
J2CPP_DEFINE_METHOD(android::view::MenuItem_::OnMenuItemClickListener,0,"onMenuItemClick","(Landroid/view/MenuItem;)Z")


cpp_int android::view::MenuItem::getItemId()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_int android::view::MenuItem::getGroupId()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_int android::view::MenuItem::getOrder()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< android::view::MenuItem > android::view::MenuItem::setTitle(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< android::view::MenuItem >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::MenuItem > android::view::MenuItem::setTitle(cpp_int const &a0)
{
	return local_ref< android::view::MenuItem >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > android::view::MenuItem::getTitle()
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< android::view::MenuItem > android::view::MenuItem::setTitleCondensed(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< android::view::MenuItem >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > android::view::MenuItem::getTitleCondensed()
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< android::view::MenuItem > android::view::MenuItem::setIcon(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return local_ref< android::view::MenuItem >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::MenuItem > android::view::MenuItem::setIcon(cpp_int const &a0)
{
	return local_ref< android::view::MenuItem >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::graphics::drawable::Drawable > android::view::MenuItem::getIcon()
{
	return local_ref< android::graphics::drawable::Drawable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< android::view::MenuItem > android::view::MenuItem::setIntent(local_ref< android::content::Intent > const &a0)
{
	return local_ref< android::view::MenuItem >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::content::Intent > android::view::MenuItem::getIntent()
{
	return local_ref< android::content::Intent >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< android::view::MenuItem > android::view::MenuItem::setShortcut(cpp_char const &a0, cpp_char const &a1)
{
	return local_ref< android::view::MenuItem >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::view::MenuItem > android::view::MenuItem::setNumericShortcut(cpp_char const &a0)
{
	return local_ref< android::view::MenuItem >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

cpp_char android::view::MenuItem::getNumericShortcut()
{
	return cpp_char(
		environment::get().get_jenv()->CallCharMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

local_ref< android::view::MenuItem > android::view::MenuItem::setAlphabeticShortcut(cpp_char const &a0)
{
	return local_ref< android::view::MenuItem >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

cpp_char android::view::MenuItem::getAlphabeticShortcut()
{
	return cpp_char(
		environment::get().get_jenv()->CallCharMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

local_ref< android::view::MenuItem > android::view::MenuItem::setCheckable(cpp_boolean const &a0)
{
	return local_ref< android::view::MenuItem >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::view::MenuItem::isCheckable()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

local_ref< android::view::MenuItem > android::view::MenuItem::setChecked(cpp_boolean const &a0)
{
	return local_ref< android::view::MenuItem >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::view::MenuItem::isChecked()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

local_ref< android::view::MenuItem > android::view::MenuItem::setVisible(cpp_boolean const &a0)
{
	return local_ref< android::view::MenuItem >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::view::MenuItem::isVisible()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>()
		)
	);
}

local_ref< android::view::MenuItem > android::view::MenuItem::setEnabled(cpp_boolean const &a0)
{
	return local_ref< android::view::MenuItem >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::view::MenuItem::isEnabled()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>()
		)
	);
}

cpp_boolean android::view::MenuItem::hasSubMenu()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>()
		)
	);
}

local_ref< android::view::SubMenu > android::view::MenuItem::getSubMenu()
{
	return local_ref< android::view::SubMenu >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>()
		)
	);
}

local_ref< android::view::MenuItem > android::view::MenuItem::setOnMenuItemClickListener(local_ref< android::view::MenuItem_::OnMenuItemClickListener > const &a0)
{
	return local_ref< android::view::MenuItem >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::ContextMenu_::ContextMenuInfo > android::view::MenuItem::getMenuInfo()
{
	return local_ref< android::view::ContextMenu_::ContextMenuInfo >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::view::MenuItem,"android/view/MenuItem")
J2CPP_DEFINE_METHOD(android::view::MenuItem,0,"getItemId","()I")
J2CPP_DEFINE_METHOD(android::view::MenuItem,1,"getGroupId","()I")
J2CPP_DEFINE_METHOD(android::view::MenuItem,2,"getOrder","()I")
J2CPP_DEFINE_METHOD(android::view::MenuItem,3,"setTitle","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,4,"setTitle","(I)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,5,"getTitle","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,6,"setTitleCondensed","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,7,"getTitleCondensed","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,8,"setIcon","(Landroid/graphics/drawable/Drawable;)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,9,"setIcon","(I)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,10,"getIcon","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,11,"setIntent","(Landroid/content/Intent;)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,12,"getIntent","()Landroid/content/Intent;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,13,"setShortcut","(CC)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,14,"setNumericShortcut","(C)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,15,"getNumericShortcut","()C")
J2CPP_DEFINE_METHOD(android::view::MenuItem,16,"setAlphabeticShortcut","(C)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,17,"getAlphabeticShortcut","()C")
J2CPP_DEFINE_METHOD(android::view::MenuItem,18,"setCheckable","(Z)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,19,"isCheckable","()Z")
J2CPP_DEFINE_METHOD(android::view::MenuItem,20,"setChecked","(Z)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,21,"isChecked","()Z")
J2CPP_DEFINE_METHOD(android::view::MenuItem,22,"setVisible","(Z)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,23,"isVisible","()Z")
J2CPP_DEFINE_METHOD(android::view::MenuItem,24,"setEnabled","(Z)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,25,"isEnabled","()Z")
J2CPP_DEFINE_METHOD(android::view::MenuItem,26,"hasSubMenu","()Z")
J2CPP_DEFINE_METHOD(android::view::MenuItem,27,"getSubMenu","()Landroid/view/SubMenu;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,28,"setOnMenuItemClickListener","(Landroid/view/MenuItem$OnMenuItemClickListener;)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::MenuItem,29,"getMenuInfo","()Landroid/view/ContextMenu$ContextMenuInfo;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_MENUITEM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
