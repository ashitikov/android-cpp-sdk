/*================================================================================
  code generated by: java2cpp
  class: android.graphics.Movie
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_MOVIE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_MOVIE_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/Paint.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class Movie;
	class Movie
		: public cpp_object<Movie>
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

		Movie(jobject jobj)
		: cpp_object<Movie>(jobj)
		{
		}

		cpp_int width();
		cpp_int height();
		cpp_boolean isOpaque();
		cpp_int duration();
		cpp_boolean setTime(cpp_int const&);
		void draw(local_ref< android::graphics::Canvas > const&, cpp_float const&, cpp_float const&, local_ref< android::graphics::Paint > const&);
		void draw(local_ref< android::graphics::Canvas > const&, cpp_float const&, cpp_float const&);
		static local_ref< android::graphics::Movie > decodeStream(local_ref< java::io::InputStream > const&);
		static local_ref< android::graphics::Movie > decodeByteArray(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		static local_ref< android::graphics::Movie > decodeFile(local_ref< java::lang::String > const&);
	}; //class Movie

} //namespace graphics
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_MOVIE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_MOVIE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_MOVIE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::graphics::Movie > create< android::graphics::Movie>()
{
	return local_ref< android::graphics::Movie >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::Movie::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::Movie::J2CPP_CLASS_NAME, android::graphics::Movie::J2CPP_METHOD_NAME(0), android::graphics::Movie::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_int android::graphics::Movie::width()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_int android::graphics::Movie::height()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_boolean android::graphics::Movie::isOpaque()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int android::graphics::Movie::duration()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean android::graphics::Movie::setTime(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::Movie::draw(local_ref< android::graphics::Canvas > const &a0, cpp_float const &a1, cpp_float const &a2, local_ref< android::graphics::Paint > const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::graphics::Movie::draw(local_ref< android::graphics::Canvas > const &a0, cpp_float const &a1, cpp_float const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::graphics::Movie > android::graphics::Movie::decodeStream(local_ref< java::io::InputStream > const &a0)
{
	return local_ref< android::graphics::Movie >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::graphics::Movie > android::graphics::Movie::decodeByteArray(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< android::graphics::Movie >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::graphics::Movie > android::graphics::Movie::decodeFile(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::graphics::Movie >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), true>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::graphics::Movie,"android/graphics/Movie")
J2CPP_DEFINE_METHOD(android::graphics::Movie,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::Movie,1,"width","()I")
J2CPP_DEFINE_METHOD(android::graphics::Movie,2,"height","()I")
J2CPP_DEFINE_METHOD(android::graphics::Movie,3,"isOpaque","()Z")
J2CPP_DEFINE_METHOD(android::graphics::Movie,4,"duration","()I")
J2CPP_DEFINE_METHOD(android::graphics::Movie,5,"setTime","(I)Z")
J2CPP_DEFINE_METHOD(android::graphics::Movie,6,"draw","(Landroid/graphics/Canvas;FFLandroid/graphics/Paint;)V")
J2CPP_DEFINE_METHOD(android::graphics::Movie,7,"draw","(Landroid/graphics/Canvas;FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Movie,8,"decodeStream","(Ljava/io/InputStream;)Landroid/graphics/Movie;")
J2CPP_DEFINE_METHOD(android::graphics::Movie,9,"decodeByteArray","([BII)Landroid/graphics/Movie;")
J2CPP_DEFINE_METHOD(android::graphics::Movie,10,"decodeFile","(Ljava/lang/String;)Landroid/graphics/Movie;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_MOVIE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
