/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.os.Parcelable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_PARCELABLE_HPP_DECL
#define J2CPP_ANDROID_OS_PARCELABLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }


#include <android/os/Parcel.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace os {

	class Parcelable;
	namespace Parcelable_ {

		class Creator;
		class Creator
			: public object<Creator>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			explicit Creator(jobject jobj)
			: object<Creator>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			local_ref< java::lang::Object > createFromParcel(local_ref< android::os::Parcel >  const&);
			local_ref< array< local_ref< java::lang::Object >, 1> > newArray(jint);
		}; //class Creator

	} //namespace Parcelable_

	class Parcelable
		: public object<Parcelable>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		typedef Parcelable_::Creator Creator;

		explicit Parcelable(jobject jobj)
		: object<Parcelable>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > PARCELABLE_WRITE_RETURN_VALUE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > CONTENTS_FILE_DESCRIPTOR;
	}; //class Parcelable

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_PARCELABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_PARCELABLE_HPP_IMPL
#define J2CPP_ANDROID_OS_PARCELABLE_HPP_IMPL

namespace j2cpp {




android::os::Parcelable_::Creator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::Object > android::os::Parcelable_::Creator::createFromParcel(local_ref< android::os::Parcel > const &a0)
{
	return call_method<
		android::os::Parcelable_::Creator::J2CPP_CLASS_NAME,
		android::os::Parcelable_::Creator::J2CPP_METHOD_NAME(0),
		android::os::Parcelable_::Creator::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

local_ref< array< local_ref< java::lang::Object >, 1> > android::os::Parcelable_::Creator::newArray(jint a0)
{
	return call_method<
		android::os::Parcelable_::Creator::J2CPP_CLASS_NAME,
		android::os::Parcelable_::Creator::J2CPP_METHOD_NAME(1),
		android::os::Parcelable_::Creator::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< array< local_ref< java::lang::Object >, 1> >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::os::Parcelable_::Creator,"android/os/Parcelable$Creator")
J2CPP_DEFINE_METHOD(android::os::Parcelable_::Creator,0,"createFromParcel","(Landroid/os/Parcel;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::os::Parcelable_::Creator,1,"newArray","(I)[java.lang.Object")



android::os::Parcelable::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jint android::os::Parcelable::describeContents()
{
	return call_method<
		android::os::Parcelable::J2CPP_CLASS_NAME,
		android::os::Parcelable::J2CPP_METHOD_NAME(0),
		android::os::Parcelable::J2CPP_METHOD_SIGNATURE(0), 
		jint
	>(get_jobject());
}

void android::os::Parcelable::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::os::Parcelable::J2CPP_CLASS_NAME,
		android::os::Parcelable::J2CPP_METHOD_NAME(1),
		android::os::Parcelable::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}


static_field<
	android::os::Parcelable::J2CPP_CLASS_NAME,
	android::os::Parcelable::J2CPP_FIELD_NAME(0),
	android::os::Parcelable::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::os::Parcelable::PARCELABLE_WRITE_RETURN_VALUE;

static_field<
	android::os::Parcelable::J2CPP_CLASS_NAME,
	android::os::Parcelable::J2CPP_FIELD_NAME(1),
	android::os::Parcelable::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::os::Parcelable::CONTENTS_FILE_DESCRIPTOR;


J2CPP_DEFINE_CLASS(android::os::Parcelable,"android/os/Parcelable")
J2CPP_DEFINE_METHOD(android::os::Parcelable,0,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::os::Parcelable,1,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_FIELD(android::os::Parcelable,0,"PARCELABLE_WRITE_RETURN_VALUE","I")
J2CPP_DEFINE_FIELD(android::os::Parcelable,1,"CONTENTS_FILE_DESCRIPTOR","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_PARCELABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION