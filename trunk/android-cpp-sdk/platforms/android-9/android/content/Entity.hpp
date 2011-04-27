/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.Entity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_ENTITY_HPP_DECL
#define J2CPP_ANDROID_CONTENT_ENTITY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class ArrayList; } } }
namespace j2cpp { namespace android { namespace content { class ContentValues; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }


#include <android/content/ContentValues.hpp>
#include <android/net/Uri.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>


namespace j2cpp {

namespace android { namespace content {

	class Entity;
	namespace Entity_ {

		class NamedContentValues;
		class NamedContentValues
			: public object<NamedContentValues>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)

			explicit NamedContentValues(jobject jobj)
			: object<NamedContentValues>(jobj)
			, uri(jobj)
			, values(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			NamedContentValues(local_ref< android::net::Uri > const&, local_ref< android::content::ContentValues > const&);

			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::net::Uri > > uri;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::content::ContentValues > > values;
		}; //class NamedContentValues

	} //namespace Entity_

	class Entity
		: public object<Entity>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		typedef Entity_::NamedContentValues NamedContentValues;

		explicit Entity(jobject jobj)
		: object<Entity>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Entity(local_ref< android::content::ContentValues > const&);
		local_ref< android::content::ContentValues > getEntityValues();
		local_ref< java::util::ArrayList > getSubValues();
		void addSubValue(local_ref< android::net::Uri >  const&, local_ref< android::content::ContentValues >  const&);
		local_ref< java::lang::String > toString();
	}; //class Entity

} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_ENTITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_ENTITY_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_ENTITY_HPP_IMPL

namespace j2cpp {




android::content::Entity_::NamedContentValues::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::content::Entity_::NamedContentValues::NamedContentValues(local_ref< android::net::Uri > const &a0, local_ref< android::content::ContentValues > const &a1)
: object<android::content::Entity_::NamedContentValues>(
	call_new_object<
		android::content::Entity_::NamedContentValues::J2CPP_CLASS_NAME,
		android::content::Entity_::NamedContentValues::J2CPP_METHOD_NAME(0),
		android::content::Entity_::NamedContentValues::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
, uri(get_jobject())
, values(get_jobject())
{
}




J2CPP_DEFINE_CLASS(android::content::Entity_::NamedContentValues,"android/content/Entity$NamedContentValues")
J2CPP_DEFINE_METHOD(android::content::Entity_::NamedContentValues,0,"<init>","(Landroid/net/Uri;Landroid/content/ContentValues;)V")
J2CPP_DEFINE_FIELD(android::content::Entity_::NamedContentValues,0,"uri","Landroid/net/Uri;")
J2CPP_DEFINE_FIELD(android::content::Entity_::NamedContentValues,1,"values","Landroid/content/ContentValues;")



android::content::Entity::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::content::Entity::Entity(local_ref< android::content::ContentValues > const &a0)
: object<android::content::Entity>(
	call_new_object<
		android::content::Entity::J2CPP_CLASS_NAME,
		android::content::Entity::J2CPP_METHOD_NAME(0),
		android::content::Entity::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


local_ref< android::content::ContentValues > android::content::Entity::getEntityValues()
{
	return call_method<
		android::content::Entity::J2CPP_CLASS_NAME,
		android::content::Entity::J2CPP_METHOD_NAME(1),
		android::content::Entity::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::content::ContentValues >
	>(get_jobject());
}

local_ref< java::util::ArrayList > android::content::Entity::getSubValues()
{
	return call_method<
		android::content::Entity::J2CPP_CLASS_NAME,
		android::content::Entity::J2CPP_METHOD_NAME(2),
		android::content::Entity::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::ArrayList >
	>(get_jobject());
}

void android::content::Entity::addSubValue(local_ref< android::net::Uri > const &a0, local_ref< android::content::ContentValues > const &a1)
{
	return call_method<
		android::content::Entity::J2CPP_CLASS_NAME,
		android::content::Entity::J2CPP_METHOD_NAME(3),
		android::content::Entity::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > android::content::Entity::toString()
{
	return call_method<
		android::content::Entity::J2CPP_CLASS_NAME,
		android::content::Entity::J2CPP_METHOD_NAME(4),
		android::content::Entity::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::content::Entity,"android/content/Entity")
J2CPP_DEFINE_METHOD(android::content::Entity,0,"<init>","(Landroid/content/ContentValues;)V")
J2CPP_DEFINE_METHOD(android::content::Entity,1,"getEntityValues","()Landroid/content/ContentValues;")
J2CPP_DEFINE_METHOD(android::content::Entity,2,"getSubValues","()Ljava/util/ArrayList;")
J2CPP_DEFINE_METHOD(android::content::Entity,3,"addSubValue","(Landroid/net/Uri;Landroid/content/ContentValues;)V")
J2CPP_DEFINE_METHOD(android::content::Entity,4,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_ENTITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION