#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Shape
#include <luxe/collision/shapes/Shape.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{
namespace collision{
namespace shapes{

Void Shape_obj::__construct(Float _x,Float _y)
{
HX_STACK_FRAME("luxe.collision.shapes.Shape","new",0xc2131c6b,"luxe.collision.shapes.Shape.new","luxe/collision/shapes/Shape.hx",8,0xfa059164)

HX_STACK_ARG(_x,"_x")

HX_STACK_ARG(_y,"_y")
{
	HX_STACK_LINE(46)
	this->_transformed = false;
	HX_STACK_LINE(44)
	this->_scaleY = (int)1;
	HX_STACK_LINE(43)
	this->_scaleX = (int)1;
	HX_STACK_LINE(39)
	this->_rotation_radians = (int)0;
	HX_STACK_LINE(38)
	this->_rotation = (int)0;
	HX_STACK_LINE(14)
	this->name = HX_CSTRING("shape");
	HX_STACK_LINE(12)
	this->active = true;
	HX_STACK_LINE(59)
	this->tags = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(61)
	this->_position = ::phoenix::Vector_obj::__new(_x,_y,null(),null());
	HX_STACK_LINE(62)
	this->_scale = ::phoenix::Vector_obj::__new((int)1,(int)1,null(),null());
	HX_STACK_LINE(63)
	this->_rotation_quat = ::phoenix::Quaternion_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(64)
	this->_rotation = (int)0;
	HX_STACK_LINE(66)
	this->_scaleX = (int)1;
	HX_STACK_LINE(67)
	this->_scaleY = (int)1;
	HX_STACK_LINE(69)
	this->_transformMatrix = ::phoenix::Matrix_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		::phoenix::Matrix _this = this->_transformMatrix;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			Array< Float > e = _this->elements;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(70)
			e[(int)0] = (int)1;
			HX_STACK_LINE(70)
			e[(int)4] = (int)0;
			HX_STACK_LINE(70)
			e[(int)8] = (int)0;
			HX_STACK_LINE(70)
			e[(int)12] = this->_position->x;
			HX_STACK_LINE(70)
			e[(int)1] = (int)0;
			HX_STACK_LINE(70)
			e[(int)5] = (int)1;
			HX_STACK_LINE(70)
			e[(int)9] = (int)0;
			HX_STACK_LINE(70)
			e[(int)13] = this->_position->y;
			HX_STACK_LINE(70)
			e[(int)2] = (int)0;
			HX_STACK_LINE(70)
			e[(int)6] = (int)0;
			HX_STACK_LINE(70)
			e[(int)10] = (int)1;
			HX_STACK_LINE(70)
			e[(int)14] = (int)0;
			HX_STACK_LINE(70)
			e[(int)3] = (int)0;
			HX_STACK_LINE(70)
			e[(int)7] = (int)0;
			HX_STACK_LINE(70)
			e[(int)11] = (int)0;
			HX_STACK_LINE(70)
			e[(int)15] = (int)1;
			HX_STACK_LINE(70)
			_this;
		}
		HX_STACK_LINE(70)
		_this;
	}
	HX_STACK_LINE(72)
	this->_transformedVertices = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(73)
	this->_vertices = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//Shape_obj::~Shape_obj() { }

Dynamic Shape_obj::__CreateEmpty() { return  new Shape_obj; }
hx::ObjectPtr< Shape_obj > Shape_obj::__new(Float _x,Float _y)
{  hx::ObjectPtr< Shape_obj > result = new Shape_obj();
	result->__construct(_x,_y);
	return result;}

Dynamic Shape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shape_obj > result = new Shape_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Shape_obj::destroy( ){
{
		HX_STACK_FRAME("luxe.collision.shapes.Shape","destroy",0xfb43da85,"luxe.collision.shapes.Shape.destroy","luxe/collision/shapes/Shape.hx",78,0xfa059164)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		this->_position = null();
		HX_STACK_LINE(81)
		this->_scale = null();
		HX_STACK_LINE(82)
		this->_transformMatrix = null();
		HX_STACK_LINE(83)
		this->_transformedVertices = null();
		HX_STACK_LINE(84)
		this->_vertices = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,destroy,(void))

Void Shape_obj::refresh_transform( ){
{
		HX_STACK_FRAME("luxe.collision.shapes.Shape","refresh_transform",0xc9c1ac13,"luxe.collision.shapes.Shape.refresh_transform","luxe/collision/shapes/Shape.hx",91,0xfa059164)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		this->_rotation_quat->setFromEuler(::phoenix::Vector_obj::__new((int)0,(int)0,this->_rotation_radians,null()),null());
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			::phoenix::Matrix _this = this->_transformMatrix;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(95)
			::phoenix::Vector _position = this->_position;		HX_STACK_VAR(_position,"_position");
			HX_STACK_LINE(95)
			::phoenix::Quaternion _quaternion = this->_rotation_quat;		HX_STACK_VAR(_quaternion,"_quaternion");
			HX_STACK_LINE(95)
			::phoenix::Vector _scale = this->_scale;		HX_STACK_VAR(_scale,"_scale");
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
				HX_STACK_LINE(95)
				Float x2 = (_quaternion->x + _quaternion->x);		HX_STACK_VAR(x2,"x2");
				HX_STACK_LINE(95)
				Float y2 = (_quaternion->y + _quaternion->y);		HX_STACK_VAR(y2,"y2");
				HX_STACK_LINE(95)
				Float z2 = (_quaternion->z + _quaternion->z);		HX_STACK_VAR(z2,"z2");
				HX_STACK_LINE(95)
				Float xx = (_quaternion->x * x2);		HX_STACK_VAR(xx,"xx");
				HX_STACK_LINE(95)
				Float xy = (_quaternion->x * y2);		HX_STACK_VAR(xy,"xy");
				HX_STACK_LINE(95)
				Float xz = (_quaternion->x * z2);		HX_STACK_VAR(xz,"xz");
				HX_STACK_LINE(95)
				Float yy = (_quaternion->y * y2);		HX_STACK_VAR(yy,"yy");
				HX_STACK_LINE(95)
				Float yz = (_quaternion->y * z2);		HX_STACK_VAR(yz,"yz");
				HX_STACK_LINE(95)
				Float zz = (_quaternion->z * z2);		HX_STACK_VAR(zz,"zz");
				HX_STACK_LINE(95)
				Float wx = (_quaternion->w * x2);		HX_STACK_VAR(wx,"wx");
				HX_STACK_LINE(95)
				Float wy = (_quaternion->w * y2);		HX_STACK_VAR(wy,"wy");
				HX_STACK_LINE(95)
				Float wz = (_quaternion->w * z2);		HX_STACK_VAR(wz,"wz");
				HX_STACK_LINE(95)
				te[(int)0] = ((int)1 - ((yy + zz)));
				HX_STACK_LINE(95)
				te[(int)4] = (xy - wz);
				HX_STACK_LINE(95)
				te[(int)8] = (xz + wy);
				HX_STACK_LINE(95)
				te[(int)1] = (xy + wz);
				HX_STACK_LINE(95)
				te[(int)5] = ((int)1 - ((xx + zz)));
				HX_STACK_LINE(95)
				te[(int)9] = (yz - wx);
				HX_STACK_LINE(95)
				te[(int)2] = (xz - wy);
				HX_STACK_LINE(95)
				te[(int)6] = (yz + wx);
				HX_STACK_LINE(95)
				te[(int)10] = ((int)1 - ((xx + yy)));
				HX_STACK_LINE(95)
				te[(int)3] = (int)0;
				HX_STACK_LINE(95)
				te[(int)7] = (int)0;
				HX_STACK_LINE(95)
				te[(int)11] = (int)0;
				HX_STACK_LINE(95)
				te[(int)12] = (int)0;
				HX_STACK_LINE(95)
				te[(int)13] = (int)0;
				HX_STACK_LINE(95)
				te[(int)14] = (int)0;
				HX_STACK_LINE(95)
				te[(int)15] = (int)1;
				HX_STACK_LINE(95)
				_this;
			}
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
				HX_STACK_LINE(95)
				Float _x = _scale->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(95)
				Float _y = _scale->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(95)
				Float _z = _scale->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(95)
				hx::MultEq(te[(int)0],_x);
				HX_STACK_LINE(95)
				hx::MultEq(te[(int)4],_y);
				HX_STACK_LINE(95)
				hx::MultEq(te[(int)8],_z);
				HX_STACK_LINE(95)
				hx::MultEq(te[(int)1],_x);
				HX_STACK_LINE(95)
				hx::MultEq(te[(int)5],_y);
				HX_STACK_LINE(95)
				hx::MultEq(te[(int)9],_z);
				HX_STACK_LINE(95)
				hx::MultEq(te[(int)2],_x);
				HX_STACK_LINE(95)
				hx::MultEq(te[(int)6],_y);
				HX_STACK_LINE(95)
				hx::MultEq(te[(int)10],_z);
				HX_STACK_LINE(95)
				hx::MultEq(te[(int)3],_x);
				HX_STACK_LINE(95)
				hx::MultEq(te[(int)7],_y);
				HX_STACK_LINE(95)
				hx::MultEq(te[(int)11],_z);
				HX_STACK_LINE(95)
				_this;
			}
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				Array< Float > te = _this->elements;		HX_STACK_VAR(te,"te");
				HX_STACK_LINE(95)
				te[(int)12] = _position->x;
				HX_STACK_LINE(95)
				te[(int)13] = _position->y;
				HX_STACK_LINE(95)
				te[(int)14] = _position->z;
				HX_STACK_LINE(95)
				_this;
			}
			HX_STACK_LINE(95)
			_this;
		}
		HX_STACK_LINE(96)
		this->_transformed = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,refresh_transform,(void))

::phoenix::Vector Shape_obj::get_position( ){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","get_position",0x6d3eaf47,"luxe.collision.shapes.Shape.get_position","luxe/collision/shapes/Shape.hx",103,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	return this->_position;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_position,return )

::phoenix::Vector Shape_obj::set_position( ::phoenix::Vector v){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","set_position",0x8237d2bb,"luxe.collision.shapes.Shape.set_position","luxe/collision/shapes/Shape.hx",106,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(107)
	this->_position = v;
	HX_STACK_LINE(108)
	this->refresh_transform();
	HX_STACK_LINE(109)
	return this->_position;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_position,return )

Float Shape_obj::get_x( ){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","get_x",0xba934a1a,"luxe.collision.shapes.Shape.get_x","luxe/collision/shapes/Shape.hx",115,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	return this->_position->x;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_x,return )

Float Shape_obj::set_x( Float x){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","set_x",0xa3624026,"luxe.collision.shapes.Shape.set_x","luxe/collision/shapes/Shape.hx",118,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(119)
	{
		HX_STACK_LINE(119)
		::phoenix::Vector _this = this->_position;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(119)
		_this->x = x;
		HX_STACK_LINE(119)
		if ((_this->_construct)){
			HX_STACK_LINE(119)
			_this->x;
		}
		else{
			HX_STACK_LINE(119)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(119)
				_this->listen_x(x);
			}
			HX_STACK_LINE(119)
			_this->x;
		}
	}
	HX_STACK_LINE(120)
	this->refresh_transform();
	HX_STACK_LINE(121)
	return this->_position->x;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_x,return )

Float Shape_obj::get_y( ){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","get_y",0xba934a1b,"luxe.collision.shapes.Shape.get_y","luxe/collision/shapes/Shape.hx",127,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_LINE(127)
	return this->_position->y;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_y,return )

Float Shape_obj::set_y( Float y){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","set_y",0xa3624027,"luxe.collision.shapes.Shape.set_y","luxe/collision/shapes/Shape.hx",130,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(131)
	{
		HX_STACK_LINE(131)
		::phoenix::Vector _this = this->_position;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(131)
		_this->y = y;
		HX_STACK_LINE(131)
		if ((_this->_construct)){
			HX_STACK_LINE(131)
			_this->y;
		}
		else{
			HX_STACK_LINE(131)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(131)
				_this->listen_y(y);
			}
			HX_STACK_LINE(131)
			_this->y;
		}
	}
	HX_STACK_LINE(132)
	this->refresh_transform();
	HX_STACK_LINE(133)
	return this->_position->y;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_y,return )

Float Shape_obj::get_rotation( ){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","get_rotation",0xaaca4bdc,"luxe.collision.shapes.Shape.get_rotation","luxe/collision/shapes/Shape.hx",139,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_LINE(139)
	return this->_rotation;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_rotation,return )

Float Shape_obj::set_rotation( Float v){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","set_rotation",0xbfc36f50,"luxe.collision.shapes.Shape.set_rotation","luxe/collision/shapes/Shape.hx",142,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(144)
	this->_rotation_radians = (v * ((Float(::Math_obj::PI) / Float((int)180))));
	HX_STACK_LINE(146)
	this->refresh_transform();
	HX_STACK_LINE(148)
	return this->_rotation = v;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_rotation,return )

Float Shape_obj::get_scaleX( ){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","get_scaleX",0x1fda75ac,"luxe.collision.shapes.Shape.get_scaleX","luxe/collision/shapes/Shape.hx",155,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_LINE(155)
	return this->_scaleX;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_scaleX,return )

Float Shape_obj::set_scaleX( Float scale){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","set_scaleX",0x23581420,"luxe.collision.shapes.Shape.set_scaleX","luxe/collision/shapes/Shape.hx",158,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scale,"scale")
	HX_STACK_LINE(159)
	this->_scaleX = scale;
	HX_STACK_LINE(160)
	{
		HX_STACK_LINE(160)
		::phoenix::Vector _this = this->_scale;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(160)
		Float _x = this->_scaleX;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(160)
		_this->x = _x;
		HX_STACK_LINE(160)
		if ((_this->_construct)){
			HX_STACK_LINE(160)
			_this->x;
		}
		else{
			HX_STACK_LINE(160)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(160)
				_this->listen_x(_x);
			}
			HX_STACK_LINE(160)
			_this->x;
		}
	}
	HX_STACK_LINE(161)
	this->refresh_transform();
	HX_STACK_LINE(162)
	return this->_scaleX;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_scaleX,return )

