/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.EntityIterator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_ENTITYITERATOR_HPP_DECL
#define J2CPP_ANDROID_CONTENT_ENTITYITERATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }


#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>


namespace j2cpp {

namespace android { namespace content {

	class EntityIterator;
	class EntityIterator
		: public object<EntityIterator>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit EntityIterator(jobject jobj)
		: object<EntityIterator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::Iterator>() const;


		void reset();
		void close();
	}; //class EntityIterator

} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_ENTITYITERATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_ENTITYITERATOR_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_ENTITYITERATOR_HPP_IMPL

namespace j2cpp {



android::content::EntityIterator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::content::EntityIterator::operator local_ref<java::util::Iterator>() const
{
	return local_ref<java::util::Iterator>(get_jobject());
}

void android::content::EntityIterator::reset()
{
	return call_method<
		android::content::EntityIterator::J2CPP_CLASS_NAME,
		android::content::EntityIterator::J2CPP_METHOD_NAME(0),
		android::content::EntityIterator::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}

void android::content::EntityIterator::close()
{
	return call_method<
		android::content::EntityIterator::J2CPP_CLASS_NAME,
		android::content::EntityIterator::J2CPP_METHOD_NAME(1),
		android::content::EntityIterator::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::content::EntityIterator,"android/content/EntityIterator")
J2CPP_DEFINE_METHOD(android::content::EntityIterator,0,"reset","()V")
J2CPP_DEFINE_METHOD(android::content::EntityIterator,1,"close","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_ENTITYITERATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION