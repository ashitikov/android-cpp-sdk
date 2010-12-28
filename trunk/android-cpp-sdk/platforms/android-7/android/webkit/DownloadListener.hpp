/*================================================================================
  code generated by: java2cpp
  class: android.webkit.DownloadListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_DOWNLOADLISTENER_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_DOWNLOADLISTENER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class DownloadListener;
	class DownloadListener
		: public cpp_object<DownloadListener>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit DownloadListener(jobject jobj)
		: cpp_object<DownloadListener>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void onDownloadStart(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, cpp_long const&);
	}; //class DownloadListener

} //namespace webkit
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_DOWNLOADLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_DOWNLOADLISTENER_HPP_IMPL
#define J2CPP_ANDROID_WEBKIT_DOWNLOADLISTENER_HPP_IMPL

namespace j2cpp {



android::webkit::DownloadListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

void android::webkit::DownloadListener::onDownloadStart(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3, cpp_long const &a4)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::webkit::DownloadListener,"android/webkit/DownloadListener")
J2CPP_DEFINE_METHOD(android::webkit::DownloadListener,0,"onDownloadStart","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_DOWNLOADLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION