#include <hxcpp.h>

#ifndef INCLUDED_luxe_collision_shapes_Circle
#include <luxe/collision/shapes/Circle.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Shape
#include <luxe/collision/shapes/Shape.h>
#endif
namespace luxe{
namespace collision{
namespace shapes{

Void Circle_obj::__construct(Float x,Float y,Float radius)
{
HX_STACK_FRAME("luxe.collision.shapes.Circle","new",0xd9f4c42a,"luxe.collision.shapes.Circle.new","luxe/collision/shapes/Circle.hx",15,0x913b75a7)

HX_STACK_ARG(x,"x")

HX_STACK_ARG(y,"y")

HX_STACK_ARG(radius,"radius")
{
	HX_STACK_LINE(17)
	super::__construct(x,y);
	HX_STACK_LINE(18)
	this->_radius = radius;
	HX_STACK_LINE(19)
	this->name = (HX_CSTRING("circle ") + this->_radius);
}
;
	return null();
}

//Circle_obj::~Circle_obj() { }

Dynamic Circle_obj::__CreateEmpty() { return  new Circle_obj; }
hx::ObjectPtr< Circle_obj > Circle_obj::__new(Float x,Float y,Float radius)
{  hx::ObjectPtr< Circle_obj > result = new Circle_obj();
	result->__construct(x,y,radius);
	return result;}

Dynamic Circle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Circle_obj > result = new Circle_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Float Circle_obj::get_radius( ){
	HX_STACK_FRAME("luxe.collision.shapes.Circle","get_radius",0x3fffb991,"luxe.collision.shapes.Circle.get_radius","luxe/collision/shapes/Circle.hx",27,0x913b75a7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	return this->_radius;
}


HX_DEFINE_DYNAMIC_FUNC0(Circle_obj,get_radius,return )

Float Circle_obj::get_transformedRadius( ){
	HX_STACK_FRAME("luxe.collision.shapes.Circle","get_transformedRadius",0x598ed89e,"luxe.collision.shapes.Circle.get_transformedRadius","luxe/collision/shapes/Circle.hx",33,0x913b75a7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	return (this->_radius * this->get_scaleX());
}


HX_DEFINE_DYNAMIC_FUNC0(Circle_obj,get_transformedRadius,return )


Circle_obj::Circle_obj()
{
}

Dynamic Circle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { return get_radius(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_radius") ) { return get_radius_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"transformedRadius") ) { return get_transformedRadius(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_transformedRadius") ) { return get_transformedRadius_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Circle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Circle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("radius"));
	outFields->push(HX_CSTRING("transformedRadius"));
	outFields->push(HX_CSTRING("_radius"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Circle_obj,_radius),HX_CSTRING("_radius")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_radius"),
	HX_CSTRING("get_radius"),
	HX_CSTRING("get_transformedRadius"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

#endif

Class Circle_obj::__mClass;

void Circle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.collision.shapes.Circle"), hx::TCanCast< Circle_obj> ,sStaticFields,sMemberFields,
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

void Circle_obj::__boot()
{
}

} // end namespace luxe
} // end namespace collision
} // end namespace shapes
