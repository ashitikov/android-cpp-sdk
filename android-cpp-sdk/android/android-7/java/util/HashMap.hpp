/*================================================================================
  code generated by: java2cpp
  class: java.util.HashMap
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_HASHMAP_HPP_DECL
#define J2CPP_JAVA_UTIL_HASHMAP_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }


#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace java { namespace util {

	class HashMap;
	class HashMap
		: public cpp_object<HashMap>
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

		HashMap(jobject jobj)
		: cpp_object<HashMap>(jobj)
		{
		}

		local_ref< java::lang::Object > clone();
		cpp_boolean isEmpty();
		cpp_int size();
		local_ref< java::lang::Object > get(local_ref< java::lang::Object > const&);
		cpp_boolean containsKey(local_ref< java::lang::Object > const&);
		cpp_boolean containsValue(local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > put(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		void putAll(local_ref< java::util::Map > const&);
		local_ref< java::lang::Object > remove(local_ref< java::lang::Object > const&);
		void clear();
		local_ref< java::util::Set > keySet();
		local_ref< java::util::Collection > values();
		local_ref< java::util::Set > entrySet();
	}; //class HashMap

} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_HASHMAP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_HASHMAP_HPP_IMPL
#define J2CPP_JAVA_UTIL_HASHMAP_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::HashMap > create< java::util::HashMap>()
{
	return local_ref< java::util::HashMap >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::HashMap::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::HashMap::J2CPP_CLASS_NAME, java::util::HashMap::J2CPP_METHOD_NAME(0), java::util::HashMap::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::util::HashMap > create< java::util::HashMap>(cpp_int const &a0)
{
	return local_ref< java::util::HashMap >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::HashMap::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::HashMap::J2CPP_CLASS_NAME, java::util::HashMap::J2CPP_METHOD_NAME(1), java::util::HashMap::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::HashMap > create< java::util::HashMap>(cpp_int const &a0, cpp_float const &a1)
{
	return local_ref< java::util::HashMap >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::HashMap::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::HashMap::J2CPP_CLASS_NAME, java::util::HashMap::J2CPP_METHOD_NAME(2), java::util::HashMap::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::util::HashMap > create< java::util::HashMap>(local_ref< java::util::Map > const &a0)
{
	return local_ref< java::util::HashMap >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::HashMap::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::HashMap::J2CPP_CLASS_NAME, java::util::HashMap::J2CPP_METHOD_NAME(3), java::util::HashMap::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::HashMap::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean java::util::HashMap::isEmpty()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int java::util::HashMap::size()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::HashMap::get(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::HashMap::containsKey(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::HashMap::containsValue(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::HashMap::put(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::util::HashMap::putAll(local_ref< java::util::Map > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::HashMap::remove(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::HashMap::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

local_ref< java::util::Set > java::util::HashMap::keySet()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

local_ref< java::util::Collection > java::util::HashMap::values()
{
	return local_ref< java::util::Collection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

local_ref< java::util::Set > java::util::HashMap::entrySet()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::HashMap,"java/util/HashMap")
J2CPP_DEFINE_METHOD(java::util::HashMap,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::HashMap,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::HashMap,2,"<init>","(IF)V")
J2CPP_DEFINE_METHOD(java::util::HashMap,3,"<init>","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::util::HashMap,4,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::HashMap,5,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(java::util::HashMap,6,"size","()I")
J2CPP_DEFINE_METHOD(java::util::HashMap,7,"get","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::HashMap,8,"containsKey","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::HashMap,9,"containsValue","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::HashMap,10,"put","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::HashMap,11,"putAll","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::util::HashMap,12,"remove","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::HashMap,13,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::HashMap,14,"keySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::HashMap,15,"values","()Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::util::HashMap,16,"entrySet","()Ljava/util/Set;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_HASHMAP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
