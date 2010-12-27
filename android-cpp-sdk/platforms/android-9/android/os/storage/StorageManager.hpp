/*================================================================================
  code generated by: java2cpp
  class: android.os.storage.StorageManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_STORAGE_STORAGEMANAGER_HPP_DECL
#define J2CPP_ANDROID_OS_STORAGE_STORAGEMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace os { namespace storage { class OnObbStateChangeListener; } } } }


#include <android/os/storage/OnObbStateChangeListener.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace os { namespace storage {

	class StorageManager;
	class StorageManager
		: public cpp_object<StorageManager>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		StorageManager(jobject jobj)
		: cpp_object<StorageManager>(jobj)
		{
		}

		cpp_boolean mountObb(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< android::os::storage::OnObbStateChangeListener > const&);
		cpp_boolean unmountObb(local_ref< java::lang::String > const&, cpp_boolean const&, local_ref< android::os::storage::OnObbStateChangeListener > const&);
		cpp_boolean isObbMounted(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getMountedObbPath(local_ref< java::lang::String > const&);
	}; //class StorageManager

} //namespace storage
} //namespace os
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_STORAGE_STORAGEMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_STORAGE_STORAGEMANAGER_HPP_IMPL
#define J2CPP_ANDROID_OS_STORAGE_STORAGEMANAGER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::os::storage::StorageManager > create< android::os::storage::StorageManager>()
{
	return local_ref< android::os::storage::StorageManager >(
		environment::get().get_jenv()->NewObject(
			get_class<android::os::storage::StorageManager::J2CPP_CLASS_NAME>(),
			get_method_id<android::os::storage::StorageManager::J2CPP_CLASS_NAME, android::os::storage::StorageManager::J2CPP_METHOD_NAME(0), android::os::storage::StorageManager::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_boolean android::os::storage::StorageManager::mountObb(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< android::os::storage::OnObbStateChangeListener > const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean android::os::storage::StorageManager::unmountObb(local_ref< java::lang::String > const &a0, cpp_boolean const &a1, local_ref< android::os::storage::OnObbStateChangeListener > const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean android::os::storage::StorageManager::isObbMounted(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::os::storage::StorageManager::getMountedObbPath(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::os::storage::StorageManager,"android/os/storage/StorageManager")
J2CPP_DEFINE_METHOD(android::os::storage::StorageManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::os::storage::StorageManager,1,"mountObb","(Ljava/lang/String;Ljava/lang/String;Landroid/os/storage/OnObbStateChangeListener;)Z")
J2CPP_DEFINE_METHOD(android::os::storage::StorageManager,2,"unmountObb","(Ljava/lang/String;ZLandroid/os/storage/OnObbStateChangeListener;)Z")
J2CPP_DEFINE_METHOD(android::os::storage::StorageManager,3,"isObbMounted","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(android::os::storage::StorageManager,4,"getMountedObbPath","(Ljava/lang/String;)Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_STORAGE_STORAGEMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION