/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.CopyOnWriteArrayList
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace java { namespace util { class ListIterator; } } }
namespace j2cpp { namespace java { namespace util { class RandomAccess; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Iterable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Iterable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/ListIterator.hpp>
#include <java/util/RandomAccess.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class CopyOnWriteArrayList;
	class CopyOnWriteArrayList
		: public object<CopyOnWriteArrayList>
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
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)

		explicit CopyOnWriteArrayList(jobject jobj)
		: object<CopyOnWriteArrayList>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::util::List>() const;
		operator local_ref<java::util::RandomAccess>() const;
		operator local_ref<java::util::Collection>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Iterable>() const;


		CopyOnWriteArrayList();
		CopyOnWriteArrayList(local_ref< java::util::Collection > const&);
		CopyOnWriteArrayList(local_ref< array< local_ref< java::lang::Object >, 1> > const&);
		jboolean add(local_ref< java::lang::Object >  const&);
		void add(jint, local_ref< java::lang::Object >  const&);
		jboolean addAll(local_ref< java::util::Collection >  const&);
		jboolean addAll(jint, local_ref< java::util::Collection >  const&);
		jint addAllAbsent(local_ref< java::util::Collection >  const&);
		jboolean addIfAbsent(local_ref< java::lang::Object >  const&);
		void clear();
		local_ref< java::lang::Object > clone();
		jboolean contains(local_ref< java::lang::Object >  const&);
		jboolean containsAll(local_ref< java::util::Collection >  const&);
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > get(jint);
		jint hashCode();
		jint indexOf(local_ref< java::lang::Object >  const&, jint);
		jint indexOf(local_ref< java::lang::Object >  const&);
		jboolean isEmpty();
		local_ref< java::util::Iterator > iterator();
		jint lastIndexOf(local_ref< java::lang::Object >  const&, jint);
		jint lastIndexOf(local_ref< java::lang::Object >  const&);
		local_ref< java::util::ListIterator > listIterator();
		local_ref< java::util::ListIterator > listIterator(jint);
		local_ref< java::lang::Object > remove(jint);
		jboolean remove(local_ref< java::lang::Object >  const&);
		jboolean removeAll(local_ref< java::util::Collection >  const&);
		jboolean retainAll(local_ref< java::util::Collection >  const&);
		local_ref< java::lang::Object > set(jint, local_ref< java::lang::Object >  const&);
		jint size();
		local_ref< java::util::List > subList(jint, jint);
		local_ref< array< local_ref< java::lang::Object >, 1> > toArray();
		local_ref< array< local_ref< java::lang::Object >, 1> > toArray(local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		local_ref< java::lang::String > toString();
	}; //class CopyOnWriteArrayList

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST_HPP_IMPL

namespace j2cpp {



java::util::concurrent::CopyOnWriteArrayList::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::util::concurrent::CopyOnWriteArrayList::operator local_ref<java::util::List>() const
{
	return local_ref<java::util::List>(get_jobject());
}

java::util::concurrent::CopyOnWriteArrayList::operator local_ref<java::util::RandomAccess>() const
{
	return local_ref<java::util::RandomAccess>(get_jobject());
}

java::util::concurrent::CopyOnWriteArrayList::operator local_ref<java::util::Collection>() const
{
	return local_ref<java::util::Collection>(get_jobject());
}

java::util::concurrent::CopyOnWriteArrayList::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::util::concurrent::CopyOnWriteArrayList::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::concurrent::CopyOnWriteArrayList::operator local_ref<java::lang::Iterable>() const
{
	return local_ref<java::lang::Iterable>(get_jobject());
}


java::util::concurrent::CopyOnWriteArrayList::CopyOnWriteArrayList()
: object<java::util::concurrent::CopyOnWriteArrayList>(
	call_new_object<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(0),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::util::concurrent::CopyOnWriteArrayList::CopyOnWriteArrayList(local_ref< java::util::Collection > const &a0)
: object<java::util::concurrent::CopyOnWriteArrayList>(
	call_new_object<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(1),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



java::util::concurrent::CopyOnWriteArrayList::CopyOnWriteArrayList(local_ref< array< local_ref< java::lang::Object >, 1> > const &a0)
: object<java::util::concurrent::CopyOnWriteArrayList>(
	call_new_object<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(2),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}


jboolean java::util::concurrent::CopyOnWriteArrayList::add(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(3),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0);
}

void java::util::concurrent::CopyOnWriteArrayList::add(jint a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(4),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

jboolean java::util::concurrent::CopyOnWriteArrayList::addAll(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(5),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::CopyOnWriteArrayList::addAll(jint a0, local_ref< java::util::Collection > const &a1)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(6),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject(), a0, a1);
}

jint java::util::concurrent::CopyOnWriteArrayList::addAllAbsent(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(7),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::CopyOnWriteArrayList::addIfAbsent(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(8),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject(), a0);
}

void java::util::concurrent::CopyOnWriteArrayList::clear()
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(9),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::CopyOnWriteArrayList::clone()
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(10),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

jboolean java::util::concurrent::CopyOnWriteArrayList::contains(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(11),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::CopyOnWriteArrayList::containsAll(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(12),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::CopyOnWriteArrayList::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(13),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::concurrent::CopyOnWriteArrayList::get(jint a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(14),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

jint java::util::concurrent::CopyOnWriteArrayList::hashCode()
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(15),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(15), 
		jint
	>(get_jobject());
}

jint java::util::concurrent::CopyOnWriteArrayList::indexOf(local_ref< java::lang::Object > const &a0, jint a1)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(16),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(16), 
		jint
	>(get_jobject(), a0, a1);
}

jint java::util::concurrent::CopyOnWriteArrayList::indexOf(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(17),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(17), 
		jint
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::CopyOnWriteArrayList::isEmpty()
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(18),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(18), 
		jboolean
	>(get_jobject());
}

local_ref< java::util::Iterator > java::util::concurrent::CopyOnWriteArrayList::iterator()
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(19),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::util::Iterator >
	>(get_jobject());
}

jint java::util::concurrent::CopyOnWriteArrayList::lastIndexOf(local_ref< java::lang::Object > const &a0, jint a1)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(20),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(20), 
		jint
	>(get_jobject(), a0, a1);
}

jint java::util::concurrent::CopyOnWriteArrayList::lastIndexOf(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(21),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(21), 
		jint
	>(get_jobject(), a0);
}

local_ref< java::util::ListIterator > java::util::concurrent::CopyOnWriteArrayList::listIterator()
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(22),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< java::util::ListIterator >
	>(get_jobject());
}

local_ref< java::util::ListIterator > java::util::concurrent::CopyOnWriteArrayList::listIterator(jint a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(23),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(23), 
		local_ref< java::util::ListIterator >
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::concurrent::CopyOnWriteArrayList::remove(jint a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(24),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::CopyOnWriteArrayList::remove(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(25),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(25), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::CopyOnWriteArrayList::removeAll(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(26),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(26), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::CopyOnWriteArrayList::retainAll(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(27),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(27), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::concurrent::CopyOnWriteArrayList::set(jint a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(28),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(28), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1);
}

jint java::util::concurrent::CopyOnWriteArrayList::size()
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(29),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(29), 
		jint
	>(get_jobject());
}

local_ref< java::util::List > java::util::concurrent::CopyOnWriteArrayList::subList(jint a0, jint a1)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(30),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(30), 
		local_ref< java::util::List >
	>(get_jobject(), a0, a1);
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::util::concurrent::CopyOnWriteArrayList::toArray()
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(31),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(31), 
		local_ref< array< local_ref< java::lang::Object >, 1> >
	>(get_jobject());
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::util::concurrent::CopyOnWriteArrayList::toArray(local_ref< array< local_ref< java::lang::Object >, 1> > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(32),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(32), 
		local_ref< array< local_ref< java::lang::Object >, 1> >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::concurrent::CopyOnWriteArrayList::toString()
{
	return call_method<
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(33),
		java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(33), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::concurrent::CopyOnWriteArrayList,"java/util/concurrent/CopyOnWriteArrayList")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,1,"<init>","(Ljava/util/Collection;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,2,"<init>","([java.lang.Object)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,3,"add","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,4,"add","(ILjava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,5,"addAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,6,"addAll","(ILjava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,7,"addAllAbsent","(Ljava/util/Collection;)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,8,"addIfAbsent","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,9,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,10,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,11,"contains","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,12,"containsAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,13,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,14,"get","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,15,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,16,"indexOf","(Ljava/lang/Object;I)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,17,"indexOf","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,18,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,19,"iterator","()Ljava/util/Iterator;")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,20,"lastIndexOf","(Ljava/lang/Object;I)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,21,"lastIndexOf","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,22,"listIterator","()Ljava/util/ListIterator;")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,23,"listIterator","(I)Ljava/util/ListIterator;")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,24,"remove","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,25,"remove","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,26,"removeAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,27,"retainAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,28,"set","(ILjava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,29,"size","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,30,"subList","(II)Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,31,"toArray","()[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,32,"toArray","([java.lang.Object)[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,33,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION