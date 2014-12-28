#include <hxcpp.h>

#ifndef INCLUDED_luxe_collision_CollisionData
#include <luxe/collision/CollisionData.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Shape
#include <luxe/collision/shapes/Shape.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{
namespace collision{

Void CollisionData_obj::__construct()
{
HX_STACK_FRAME("luxe.collision.CollisionData","new",0x5b768ada,"luxe.collision.CollisionData.new","luxe/collision/CollisionData.hx",6,0xdbda9d18)
{
	HX_STACK_LINE(9)
	this->overlap = (int)0;
	HX_STACK_LINE(22)
	this->separation = ::phoenix::Vector_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(23)
	this->unitVector = ::phoenix::Vector_obj::__new(null(),null(),null(),null());
}
;
	return null();
}

//CollisionData_obj::~CollisionData_obj() { }

Dynamic CollisionData_obj::__CreateEmpty() { return  new CollisionData_obj; }
hx::ObjectPtr< CollisionData_obj > CollisionData_obj::__new()
{  hx::ObjectPtr< CollisionData_obj > result = new CollisionData_obj();
	result->__construct();
	return result;}

Dynamic CollisionData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollisionData_obj > result = new CollisionData_obj();
	result->__construct();
	return result;}


CollisionData_obj::CollisionData_obj()
{
}

void CollisionData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CollisionData);
	HX_MARK_MEMBER_NAME(overlap,"overlap");
	HX_MARK_MEMBER_NAME(separation,"separation");
	HX_MARK_MEMBER_NAME(shape1,"shape1");
	HX_MARK_MEMBER_NAME(shape2,"shape2");
	HX_MARK_MEMBER_NAME(unitVector,"unitVector");
	HX_MARK_END_CLASS();
}

void CollisionData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(overlap,"overlap");
	HX_VISIT_MEMBER_NAME(separation,"separation");
	HX_VISIT_MEMBER_NAME(shape1,"shape1");
	HX_VISIT_MEMBER_NAME(shape2,"shape2");
	HX_VISIT_MEMBER_NAME(unitVector,"unitVector");
}

Dynamic CollisionData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shape1") ) { return shape1; }
		if (HX_FIELD_EQ(inName,"shape2") ) { return shape2; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"overlap") ) { return overlap; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"separation") ) { return separation; }
		if (HX_FIELD_EQ(inName,"unitVector") ) { return unitVector; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CollisionData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shape1") ) { shape1=inValue.Cast< ::luxe::collision::shapes::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shape2") ) { shape2=inValue.Cast< ::luxe::collision::shapes::Shape >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"overlap") ) { overlap=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"separation") ) { separation=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unitVector") ) { unitVector=inValue.Cast< ::phoenix::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CollisionData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("overlap"));
	outFields->push(HX_CSTRING("separation"));
	outFields->push(HX_CSTRING("shape1"));
	outFields->push(HX_CSTRING("shape2"));
	outFields->push(HX_CSTRING("unitVector"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(CollisionData_obj,overlap),HX_CSTRING("overlap")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(CollisionData_obj,separation),HX_CSTRING("separation")},
	{hx::fsObject /*::luxe::collision::shapes::Shape*/ ,(int)offsetof(CollisionData_obj,shape1),HX_CSTRING("shape1")},
	{hx::fsObject /*::luxe::collision::shapes::Shape*/ ,(int)offsetof(CollisionData_obj,shape2),HX_CSTRING("shape2")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(CollisionData_obj,unitVector),HX_CSTRING("unitVector")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("overlap"),
	HX_CSTRING("separation"),
	HX_CSTRING("shape1"),
	HX_CSTRING("shape2"),
	HX_CSTRING("unitVector"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollisionData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollisionData_obj::__mClass,"__mClass");
};

#endif

Class CollisionData_obj::__mClass;

void CollisionData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.collision.CollisionData"), hx::TCanCast< CollisionData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void CollisionData_obj::__boot()
{
}

} // end namespace luxe
} // end namespace collision
