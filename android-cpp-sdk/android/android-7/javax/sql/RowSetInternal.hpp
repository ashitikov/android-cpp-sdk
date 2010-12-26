/*================================================================================
  code generated by: java2cpp
  class: javax.sql.RowSetInternal
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_ROWSETINTERNAL_HPP_DECL
#define J2CPP_JAVAX_SQL_ROWSETINTERNAL_HPP_DECL


namespace j2cpp { namespace javax { namespace sql { class RowSetMetaData; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace sql { class ResultSet; } } }
namespace j2cpp { namespace java { namespace sql { class Connection; } } }


#include <java/lang/Object.hpp>
#include <java/sql/Connection.hpp>
#include <java/sql/ResultSet.hpp>
#include <javax/sql/RowSetMetaData.hpp>


namespace j2cpp {

namespace javax { namespace sql {

	class RowSetInternal;
	class RowSetInternal
		: public cpp_object<RowSetInternal>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		RowSetInternal(jobject jobj)
		: cpp_object<RowSetInternal>(jobj)
		{
		}

		local_ref< java::sql::Connection > getConnection();
		local_ref< java::sql::ResultSet > getOriginal();
		local_ref< java::sql::ResultSet > getOriginalRow();
		local_ref< cpp_object_array<java::lang::Object, 1> > getParams();
		void setMetaData(local_ref< javax::sql::RowSetMetaData > const&);
	}; //class RowSetInternal

} //namespace sql
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_ROWSETINTERNAL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_ROWSETINTERNAL_HPP_IMPL
#define J2CPP_JAVAX_SQL_ROWSETINTERNAL_HPP_IMPL

namespace j2cpp {


local_ref< java::sql::Connection > javax::sql::RowSetInternal::getConnection()
{
	return local_ref< java::sql::Connection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::sql::ResultSet > javax::sql::RowSetInternal::getOriginal()
{
	return local_ref< java::sql::ResultSet >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::sql::ResultSet > javax::sql::RowSetInternal::getOriginalRow()
{
	return local_ref< java::sql::ResultSet >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::Object, 1> > javax::sql::RowSetInternal::getParams()
{
	return local_ref< cpp_object_array<java::lang::Object, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void javax::sql::RowSetInternal::setMetaData(local_ref< javax::sql::RowSetMetaData > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::sql::RowSetInternal,"javax/sql/RowSetInternal")
J2CPP_DEFINE_METHOD(javax::sql::RowSetInternal,0,"getConnection","()Ljava/sql/Connection;")
J2CPP_DEFINE_METHOD(javax::sql::RowSetInternal,1,"getOriginal","()Ljava/sql/ResultSet;")
J2CPP_DEFINE_METHOD(javax::sql::RowSetInternal,2,"getOriginalRow","()Ljava/sql/ResultSet;")
J2CPP_DEFINE_METHOD(javax::sql::RowSetInternal,3,"getParams","()[java.lang.Object")
J2CPP_DEFINE_METHOD(javax::sql::RowSetInternal,4,"setMetaData","(Ljavax/sql/RowSetMetaData;)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_ROWSETINTERNAL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
