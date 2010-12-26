/*================================================================================
  code generated by: java2cpp
  class: android.view.VelocityTracker
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_VELOCITYTRACKER_HPP_DECL
#define J2CPP_ANDROID_VIEW_VELOCITYTRACKER_HPP_DECL


namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }


#include <android/view/MotionEvent.hpp>


namespace j2cpp {

namespace android { namespace view {

	class VelocityTracker;
	class VelocityTracker
		: public cpp_object<VelocityTracker>
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

		VelocityTracker(jobject jobj)
		: cpp_object<VelocityTracker>(jobj)
		{
		}

		static local_ref< android::view::VelocityTracker > obtain();
		void recycle();
		void clear();
		void addMovement(local_ref< android::view::MotionEvent > const&);
		void computeCurrentVelocity(cpp_int const&);
		void computeCurrentVelocity(cpp_int const&, cpp_float const&);
		cpp_float getXVelocity();
		cpp_float getYVelocity();
	}; //class VelocityTracker

} //namespace view
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_VELOCITYTRACKER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_VELOCITYTRACKER_HPP_IMPL
#define J2CPP_ANDROID_VIEW_VELOCITYTRACKER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::view::VelocityTracker > create< android::view::VelocityTracker>()
{
	return local_ref< android::view::VelocityTracker >(
		environment::get().get_jenv()->NewObject(
			get_class<android::view::VelocityTracker::J2CPP_CLASS_NAME>(),
			get_method_id<android::view::VelocityTracker::J2CPP_CLASS_NAME, android::view::VelocityTracker::J2CPP_METHOD_NAME(0), android::view::VelocityTracker::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< android::view::VelocityTracker > android::view::VelocityTracker::obtain()
{
	return local_ref< android::view::VelocityTracker >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

void android::view::VelocityTracker::recycle()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void android::view::VelocityTracker::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::view::VelocityTracker::addMovement(local_ref< android::view::MotionEvent > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::VelocityTracker::computeCurrentVelocity(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::VelocityTracker::computeCurrentVelocity(cpp_int const &a0, cpp_float const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_float android::view::VelocityTracker::getXVelocity()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_float android::view::VelocityTracker::getYVelocity()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::view::VelocityTracker,"android/view/VelocityTracker")
J2CPP_DEFINE_METHOD(android::view::VelocityTracker,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::VelocityTracker,1,"obtain","()Landroid/view/VelocityTracker;")
J2CPP_DEFINE_METHOD(android::view::VelocityTracker,2,"recycle","()V")
J2CPP_DEFINE_METHOD(android::view::VelocityTracker,3,"clear","()V")
J2CPP_DEFINE_METHOD(android::view::VelocityTracker,4,"addMovement","(Landroid/view/MotionEvent;)V")
J2CPP_DEFINE_METHOD(android::view::VelocityTracker,5,"computeCurrentVelocity","(I)V")
J2CPP_DEFINE_METHOD(android::view::VelocityTracker,6,"computeCurrentVelocity","(IF)V")
J2CPP_DEFINE_METHOD(android::view::VelocityTracker,7,"getXVelocity","()F")
J2CPP_DEFINE_METHOD(android::view::VelocityTracker,8,"getYVelocity","()F")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_VELOCITYTRACKER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