Float Shape_obj::get_scaleY( ){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","get_scaleY",0x1fda75ad,"luxe.collision.shapes.Shape.get_scaleY","luxe/collision/shapes/Shape.hx",168,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_LINE(168)
	return this->_scaleY;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_scaleY,return )

Float Shape_obj::set_scaleY( Float scale){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","set_scaleY",0x23581421,"luxe.collision.shapes.Shape.set_scaleY","luxe/collision/shapes/Shape.hx",171,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scale,"scale")
	HX_STACK_LINE(172)
	this->_scaleY = scale;
	HX_STACK_LINE(173)
	{
		HX_STACK_LINE(173)
		::phoenix::Vector _this = this->_scale;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(173)
		Float _y = this->_scaleY;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(173)
		_this->y = _y;
		HX_STACK_LINE(173)
		if ((_this->_construct)){
			HX_STACK_LINE(173)
			_this->y;
		}
		else{
			HX_STACK_LINE(173)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(173)
				_this->listen_y(_y);
			}
			HX_STACK_LINE(173)
			_this->y;
		}
	}
	HX_STACK_LINE(174)
	this->refresh_transform();
	HX_STACK_LINE(175)
	return this->_scaleY;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_scaleY,return )

Array< ::Dynamic > Shape_obj::get_transformedVertices( ){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","get_transformedVertices",0xe1d8d206,"luxe.collision.shapes.Shape.get_transformedVertices","luxe/collision/shapes/Shape.hx",180,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_LINE(182)
	if ((!(this->_transformed))){
		HX_STACK_LINE(183)
		this->_transformedVertices = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(184)
		this->_transformed = true;
		HX_STACK_LINE(186)
		int _count = this->_vertices->length;		HX_STACK_VAR(_count,"_count");
		HX_STACK_LINE(188)
		{
			HX_STACK_LINE(188)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(188)
			while(((_g < _count))){
				HX_STACK_LINE(188)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				struct _Function_4_1{
					inline static ::phoenix::Vector Block( int &i,::luxe::collision::shapes::Shape_obj *__this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/collision/shapes/Shape.hx",189,0xfa059164)
						{
							HX_STACK_LINE(189)
							::phoenix::Vector _this;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(189)
							{
								HX_STACK_LINE(189)
								::phoenix::Vector _this1 = __this->_vertices->__get(i).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(189)
								_this = ::phoenix::Vector_obj::__new(_this1->x,_this1->y,_this1->z,_this1->w);
							}
							HX_STACK_LINE(189)
							Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
							HX_STACK_LINE(189)
							Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
							HX_STACK_LINE(189)
							Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
							HX_STACK_LINE(189)
							Array< Float > e = __this->_transformMatrix->elements;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(189)
							{
								HX_STACK_LINE(189)
								Float _x1 = ((((e->__get((int)0) * _x) + (e->__get((int)4) * _y)) + (e->__get((int)8) * _z)) + e->__get((int)12));		HX_STACK_VAR(_x1,"_x1");
								HX_STACK_LINE(189)
								Float _y1 = ((((e->__get((int)1) * _x) + (e->__get((int)5) * _y)) + (e->__get((int)9) * _z)) + e->__get((int)13));		HX_STACK_VAR(_y1,"_y1");
								HX_STACK_LINE(189)
								Float _z1 = ((((e->__get((int)2) * _x) + (e->__get((int)6) * _y)) + (e->__get((int)10) * _z)) + e->__get((int)14));		HX_STACK_VAR(_z1,"_z1");
								HX_STACK_LINE(189)
								bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
								HX_STACK_LINE(189)
								_this->ignore_listeners = true;
								HX_STACK_LINE(189)
								{
									HX_STACK_LINE(189)
									_this->x = _x1;
									HX_STACK_LINE(189)
									if ((_this->_construct)){
										HX_STACK_LINE(189)
										_this->x;
									}
									else{
										HX_STACK_LINE(189)
										if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
											HX_STACK_LINE(189)
											_this->listen_x(_x1);
										}
										HX_STACK_LINE(189)
										_this->x;
									}
								}
								HX_STACK_LINE(189)
								{
									HX_STACK_LINE(189)
									_this->y = _y1;
									HX_STACK_LINE(189)
									if ((_this->_construct)){
										HX_STACK_LINE(189)
										_this->y;
									}
									else{
										HX_STACK_LINE(189)
										if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
											HX_STACK_LINE(189)
											_this->listen_y(_y1);
										}
										HX_STACK_LINE(189)
										_this->y;
									}
								}
								HX_STACK_LINE(189)
								{
									HX_STACK_LINE(189)
									_this->z = _z1;
									HX_STACK_LINE(189)
									if ((_this->_construct)){
										HX_STACK_LINE(189)
										_this->z;
									}
									else{
										HX_STACK_LINE(189)
										if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
											HX_STACK_LINE(189)
											_this->listen_z(_z1);
										}
										HX_STACK_LINE(189)
										_this->z;
									}
								}
								HX_STACK_LINE(189)
								_this->ignore_listeners = prev;
								HX_STACK_LINE(189)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(189)
									_this->listen_x(_this->x);
								}
								HX_STACK_LINE(189)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(189)
									_this->listen_y(_this->y);
								}
								HX_STACK_LINE(189)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(189)
									_this->listen_z(_this->z);
								}
								HX_STACK_LINE(189)
								_this;
							}
							HX_STACK_LINE(189)
							return _this;
						}
						return null();
					}
				};
				HX_STACK_LINE(189)
				this->_transformedVertices->push(_Function_4_1::Block(i,this));
			}
		}
	}
	HX_STACK_LINE(193)
	return this->_transformedVertices;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_transformedVertices,return )

