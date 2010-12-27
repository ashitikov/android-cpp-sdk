/*================================================================================
  code generated by: java2cpp
  class: java.nio.MappedByteBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_MAPPEDBYTEBUFFER_HPP_DECL
#define J2CPP_JAVA_NIO_MAPPEDBYTEBUFFER_HPP_DECL






namespace j2cpp {

namespace java { namespace nio {

	class MappedByteBuffer;
	class MappedByteBuffer
		: public cpp_object<MappedByteBuffer>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		MappedByteBuffer(jobject jobj)
		: cpp_object<MappedByteBuffer>(jobj)
		{
		}

		cpp_boolean isLoaded();
		local_ref< java::nio::MappedByteBuffer > load();
		local_ref< java::nio::MappedByteBuffer > force();
	}; //class MappedByteBuffer

} //namespace nio
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_MAPPEDBYTEBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_MAPPEDBYTEBUFFER_HPP_IMPL
#define J2CPP_JAVA_NIO_MAPPEDBYTEBUFFER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::nio::MappedByteBuffer > create< java::nio::MappedByteBuffer>()
{
	return local_ref< java::nio::MappedByteBuffer >(
		environment::get().get_jenv()->NewObject(
			get_class<java::nio::MappedByteBuffer::J2CPP_CLASS_NAME>(),
			get_method_id<java::nio::MappedByteBuffer::J2CPP_CLASS_NAME, java::nio::MappedByteBuffer::J2CPP_METHOD_NAME(0), java::nio::MappedByteBuffer::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_boolean java::nio::MappedByteBuffer::isLoaded()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::nio::MappedByteBuffer > java::nio::MappedByteBuffer::load()
{
	return local_ref< java::nio::MappedByteBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::nio::MappedByteBuffer > java::nio::MappedByteBuffer::force()
{
	return local_ref< java::nio::MappedByteBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::nio::MappedByteBuffer,"java/nio/MappedByteBuffer")
J2CPP_DEFINE_METHOD(java::nio::MappedByteBuffer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::nio::MappedByteBuffer,1,"isLoaded","()Z")
J2CPP_DEFINE_METHOD(java::nio::MappedByteBuffer,2,"load","()Ljava/nio/MappedByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::MappedByteBuffer,3,"force","()Ljava/nio/MappedByteBuffer;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_MAPPEDBYTEBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION