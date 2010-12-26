/*================================================================================
  code generated by: java2cpp
  class: android.provider.BaseColumns
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PROVIDER_BASECOLUMNS_HPP_DECL
#define J2CPP_ANDROID_PROVIDER_BASECOLUMNS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace provider {

	class BaseColumns;
	class BaseColumns
		: public cpp_object<BaseColumns>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		BaseColumns(jobject jobj)
		: cpp_object<BaseColumns>(jobj)
		{
		}

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > _ID;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > _COUNT;
	}; //class BaseColumns

} //namespace provider
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_PROVIDER_BASECOLUMNS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PROVIDER_BASECOLUMNS_HPP_IMPL
#define J2CPP_ANDROID_PROVIDER_BASECOLUMNS_HPP_IMPL

namespace j2cpp {


static_field<
	android::provider::BaseColumns::J2CPP_CLASS_NAME,
	android::provider::BaseColumns::J2CPP_FIELD_NAME(0),
	android::provider::BaseColumns::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::provider::BaseColumns::_ID;

static_field<
	android::provider::BaseColumns::J2CPP_CLASS_NAME,
	android::provider::BaseColumns::J2CPP_FIELD_NAME(1),
	android::provider::BaseColumns::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::provider::BaseColumns::_COUNT;


J2CPP_DEFINE_CLASS(android::provider::BaseColumns,"android/provider/BaseColumns")
J2CPP_DEFINE_FIELD(android::provider::BaseColumns,0,"_ID","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::BaseColumns,1,"_COUNT","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_PROVIDER_BASECOLUMNS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