Array< ::Dynamic > Shape_obj::get_vertices( ){
	HX_STACK_FRAME("luxe.collision.shapes.Shape","get_vertices",0x0c59ce97,"luxe.collision.shapes.Shape.get_vertices","luxe/collision/shapes/Shape.hx",199,0xfa059164)
	HX_STACK_THIS(this)
	HX_STACK_LINE(199)
	return this->_vertices;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_vertices,return )


Shape_obj::Shape_obj()
{
}

void Shape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shape);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(tags,"tags");
	HX_MARK_MEMBER_NAME(_position,"_position");
	HX_MARK_MEMBER_NAME(_rotation,"_rotation");
	HX_MARK_MEMBER_NAME(_rotation_radians,"_rotation_radians");
	HX_MARK_MEMBER_NAME(_rotation_quat,"_rotation_quat");
	HX_MARK_MEMBER_NAME(_scale,"_scale");
	HX_MARK_MEMBER_NAME(_scaleX,"_scaleX");
	HX_MARK_MEMBER_NAME(_scaleY,"_scaleY");
	HX_MARK_MEMBER_NAME(_transformed,"_transformed");
	HX_MARK_MEMBER_NAME(_transformMatrix,"_transformMatrix");
	HX_MARK_MEMBER_NAME(_transformedVertices,"_transformedVertices");
	HX_MARK_MEMBER_NAME(_vertices,"_vertices");
	HX_MARK_END_CLASS();
}

