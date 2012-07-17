/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.drawable.ColorDrawable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_COLORDRAWABLE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_COLORDRAWABLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Resources; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class ColorFilter; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class ConstantState; } } } } }
namespace j2cpp { namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } } }


#include <android/content/res/Resources.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/ColorFilter.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <java/lang/Object.hpp>
#include <org/xmlpull/v1/XmlPullParser.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable {

	class ColorDrawable;
	class ColorDrawable
		: public object<ColorDrawable>
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

		explicit ColorDrawable(jobject jobj)
		: object<ColorDrawable>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::graphics::drawable::Drawable>() const;


		ColorDrawable();
		ColorDrawable(jint);
		jint getChangingConfigurations();
		void draw(local_ref< android::graphics::Canvas >  const&);
		jint getAlpha();
		void setAlpha(jint);
		void setColorFilter(local_ref< android::graphics::ColorFilter >  const&);
		jint getOpacity();
		void inflate(local_ref< android::content::res::Resources >  const&, local_ref< org::xmlpull::v1::XmlPullParser >  const&, local_ref< android::util::AttributeSet >  const&);
		local_ref< android::graphics::drawable::Drawable_::ConstantState > getConstantState();
	}; //class ColorDrawable

} //namespace drawable
} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_COLORDRAWABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_COLORDRAWABLE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_COLORDRAWABLE_HPP_IMPL

namespace j2cpp {



android::graphics::drawable::ColorDrawable::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::graphics::drawable::ColorDrawable::operator local_ref<android::graphics::drawable::Drawable>() const
{
	return local_ref<android::graphics::drawable::Drawable>(get_jobject());
}


android::graphics::drawable::ColorDrawable::ColorDrawable()
: object<android::graphics::drawable::ColorDrawable>(
	call_new_object<
		android::graphics::drawable::ColorDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ColorDrawable::J2CPP_METHOD_NAME(0),
		android::graphics::drawable::ColorDrawable::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



android::graphics::drawable::ColorDrawable::ColorDrawable(jint a0)
: object<android::graphics::drawable::ColorDrawable>(
	call_new_object<
		android::graphics::drawable::ColorDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ColorDrawable::J2CPP_METHOD_NAME(1),
		android::graphics::drawable::ColorDrawable::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


jint android::graphics::drawable::ColorDrawable::getChangingConfigurations()
{
	return call_method<
		android::graphics::drawable::ColorDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ColorDrawable::J2CPP_METHOD_NAME(2),
		android::graphics::drawable::ColorDrawable::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

void android::graphics::drawable::ColorDrawable::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::graphics::drawable::ColorDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ColorDrawable::J2CPP_METHOD_NAME(3),
		android::graphics::drawable::ColorDrawable::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

jint android::graphics::drawable::ColorDrawable::getAlpha()
{
	return call_method<
		android::graphics::drawable::ColorDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ColorDrawable::J2CPP_METHOD_NAME(4),
		android::graphics::drawable::ColorDrawable::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

void android::graphics::drawable::ColorDrawable::setAlpha(jint a0)
{
	return call_method<
		android::graphics::drawable::ColorDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ColorDrawable::J2CPP_METHOD_NAME(5),
		android::graphics::drawable::ColorDrawable::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void android::graphics::drawable::ColorDrawable::setColorFilter(local_ref< android::graphics::ColorFilter > const &a0)
{
	return call_method<
		android::graphics::drawable::ColorDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ColorDrawable::J2CPP_METHOD_NAME(6),
		android::graphics::drawable::ColorDrawable::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

jint android::graphics::drawable::ColorDrawable::getOpacity()
{
	return call_method<
		android::graphics::drawable::ColorDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ColorDrawable::J2CPP_METHOD_NAME(7),
		android::graphics::drawable::ColorDrawable::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject());
}

void android::graphics::drawable::ColorDrawable::inflate(local_ref< android::content::res::Resources > const &a0, local_ref< org::xmlpull::v1::XmlPullParser > const &a1, local_ref< android::util::AttributeSet > const &a2)
{
	return call_method<
		android::graphics::drawable::ColorDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ColorDrawable::J2CPP_METHOD_NAME(8),
		android::graphics::drawable::ColorDrawable::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1, a2);
}

local_ref< android::graphics::drawable::Drawable_::ConstantState > android::graphics::drawable::ColorDrawable::getConstantState()
{
	return call_method<
		android::graphics::drawable::ColorDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ColorDrawable::J2CPP_METHOD_NAME(9),
		android::graphics::drawable::ColorDrawable::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::graphics::drawable::Drawable_::ConstantState >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::ColorDrawable,"android/graphics/drawable/ColorDrawable")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ColorDrawable,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ColorDrawable,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ColorDrawable,2,"getChangingConfigurations","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ColorDrawable,3,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ColorDrawable,4,"getAlpha","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ColorDrawable,5,"setAlpha","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ColorDrawable,6,"setColorFilter","(Landroid/graphics/ColorFilter;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ColorDrawable,7,"getOpacity","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ColorDrawable,8,"inflate","(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ColorDrawable,9,"getConstantState","()Landroid/graphics/drawable/Drawable$ConstantState;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_COLORDRAWABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION