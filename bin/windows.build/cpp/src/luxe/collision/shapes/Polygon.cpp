#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Polygon
#include <luxe/collision/shapes/Polygon.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Shape
#include <luxe/collision/shapes/Shape.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{
namespace collision{
namespace shapes{

Void Polygon_obj::__construct(Float x,Float y,Array< ::Dynamic > vertices)
{
HX_STACK_FRAME("luxe.collision.shapes.Polygon","new",0xc0f30244,"luxe.collision.shapes.Polygon.new","luxe/collision/shapes/Polygon.hx",10,0x6040276b)

HX_STACK_ARG(x,"x")

HX_STACK_ARG(y,"y")

HX_STACK_ARG(vertices,"vertices")
{
	HX_STACK_LINE(12)
	super::__construct(x,y);
	HX_STACK_LINE(14)
	this->name = (vertices->length + HX_CSTRING("polygon"));
	HX_STACK_LINE(16)
	this->_vertices = vertices;
}
;
	return null();
}

//Polygon_obj::~Polygon_obj() { }

Dynamic Polygon_obj::__CreateEmpty() { return  new Polygon_obj; }
hx::ObjectPtr< Polygon_obj > Polygon_obj::__new(Float x,Float y,Array< ::Dynamic > vertices)
{  hx::ObjectPtr< Polygon_obj > result = new Polygon_obj();
	result->__construct(x,y,vertices);
	return result;}

Dynamic Polygon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Polygon_obj > result = new Polygon_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Polygon_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.collision.shapes.Polygon","destroy",0x0a6e20de,"luxe.collision.shapes.Polygon.destroy","luxe/collision/shapes/Polygon.hx",21,0x6040276b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(23)
		int _count = this->_vertices->length;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(24)
			while(((_g < _count))){
				HX_STACK_LINE(24)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(25)
				this->_vertices[i] = null();
			}
		}
		HX_STACK_LINE(28)
		this->_vertices = null();
		HX_STACK_LINE(29)
		this->super::destroy();
	}
return null();
}


::luxe::collision::shapes::Polygon Polygon_obj::create( Float x,Float y,int sides,hx::Null< Float >  __o_radius){
Float radius = __o_radius.Default(100);
	HX_STACK_FRAME("luxe.collision.shapes.Polygon","create",0xa2f97b98,"luxe.collision.shapes.Polygon.create","luxe/collision/shapes/Polygon.hx",35,0x6040276b)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(sides,"sides")
	HX_STACK_ARG(radius,"radius")
{
		HX_STACK_LINE(37)
		if (((sides < (int)3))){
			HX_STACK_LINE(38)
			HX_STACK_DO_THROW(HX_CSTRING("Polygon - Needs at least 3 sides"));
		}
		HX_STACK_LINE(41)
		Float rotation = (Float((::Math_obj::PI * (int)2)) / Float(sides));		HX_STACK_VAR(rotation,"rotation");
		HX_STACK_LINE(42)
		Float angle;		HX_STACK_VAR(angle,"angle");
		HX_STACK_LINE(43)
		::phoenix::Vector vector;		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(44)
		Array< ::Dynamic > vertices = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(46)
			while(((_g < sides))){
				HX_STACK_LINE(46)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(47)
				angle = ((i * rotation) + (((::Math_obj::PI - rotation)) * 0.5));
				HX_STACK_LINE(48)
				vector = ::phoenix::Vector_obj::__new(null(),null(),null(),null());
				HX_STACK_LINE(49)
				{
					HX_STACK_LINE(49)
					Float _x = (::Math_obj::cos(angle) * radius);		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(49)
					vector->x = _x;
					HX_STACK_LINE(49)
					if ((vector->_construct)){
						HX_STACK_LINE(49)
						vector->x;
					}
					else{
						HX_STACK_LINE(49)
						if (((bool((vector->listen_x != null())) && bool(!(vector->ignore_listeners))))){
							HX_STACK_LINE(49)
							vector->listen_x(_x);
						}
						HX_STACK_LINE(49)
						vector->x;
					}
				}
				HX_STACK_LINE(50)
				{
					HX_STACK_LINE(50)
					Float _y = (::Math_obj::sin(angle) * radius);		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(50)
					vector->y = _y;
					HX_STACK_LINE(50)
					if ((vector->_construct)){
						HX_STACK_LINE(50)
						vector->y;
					}
					else{
						HX_STACK_LINE(50)
						if (((bool((vector->listen_y != null())) && bool(!(vector->ignore_listeners))))){
							HX_STACK_LINE(50)
							vector->listen_y(_y);
						}
						HX_STACK_LINE(50)
						vector->y;
					}
				}
				HX_STACK_LINE(51)
				vertices->push(vector);
			}
		}
		HX_STACK_LINE(54)
		return ::luxe::collision::shapes::Polygon_obj::__new(x,y,vertices);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Polygon_obj,create,return )