void Shape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(tags,"tags");
	HX_VISIT_MEMBER_NAME(_position,"_position");
	HX_VISIT_MEMBER_NAME(_rotation,"_rotation");
	HX_VISIT_MEMBER_NAME(_rotation_radians,"_rotation_radians");
	HX_VISIT_MEMBER_NAME(_rotation_quat,"_rotation_quat");
	HX_VISIT_MEMBER_NAME(_scale,"_scale");
	HX_VISIT_MEMBER_NAME(_scaleX,"_scaleX");
	HX_VISIT_MEMBER_NAME(_scaleY,"_scaleY");
	HX_VISIT_MEMBER_NAME(_transformed,"_transformed");
	HX_VISIT_MEMBER_NAME(_transformMatrix,"_transformMatrix");
	HX_VISIT_MEMBER_NAME(_transformedVertices,"_transformedVertices");
	HX_VISIT_MEMBER_NAME(_vertices,"_vertices");
}

Dynamic Shape_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"tags") ) { return tags; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return get_scaleX(); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return get_scaleY(); }
		if (HX_FIELD_EQ(inName,"_scale") ) { return _scale; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_scaleX") ) { return _scaleX; }
		if (HX_FIELD_EQ(inName,"_scaleY") ) { return _scaleY; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return get_position(); }
		if (HX_FIELD_EQ(inName,"rotation") ) { return get_rotation(); }
		if (HX_FIELD_EQ(inName,"vertices") ) { return get_vertices(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_position") ) { return _position; }
		if (HX_FIELD_EQ(inName,"_rotation") ) { return _rotation; }
		if (HX_FIELD_EQ(inName,"_vertices") ) { return _vertices; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { return get_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { return get_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_transformed") ) { return _transformed; }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertices") ) { return get_vertices_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_rotation_quat") ) { return _rotation_quat; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_transformMatrix") ) { return _transformMatrix; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_rotation_radians") ) { return _rotation_radians; }
		if (HX_FIELD_EQ(inName,"refresh_transform") ) { return refresh_transform_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"transformedVertices") ) { return get_transformedVertices(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_transformedVertices") ) { return _transformedVertices; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_transformedVertices") ) { return get_transformedVertices_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Shape_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tags") ) { tags=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return set_scaleX(inValue); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return set_scaleY(inValue); }
		if (HX_FIELD_EQ(inName,"_scale") ) { _scale=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_scaleX") ) { _scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleY") ) { _scaleY=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return set_position(inValue); }
		if (HX_FIELD_EQ(inName,"rotation") ) { return set_rotation(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_position") ) { _position=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotation") ) { _rotation=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vertices") ) { _vertices=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_transformed") ) { _transformed=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_rotation_quat") ) { _rotation_quat=inValue.Cast< ::phoenix::Quaternion >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_transformMatrix") ) { _transformMatrix=inValue.Cast< ::phoenix::Matrix >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_rotation_radians") ) { _rotation_radians=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_transformedVertices") ) { _transformedVertices=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("tags"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("transformedVertices"));
	outFields->push(HX_CSTRING("vertices"));
	outFields->push(HX_CSTRING("_position"));
	outFields->push(HX_CSTRING("_rotation"));
	outFields->push(HX_CSTRING("_rotation_radians"));
	outFields->push(HX_CSTRING("_rotation_quat"));
	outFields->push(HX_CSTRING("_scale"));
	outFields->push(HX_CSTRING("_scaleX"));
	outFields->push(HX_CSTRING("_scaleY"));
	outFields->push(HX_CSTRING("_transformed"));
	outFields->push(HX_CSTRING("_transformMatrix"));
	outFields->push(HX_CSTRING("_transformedVertices"));
	outFields->push(HX_CSTRING("_vertices"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Shape_obj,active),HX_CSTRING("active")},
	{hx::fsString,(int)offsetof(Shape_obj,name),HX_CSTRING("name")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Shape_obj,data),HX_CSTRING("data")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Shape_obj,tags),HX_CSTRING("tags")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Shape_obj,_position),HX_CSTRING("_position")},
	{hx::fsFloat,(int)offsetof(Shape_obj,_rotation),HX_CSTRING("_rotation")},
	{hx::fsFloat,(int)offsetof(Shape_obj,_rotation_radians),HX_CSTRING("_rotation_radians")},
	{hx::fsObject /*::phoenix::Quaternion*/ ,(int)offsetof(Shape_obj,_rotation_quat),HX_CSTRING("_rotation_quat")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Shape_obj,_scale),HX_CSTRING("_scale")},
	{hx::fsFloat,(int)offsetof(Shape_obj,_scaleX),HX_CSTRING("_scaleX")},
	{hx::fsFloat,(int)offsetof(Shape_obj,_scaleY),HX_CSTRING("_scaleY")},
	{hx::fsBool,(int)offsetof(Shape_obj,_transformed),HX_CSTRING("_transformed")},
	{hx::fsObject /*::phoenix::Matrix*/ ,(int)offsetof(Shape_obj,_transformMatrix),HX_CSTRING("_transformMatrix")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Shape_obj,_transformedVertices),HX_CSTRING("_transformedVertices")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Shape_obj,_vertices),HX_CSTRING("_vertices")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("active"),
	HX_CSTRING("name"),
	HX_CSTRING("data"),
	HX_CSTRING("tags"),
	HX_CSTRING("_position"),
	HX_CSTRING("_rotation"),
	HX_CSTRING("_rotation_radians"),
	HX_CSTRING("_rotation_quat"),
	HX_CSTRING("_scale"),
	HX_CSTRING("_scaleX"),
	HX_CSTRING("_scaleY"),
	HX_CSTRING("_transformed"),
	HX_CSTRING("_transformMatrix"),
	HX_CSTRING("_transformedVertices"),
	HX_CSTRING("_vertices"),
	HX_CSTRING("destroy"),
	HX_CSTRING("refresh_transform"),
	HX_CSTRING("get_position"),
	HX_CSTRING("set_position"),
	HX_CSTRING("get_x"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_y"),
	HX_CSTRING("get_rotation"),
	HX_CSTRING("set_rotation"),
	HX_CSTRING("get_scaleX"),
	HX_CSTRING("set_scaleX"),
	HX_CSTRING("get_scaleY"),
	HX_CSTRING("set_scaleY"),
	HX_CSTRING("get_transformedVertices"),
	HX_CSTRING("get_vertices"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shape_obj::__mClass,"__mClass");
};

#endif

Class Shape_obj::__mClass;

void Shape_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.collision.shapes.Shape"), hx::TCanCast< Shape_obj> ,sStaticFields,sMemberFields,
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

void Shape_obj::__boot()
{
}

} // end namespace luxe
} // end namespace collision
} // end namespace shapes
