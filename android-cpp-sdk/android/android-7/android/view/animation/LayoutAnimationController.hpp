/*================================================================================
  code generated by: java2cpp
  class: android.view.animation.LayoutAnimationController
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_LAYOUTANIMATIONCONTROLLER_HPP_DECL
#define J2CPP_ANDROID_VIEW_ANIMATION_LAYOUTANIMATIONCONTROLLER_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { namespace animation { class Interpolator; } } } }
namespace j2cpp { namespace android { namespace view { namespace animation { class Animation; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/view/animation/Animation.hpp>
#include <android/view/animation/Interpolator.hpp>


namespace j2cpp {

namespace android { namespace view { namespace animation {

	class LayoutAnimationController;
	namespace LayoutAnimationController_ {

		class AnimationParameters;
		class AnimationParameters
			: public cpp_object<AnimationParameters>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)

			AnimationParameters(jobject jobj)
			: cpp_object<AnimationParameters>(jobj)
			, count(jobj)
			, index(jobj)
			{
			}


			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > count;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > index;
		}; //class AnimationParameters

	} //namespace LayoutAnimationController_

	class LayoutAnimationController
		: public cpp_object<LayoutAnimationController>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)

		typedef LayoutAnimationController_::AnimationParameters AnimationParameters;

		LayoutAnimationController(jobject jobj)
		: cpp_object<LayoutAnimationController>(jobj)
		{
		}

		cpp_int getOrder();
		void setOrder(cpp_int const&);
		void setAnimation(local_ref< android::content::Context > const&, cpp_int const&);
		void setAnimation(local_ref< android::view::animation::Animation > const&);
		local_ref< android::view::animation::Animation > getAnimation();
		void setInterpolator(local_ref< android::content::Context > const&, cpp_int const&);
		void setInterpolator(local_ref< android::view::animation::Interpolator > const&);
		local_ref< android::view::animation::Interpolator > getInterpolator();
		cpp_float getDelay();
		void setDelay(cpp_float const&);
		cpp_boolean willOverlap();
		void start();
		local_ref< android::view::animation::Animation > getAnimationForView(local_ref< android::view::View > const&);
		cpp_boolean isDone();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > ORDER_NORMAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > ORDER_REVERSE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > ORDER_RANDOM;
	}; //class LayoutAnimationController

} //namespace animation
} //namespace view
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_LAYOUTANIMATIONCONTROLLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_LAYOUTANIMATIONCONTROLLER_HPP_IMPL
#define J2CPP_ANDROID_VIEW_ANIMATION_LAYOUTANIMATIONCONTROLLER_HPP_IMPL

namespace j2cpp {



template <>
local_ref< android::view::animation::LayoutAnimationController_::AnimationParameters > create< android::view::animation::LayoutAnimationController_::AnimationParameters>()
{
	return local_ref< android::view::animation::LayoutAnimationController_::AnimationParameters >(
		environment::get().get_jenv()->NewObject(
			get_class<android::view::animation::LayoutAnimationController_::AnimationParameters::J2CPP_CLASS_NAME>(),
			get_method_id<android::view::animation::LayoutAnimationController_::AnimationParameters::J2CPP_CLASS_NAME, android::view::animation::LayoutAnimationController_::AnimationParameters::J2CPP_METHOD_NAME(0), android::view::animation::LayoutAnimationController_::AnimationParameters::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}



J2CPP_DEFINE_CLASS(android::view::animation::LayoutAnimationController_::AnimationParameters,"android/view/animation/LayoutAnimationController$AnimationParameters")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController_::AnimationParameters,0,"<init>","()V")
J2CPP_DEFINE_FIELD(android::view::animation::LayoutAnimationController_::AnimationParameters,0,"count","I")
J2CPP_DEFINE_FIELD(android::view::animation::LayoutAnimationController_::AnimationParameters,1,"index","I")


template <>
local_ref< android::view::animation::LayoutAnimationController > create< android::view::animation::LayoutAnimationController>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::view::animation::LayoutAnimationController >(
		environment::get().get_jenv()->NewObject(
			get_class<android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME>(),
			get_method_id<android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME, android::view::animation::LayoutAnimationController::J2CPP_METHOD_NAME(0), android::view::animation::LayoutAnimationController::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::view::animation::LayoutAnimationController > create< android::view::animation::LayoutAnimationController>(local_ref< android::view::animation::Animation > const &a0)
{
	return local_ref< android::view::animation::LayoutAnimationController >(
		environment::get().get_jenv()->NewObject(
			get_class<android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME>(),
			get_method_id<android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME, android::view::animation::LayoutAnimationController::J2CPP_METHOD_NAME(1), android::view::animation::LayoutAnimationController::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::view::animation::LayoutAnimationController > create< android::view::animation::LayoutAnimationController>(local_ref< android::view::animation::Animation > const &a0, cpp_float const &a1)
{
	return local_ref< android::view::animation::LayoutAnimationController >(
		environment::get().get_jenv()->NewObject(
			get_class<android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME>(),
			get_method_id<android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME, android::view::animation::LayoutAnimationController::J2CPP_METHOD_NAME(2), android::view::animation::LayoutAnimationController::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::view::animation::LayoutAnimationController::getOrder()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::view::animation::LayoutAnimationController::setOrder(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::animation::LayoutAnimationController::setAnimation(local_ref< android::content::Context > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::view::animation::LayoutAnimationController::setAnimation(local_ref< android::view::animation::Animation > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::animation::Animation > android::view::animation::LayoutAnimationController::getAnimation()
{
	return local_ref< android::view::animation::Animation >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void android::view::animation::LayoutAnimationController::setInterpolator(local_ref< android::content::Context > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::view::animation::LayoutAnimationController::setInterpolator(local_ref< android::view::animation::Interpolator > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::animation::Interpolator > android::view::animation::LayoutAnimationController::getInterpolator()
{
	return local_ref< android::view::animation::Interpolator >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_float android::view::animation::LayoutAnimationController::getDelay()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void android::view::animation::LayoutAnimationController::setDelay(cpp_float const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::view::animation::LayoutAnimationController::willOverlap()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

void android::view::animation::LayoutAnimationController::start()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

local_ref< android::view::animation::Animation > android::view::animation::LayoutAnimationController::getAnimationForView(local_ref< android::view::View > const &a0)
{
	return local_ref< android::view::animation::Animation >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::view::animation::LayoutAnimationController::isDone()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}




static_field<
	android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
	android::view::animation::LayoutAnimationController::J2CPP_FIELD_NAME(0),
	android::view::animation::LayoutAnimationController::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::view::animation::LayoutAnimationController::ORDER_NORMAL;

static_field<
	android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
	android::view::animation::LayoutAnimationController::J2CPP_FIELD_NAME(1),
	android::view::animation::LayoutAnimationController::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::view::animation::LayoutAnimationController::ORDER_REVERSE;

static_field<
	android::view::animation::LayoutAnimationController::J2CPP_CLASS_NAME,
	android::view::animation::LayoutAnimationController::J2CPP_FIELD_NAME(2),
	android::view::animation::LayoutAnimationController::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::view::animation::LayoutAnimationController::ORDER_RANDOM;


J2CPP_DEFINE_CLASS(android::view::animation::LayoutAnimationController,"android/view/animation/LayoutAnimationController")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,0,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,1,"<init>","(Landroid/view/animation/Animation;)V")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,2,"<init>","(Landroid/view/animation/Animation;F)V")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,3,"getOrder","()I")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,4,"setOrder","(I)V")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,5,"setAnimation","(Landroid/content/Context;I)V")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,6,"setAnimation","(Landroid/view/animation/Animation;)V")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,7,"getAnimation","()Landroid/view/animation/Animation;")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,8,"setInterpolator","(Landroid/content/Context;I)V")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,9,"setInterpolator","(Landroid/view/animation/Interpolator;)V")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,10,"getInterpolator","()Landroid/view/animation/Interpolator;")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,11,"getDelay","()F")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,12,"setDelay","(F)V")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,13,"willOverlap","()Z")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,14,"start","()V")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,15,"getAnimationForView","(Landroid/view/View;)Landroid/view/animation/Animation;")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,16,"isDone","()Z")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,17,"getDelayForView","(Landroid/view/View;)J")
J2CPP_DEFINE_METHOD(android::view::animation::LayoutAnimationController,18,"getTransformedIndex","(Landroid/view/animation/LayoutAnimationController$AnimationParameters;)I")
J2CPP_DEFINE_FIELD(android::view::animation::LayoutAnimationController,0,"ORDER_NORMAL","I")
J2CPP_DEFINE_FIELD(android::view::animation::LayoutAnimationController,1,"ORDER_REVERSE","I")
J2CPP_DEFINE_FIELD(android::view::animation::LayoutAnimationController,2,"ORDER_RANDOM","I")
J2CPP_DEFINE_FIELD(android::view::animation::LayoutAnimationController,3,"mAnimation","Landroid/view/animation/Animation;")
J2CPP_DEFINE_FIELD(android::view::animation::LayoutAnimationController,4,"mRandomizer","Ljava/util/Random;")
J2CPP_DEFINE_FIELD(android::view::animation::LayoutAnimationController,5,"mInterpolator","Landroid/view/animation/Interpolator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_LAYOUTANIMATIONCONTROLLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