::luxe::collision::shapes::Polygon Polygon_obj::rectangle( Float x,Float y,Float width,Float height,hx::Null< bool >  __o_centered){
bool centered = __o_centered.Default(true);
	HX_STACK_FRAME("luxe.collision.shapes.Polygon","rectangle",0x40348913,"luxe.collision.shapes.Polygon.rectangle","luxe/collision/shapes/Polygon.hx",60,0x6040276b)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(centered,"centered")
{
		HX_STACK_LINE(62)
		Array< ::Dynamic > vertices = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(64)
		if ((centered)){
			HX_STACK_LINE(66)
			vertices->push(::phoenix::Vector_obj::__new((Float(-(width)) / Float((int)2)),(Float(-(height)) / Float((int)2)),null(),null()));
			HX_STACK_LINE(67)
			vertices->push(::phoenix::Vector_obj::__new((Float(width) / Float((int)2)),(Float(-(height)) / Float((int)2)),null(),null()));
			HX_STACK_LINE(68)
			vertices->push(::phoenix::Vector_obj::__new((Float(width) / Float((int)2)),(Float(height) / Float((int)2)),null(),null()));
			HX_STACK_LINE(69)
			vertices->push(::phoenix::Vector_obj::__new((Float(-(width)) / Float((int)2)),(Float(height) / Float((int)2)),null(),null()));
		}
		else{
			HX_STACK_LINE(73)
			vertices->push(::phoenix::Vector_obj::__new((int)0,(int)0,null(),null()));
			HX_STACK_LINE(74)
			vertices->push(::phoenix::Vector_obj::__new(width,(int)0,null(),null()));
			HX_STACK_LINE(75)
			vertices->push(::phoenix::Vector_obj::__new(width,height,null(),null()));
			HX_STACK_LINE(76)
			vertices->push(::phoenix::Vector_obj::__new((int)0,height,null(),null()));
		}
		HX_STACK_LINE(80)
		return ::luxe::collision::shapes::Polygon_obj::__new(x,y,vertices);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Polygon_obj,rectangle,return )

::luxe::collision::shapes::Polygon Polygon_obj::square( Float x,Float y,Float width,hx::Null< bool >  __o_centered){
bool centered = __o_centered.Default(true);
	HX_STACK_FRAME("luxe.collision.shapes.Polygon","square",0x7fdc1539,"luxe.collision.shapes.Polygon.square","luxe/collision/shapes/Polygon.hx",87,0x6040276b)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(centered,"centered")
{
		HX_STACK_LINE(87)
		return ::luxe::collision::shapes::Polygon_obj::rectangle(x,y,width,width,centered);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Polygon_obj,square,return )

::luxe::collision::shapes::Polygon Polygon_obj::triangle( Float x,Float y,Float radius){
	HX_STACK_FRAME("luxe.collision.shapes.Polygon","triangle",0xd2d33264,"luxe.collision.shapes.Polygon.triangle","luxe/collision/shapes/Polygon.hx",93,0x6040276b)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_LINE(93)
	return ::luxe::collision::shapes::Polygon_obj::create(x,y,(int)3,radius);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygon_obj,triangle,return )


Polygon_obj::Polygon_obj()
{
}

Dynamic Polygon_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"square") ) { return square_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"triangle") ) { return triangle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rectangle") ) { return rectangle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Polygon_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Polygon_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("rectangle"),
	HX_CSTRING("square"),
	HX_CSTRING("triangle"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
};

#endif

Class Polygon_obj::__mClass;

void Polygon_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.collision.shapes.Polygon"), hx::TCanCast< Polygon_obj> ,sStaticFields,sMemberFields,
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

void Polygon_obj::__boot()
{
}

} // end namespace luxe
} // end namespace collision
} // end namespace shapes
