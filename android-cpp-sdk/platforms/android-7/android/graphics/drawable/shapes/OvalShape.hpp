/*================================================================================
  code generated by: java2cpp
  class: android.graphics.drawable.shapes.OvalShape
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_OVALSHAPE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_OVALSHAPE_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/Paint.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable { namespace shapes {

	class OvalShape;
	class OvalShape
		: public cpp_object<OvalShape>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		OvalShape(jobject jobj)
		: cpp_object<OvalShape>(jobj)
		{
		}

		void draw(local_ref< android::graphics::Canvas > const&, local_ref< android::graphics::Paint > const&);
	}; //class OvalShape

} //namespace shapes
} //namespace drawable
} //namespace graphics
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_OVALSHAPE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_OVALSHAPE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_OVALSHAPE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::graphics::drawable::shapes::OvalShape > create< android::graphics::drawable::shapes::OvalShape>()
{
	return local_ref< android::graphics::drawable::shapes::OvalShape >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::drawable::shapes::OvalShape::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::drawable::shapes::OvalShape::J2CPP_CLASS_NAME, android::graphics::drawable::shapes::OvalShape::J2CPP_METHOD_NAME(0), android::graphics::drawable::shapes::OvalShape::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::graphics::drawable::shapes::OvalShape::draw(local_ref< android::graphics::Canvas > const &a0, local_ref< android::graphics::Paint > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::shapes::OvalShape,"android/graphics/drawable/shapes/OvalShape")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::OvalShape,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::OvalShape,1,"draw","(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_OVALSHAPE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION