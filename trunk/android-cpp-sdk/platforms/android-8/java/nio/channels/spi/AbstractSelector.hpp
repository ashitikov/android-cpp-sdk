/*================================================================================
  code generated by: java2cpp
  class: java.nio.channels.spi.AbstractSelector
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTOR_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTOR_HPP_DECL


namespace j2cpp { namespace java { namespace nio { namespace channels { namespace spi { class SelectorProvider; } } } } }


#include <java/nio/channels/spi/SelectorProvider.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels { namespace spi {

	class AbstractSelector;
	class AbstractSelector
		: public cpp_object<AbstractSelector>
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

		AbstractSelector(jobject jobj)
		: cpp_object<AbstractSelector>(jobj)
		{
		}

		void close();
		cpp_boolean isOpen();
		local_ref< java::nio::channels::spi::SelectorProvider > provider();
	}; //class AbstractSelector

} //namespace spi
} //namespace channels
} //namespace nio
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTOR_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTOR_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::nio::channels::spi::AbstractSelector > create< java::nio::channels::spi::AbstractSelector>(local_ref< java::nio::channels::spi::SelectorProvider > const &a0)
{
	return local_ref< java::nio::channels::spi::AbstractSelector >(
		environment::get().get_jenv()->NewObject(
			get_class<java::nio::channels::spi::AbstractSelector::J2CPP_CLASS_NAME>(),
			get_method_id<java::nio::channels::spi::AbstractSelector::J2CPP_CLASS_NAME, java::nio::channels::spi::AbstractSelector::J2CPP_METHOD_NAME(0), java::nio::channels::spi::AbstractSelector::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void java::nio::channels::spi::AbstractSelector::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


cpp_boolean java::nio::channels::spi::AbstractSelector::isOpen()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::nio::channels::spi::SelectorProvider > java::nio::channels::spi::AbstractSelector::provider()
{
	return local_ref< java::nio::channels::spi::SelectorProvider >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}







J2CPP_DEFINE_CLASS(java::nio::channels::spi::AbstractSelector,"java/nio/channels/spi/AbstractSelector")
J2CPP_DEFINE_METHOD(java::nio::channels::spi::AbstractSelector,0,"<init>","(Ljava/nio/channels/spi/SelectorProvider;)V")
J2CPP_DEFINE_METHOD(java::nio::channels::spi::AbstractSelector,1,"close","()V")
J2CPP_DEFINE_METHOD(java::nio::channels::spi::AbstractSelector,2,"implCloseSelector","()V")
J2CPP_DEFINE_METHOD(java::nio::channels::spi::AbstractSelector,3,"isOpen","()Z")
J2CPP_DEFINE_METHOD(java::nio::channels::spi::AbstractSelector,4,"provider","()Ljava/nio/channels/spi/SelectorProvider;")
J2CPP_DEFINE_METHOD(java::nio::channels::spi::AbstractSelector,5,"cancelledKeys","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::nio::channels::spi::AbstractSelector,6,"register","(Ljava/nio/channels/spi/AbstractSelectableChannel;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;")
J2CPP_DEFINE_METHOD(java::nio::channels::spi::AbstractSelector,7,"deregister","(Ljava/nio/channels/spi/AbstractSelectionKey;)V")
J2CPP_DEFINE_METHOD(java::nio::channels::spi::AbstractSelector,8,"begin","()V")
J2CPP_DEFINE_METHOD(java::nio::channels::spi::AbstractSelector,9,"end","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_SPI_ABSTRACTSELECTOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION