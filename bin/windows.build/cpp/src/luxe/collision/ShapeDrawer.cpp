#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_collision_ShapeDrawer
#include <luxe/collision/ShapeDrawer.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Circle
#include <luxe/collision/shapes/Circle.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Polygon
#include <luxe/collision/shapes/Polygon.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Shape
#include <luxe/collision/shapes/Shape.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{
namespace collision{

Void ShapeDrawer_obj::__construct()
{
HX_STACK_FRAME("luxe.collision.ShapeDrawer","new",0xca2c2290,"luxe.collision.ShapeDrawer.new","luxe/collision/ShapeDrawer.hx",17,0xa5ce39a2)
{
}
;
	return null();
}

//ShapeDrawer_obj::~ShapeDrawer_obj() { }

Dynamic ShapeDrawer_obj::__CreateEmpty() { return  new ShapeDrawer_obj; }
hx::ObjectPtr< ShapeDrawer_obj > ShapeDrawer_obj::__new()
{  hx::ObjectPtr< ShapeDrawer_obj > result = new ShapeDrawer_obj();
	result->__construct();
	return result;}

Dynamic ShapeDrawer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShapeDrawer_obj > result = new ShapeDrawer_obj();
	result->__construct();
	return result;}

Void ShapeDrawer_obj::drawLine( ::phoenix::Vector p0,::phoenix::Vector p1,::phoenix::Color color,Dynamic __o_immediate){
Dynamic immediate = __o_immediate.Default(false);
	HX_STACK_FRAME("luxe.collision.ShapeDrawer","drawLine",0x57fc81e8,"luxe.collision.ShapeDrawer.drawLine","luxe/collision/ShapeDrawer.hx",22,0xa5ce39a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p0,"p0")
	HX_STACK_ARG(p1,"p1")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(immediate,"immediate")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ShapeDrawer_obj,drawLine,(void))

Void ShapeDrawer_obj::drawShape( ::luxe::collision::shapes::Shape shape){
{
		HX_STACK_FRAME("luxe.collision.ShapeDrawer","drawShape",0xac102ead,"luxe.collision.ShapeDrawer.drawShape","luxe/collision/ShapeDrawer.hx",29,0xa5ce39a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(29)
		if ((::Std_obj::is(shape,hx::ClassOf< ::luxe::collision::shapes::Polygon >()))){
			HX_STACK_LINE(30)
			this->drawPolygon(hx::TCast< luxe::collision::shapes::Polygon >::cast(shape),null(),null());
			HX_STACK_LINE(31)
			return null();
		}
		else{
			HX_STACK_LINE(33)
			this->drawCircle(hx::TCast< luxe::collision::shapes::Circle >::cast(shape),null(),null());
			HX_STACK_LINE(34)
			return null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShapeDrawer_obj,drawShape,(void))

Void ShapeDrawer_obj::drawPolygon( ::luxe::collision::shapes::Polygon poly,::phoenix::Color color,Dynamic __o_immediate){
Dynamic immediate = __o_immediate.Default(false);
	HX_STACK_FRAME("luxe.collision.ShapeDrawer","drawPolygon",0x9e974906,"luxe.collision.ShapeDrawer.drawPolygon","luxe/collision/ShapeDrawer.hx",40,0xa5ce39a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(poly,"poly")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(immediate,"immediate")
{
		HX_STACK_LINE(42)
		Array< ::Dynamic > v = poly->get_transformedVertices()->copy();		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(44)
		this->drawVertList(v,color,immediate);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ShapeDrawer_obj,drawPolygon,(void))

Void ShapeDrawer_obj::drawVector( ::phoenix::Vector v,::phoenix::Vector start,::phoenix::Color color,Dynamic __o_immediate){
Dynamic immediate = __o_immediate.Default(false);
	HX_STACK_FRAME("luxe.collision.ShapeDrawer","drawVector",0x5c4c7fb7,"luxe.collision.ShapeDrawer.drawVector","luxe/collision/ShapeDrawer.hx",51,0xa5ce39a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(immediate,"immediate")
{
		HX_STACK_LINE(51)
		this->drawLine(start,v,color,immediate);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ShapeDrawer_obj,drawVector,(void))

Void ShapeDrawer_obj::drawCircle( ::luxe::collision::shapes::Circle circle,::phoenix::Color color,Dynamic __o_immediate){
Dynamic immediate = __o_immediate.Default(false);
	HX_STACK_FRAME("luxe.collision.ShapeDrawer","drawCircle",0x1afc4104,"luxe.collision.ShapeDrawer.drawCircle","luxe/collision/ShapeDrawer.hx",56,0xa5ce39a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(circle,"circle")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(immediate,"immediate")
{
		HX_STACK_LINE(60)
		Float _smooth = (int)10;		HX_STACK_VAR(_smooth,"_smooth");
		HX_STACK_LINE(61)
		int _steps = ::Std_obj::_int((_smooth * ::Math_obj::sqrt(circle->get_transformedRadius())));		HX_STACK_VAR(_steps,"_steps");
		HX_STACK_LINE(64)
		Float theta = (Float(6.2831852) / Float(_steps));		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(66)
		Float tangential_factor = ::Math_obj::tan(theta);		HX_STACK_VAR(tangential_factor,"tangential_factor");
		HX_STACK_LINE(67)
		Float radial_factor = ::Math_obj::cos(theta);		HX_STACK_VAR(radial_factor,"radial_factor");
		HX_STACK_LINE(69)
		Float x = circle->get_transformedRadius();		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(70)
		Float y = (int)0;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(72)
		Array< ::Dynamic > _verts = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_verts,"_verts");
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(74)
			while(((_g < _steps))){
				HX_STACK_LINE(74)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(76)
				Float __x = (x + circle->get_x());		HX_STACK_VAR(__x,"__x");
				HX_STACK_LINE(77)
				Float __y = (y + circle->get_y());		HX_STACK_VAR(__y,"__y");
				HX_STACK_LINE(79)
				_verts->push(::phoenix::Vector_obj::__new(__x,__y,null(),null()));
				HX_STACK_LINE(81)
				Float tx = -(y);		HX_STACK_VAR(tx,"tx");
				HX_STACK_LINE(82)
				Float ty = x;		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(84)
				hx::AddEq(x,(tx * tangential_factor));
				HX_STACK_LINE(85)
				hx::AddEq(y,(ty * tangential_factor));
				HX_STACK_LINE(87)
				hx::MultEq(x,radial_factor);
				HX_STACK_LINE(88)
				hx::MultEq(y,radial_factor);
			}
		}
		HX_STACK_LINE(93)
		this->drawVertList(_verts,color,immediate);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ShapeDrawer_obj,drawCircle,(void))

Void ShapeDrawer_obj::drawVertList( Array< ::Dynamic > _verts,::phoenix::Color color,Dynamic __o_immediate){
Dynamic immediate = __o_immediate.Default(false);
	HX_STACK_FRAME("luxe.collision.ShapeDrawer","drawVertList",0x50669da3,"luxe.collision.ShapeDrawer.drawVertList","luxe/collision/ShapeDrawer.hx",102,0xa5ce39a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_verts,"_verts")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(immediate,"immediate")
{
		HX_STACK_LINE(104)
		int _count = _verts->length;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(105)
		if (((_count < (int)3))){
			HX_STACK_LINE(106)
			HX_STACK_DO_THROW(HX_CSTRING("cannot draw polygon with < 3 verts as this is a line or a point."));
		}
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			int _g = (int)1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(110)
			while(((_g < _count))){
				HX_STACK_LINE(110)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(111)
				this->drawLine(_verts->__get(i).StaticCast< ::phoenix::Vector >(),_verts->__get((i - (int)1)).StaticCast< ::phoenix::Vector >(),color,immediate);
			}
		}
		HX_STACK_LINE(115)
		this->drawLine(_verts->__get((_count - (int)1)).StaticCast< ::phoenix::Vector >(),_verts->__get((int)0).StaticCast< ::phoenix::Vector >(),color,immediate);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ShapeDrawer_obj,drawVertList,(void))


ShapeDrawer_obj::ShapeDrawer_obj()
{
}

Dynamic ShapeDrawer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"drawLine") ) { return drawLine_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawShape") ) { return drawShape_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawVector") ) { return drawVector_dyn(); }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawPolygon") ) { return drawPolygon_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawVertList") ) { return drawVertList_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShapeDrawer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ShapeDrawer_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("drawLine"),
	HX_CSTRING("drawShape"),
	HX_CSTRING("drawPolygon"),
	HX_CSTRING("drawVector"),
	HX_CSTRING("drawCircle"),
	HX_CSTRING("drawVertList"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShapeDrawer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShapeDrawer_obj::__mClass,"__mClass");
};

#endif

Class ShapeDrawer_obj::__mClass;

void ShapeDrawer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.collision.ShapeDrawer"), hx::TCanCast< ShapeDrawer_obj> ,sStaticFields,sMemberFields,
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

void ShapeDrawer_obj::__boot()
{
}

} // end namespace luxe
} // end namespace collision
