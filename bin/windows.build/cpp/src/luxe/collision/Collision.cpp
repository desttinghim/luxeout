#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_collision_Collision
#include <luxe/collision/Collision.h>
#endif
#ifndef INCLUDED_luxe_collision_CollisionData
#include <luxe/collision/CollisionData.h>
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
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace luxe{
namespace collision{

Void Collision_obj::__construct()
{
HX_STACK_FRAME("luxe.collision.Collision","new",0xc134f490,"luxe.collision.Collision.new","luxe/collision/Collision.hx",176,0x1f361322)
{
	HX_STACK_LINE(176)
	HX_STACK_DO_THROW(HX_CSTRING("Collision is a static class. No instances can be created."));
}
;
	return null();
}

//Collision_obj::~Collision_obj() { }

Dynamic Collision_obj::__CreateEmpty() { return  new Collision_obj; }
hx::ObjectPtr< Collision_obj > Collision_obj::__new()
{  hx::ObjectPtr< Collision_obj > result = new Collision_obj();
	result->__construct();
	return result;}

Dynamic Collision_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Collision_obj > result = new Collision_obj();
	result->__construct();
	return result;}

::luxe::collision::CollisionData Collision_obj::test( ::luxe::collision::shapes::Shape shape1,::luxe::collision::shapes::Shape shape2){
	HX_STACK_FRAME("luxe.collision.Collision","test",0x51184e22,"luxe.collision.Collision.test","luxe/collision/Collision.hx",18,0x1f361322)
	HX_STACK_ARG(shape1,"shape1")
	HX_STACK_ARG(shape2,"shape2")
	HX_STACK_LINE(20)
	if (((shape1 == shape2))){
		HX_STACK_LINE(20)
		return null();
	}
	HX_STACK_LINE(22)
	::luxe::collision::CollisionData result1;		HX_STACK_VAR(result1,"result1");
	HX_STACK_LINE(23)
	::luxe::collision::CollisionData result2;		HX_STACK_VAR(result2,"result2");
	HX_STACK_LINE(25)
	if (((  ((::Std_obj::is(shape1,hx::ClassOf< ::luxe::collision::shapes::Circle >()))) ? bool(::Std_obj::is(shape2,hx::ClassOf< ::luxe::collision::shapes::Circle >())) : bool(false) ))){
		HX_STACK_LINE(26)
		return ::luxe::collision::Collision_obj::checkCircles(hx::TCast< luxe::collision::shapes::Circle >::cast(shape1),hx::TCast< luxe::collision::shapes::Circle >::cast(shape2));
	}
	HX_STACK_LINE(29)
	if (((  ((::Std_obj::is(shape1,hx::ClassOf< ::luxe::collision::shapes::Polygon >()))) ? bool(::Std_obj::is(shape2,hx::ClassOf< ::luxe::collision::shapes::Polygon >())) : bool(false) ))){
		HX_STACK_LINE(30)
		result1 = ::luxe::collision::Collision_obj::checkPolygons(hx::TCast< luxe::collision::shapes::Polygon >::cast(shape1),hx::TCast< luxe::collision::shapes::Polygon >::cast(shape2),false);
		HX_STACK_LINE(31)
		if (((result1 == null()))){
			HX_STACK_LINE(31)
			return null();
		}
		HX_STACK_LINE(32)
		result2 = ::luxe::collision::Collision_obj::checkPolygons(hx::TCast< luxe::collision::shapes::Polygon >::cast(shape2),hx::TCast< luxe::collision::shapes::Polygon >::cast(shape1),true);
		HX_STACK_LINE(33)
		if (((result2 == null()))){
			HX_STACK_LINE(33)
			return null();
		}
		HX_STACK_LINE(36)
		Float _g = ::Math_obj::abs(result1->overlap);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		if (((_g < ::Math_obj::abs(result2->overlap)))){
			HX_STACK_LINE(37)
			return result1;
		}
		else{
			HX_STACK_LINE(38)
			return result2;
		}
	}
	HX_STACK_LINE(41)
	if ((::Std_obj::is(shape1,hx::ClassOf< ::luxe::collision::shapes::Circle >()))){
		HX_STACK_LINE(42)
		return ::luxe::collision::Collision_obj::checkCircleVsPolygon(hx::TCast< luxe::collision::shapes::Circle >::cast(shape1),hx::TCast< luxe::collision::shapes::Polygon >::cast(shape2),true);
	}
	HX_STACK_LINE(45)
	if ((::Std_obj::is(shape1,hx::ClassOf< ::luxe::collision::shapes::Polygon >()))){
		HX_STACK_LINE(46)
		return ::luxe::collision::Collision_obj::checkCircleVsPolygon(hx::TCast< luxe::collision::shapes::Circle >::cast(shape2),hx::TCast< luxe::collision::shapes::Polygon >::cast(shape1),false);
	}
	HX_STACK_LINE(49)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Collision_obj,test,return )

Array< ::Dynamic > Collision_obj::testShapes( ::luxe::collision::shapes::Shape shape1,Array< ::Dynamic > shapes){
	HX_STACK_FRAME("luxe.collision.Collision","testShapes",0x94dee1f4,"luxe.collision.Collision.testShapes","luxe/collision/Collision.hx",57,0x1f361322)
	HX_STACK_ARG(shape1,"shape1")
	HX_STACK_ARG(shapes,"shapes")
	HX_STACK_LINE(59)
	Array< ::Dynamic > results = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		while(((_g < shapes->length))){
			HX_STACK_LINE(61)
			::luxe::collision::shapes::Shape other_shape = shapes->__get(_g).StaticCast< ::luxe::collision::shapes::Shape >();		HX_STACK_VAR(other_shape,"other_shape");
			HX_STACK_LINE(61)
			++(_g);
			HX_STACK_LINE(62)
			::luxe::collision::CollisionData result = ::luxe::collision::Collision_obj::test(shape1,other_shape);		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(63)
			if (((result != null()))){
				HX_STACK_LINE(64)
				results->push(result);
			}
		}
	}
	HX_STACK_LINE(68)
	return results;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Collision_obj,testShapes,return )

bool Collision_obj::ray( ::phoenix::Vector lineStart,::phoenix::Vector lineEnd,Array< ::Dynamic > shapes){
	HX_STACK_FRAME("luxe.collision.Collision","ray",0xc137fa1a,"luxe.collision.Collision.ray","luxe/collision/Collision.hx",75,0x1f361322)
	HX_STACK_ARG(lineStart,"lineStart")
	HX_STACK_ARG(lineEnd,"lineEnd")
	HX_STACK_ARG(shapes,"shapes")
	HX_STACK_LINE(78)
	{
		HX_STACK_LINE(78)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(78)
		while(((_g < shapes->length))){
			HX_STACK_LINE(78)
			::luxe::collision::shapes::Shape _shape = shapes->__get(_g).StaticCast< ::luxe::collision::shapes::Shape >();		HX_STACK_VAR(_shape,"_shape");
			HX_STACK_LINE(78)
			++(_g);
			HX_STACK_LINE(81)
			if ((::Std_obj::is(_shape,hx::ClassOf< ::luxe::collision::shapes::Circle >()))){
				HX_STACK_LINE(83)
				if ((::luxe::collision::Collision_obj::testCircleLine(_shape,lineStart,lineEnd))){
					HX_STACK_LINE(84)
					return true;
				}
			}
			else{
				HX_STACK_LINE(90)
				Array< ::Dynamic > line = ::luxe::collision::Collision_obj::bresenhamLine(lineStart,lineEnd);		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(92)
					while(((_g1 < line->length))){
						HX_STACK_LINE(92)
						::phoenix::Vector _point = line->__get(_g1).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(_point,"_point");
						HX_STACK_LINE(92)
						++(_g1);
						HX_STACK_LINE(93)
						if ((::luxe::collision::Collision_obj::pointInPoly(_point,_shape))){
							HX_STACK_LINE(94)
							return true;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(102)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Collision_obj,ray,return )

bool Collision_obj::testCircleLine( ::luxe::collision::shapes::Circle circle,::phoenix::Vector lineStart,::phoenix::Vector lineEnd){
	HX_STACK_FRAME("luxe.collision.Collision","testCircleLine",0x6fa50ee6,"luxe.collision.Collision.testCircleLine","luxe/collision/Collision.hx",107,0x1f361322)
	HX_STACK_ARG(circle,"circle")
	HX_STACK_ARG(lineStart,"lineStart")
	HX_STACK_ARG(lineEnd,"lineEnd")
	HX_STACK_LINE(110)
	::phoenix::Vector d;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(110)
	{
		HX_STACK_LINE(110)
		::phoenix::Vector _this = ::phoenix::Vector_obj::__new(lineEnd->x,lineEnd->y,lineEnd->z,lineEnd->w);		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(110)
		if (((lineStart == null()))){
			HX_STACK_LINE(110)
			HX_STACK_DO_THROW(HX_CSTRING("vector.subtract other was handed in as null"));
		}
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			Float _x = (_this->x - lineStart->x);		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(110)
			Float _y = (_this->y - lineStart->y);		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(110)
			Float _z = (_this->z - lineStart->z);		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(110)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(110)
			_this->ignore_listeners = true;
			HX_STACK_LINE(110)
			{
				HX_STACK_LINE(110)
				_this->x = _x;
				HX_STACK_LINE(110)
				if ((_this->_construct)){
					HX_STACK_LINE(110)
					_this->x;
				}
				else{
					HX_STACK_LINE(110)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(110)
						_this->listen_x(_x);
					}
					HX_STACK_LINE(110)
					_this->x;
				}
			}
			HX_STACK_LINE(110)
			{
				HX_STACK_LINE(110)
				_this->y = _y;
				HX_STACK_LINE(110)
				if ((_this->_construct)){
					HX_STACK_LINE(110)
					_this->y;
				}
				else{
					HX_STACK_LINE(110)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(110)
						_this->listen_y(_y);
					}
					HX_STACK_LINE(110)
					_this->y;
				}
			}
			HX_STACK_LINE(110)
			{
				HX_STACK_LINE(110)
				_this->z = _z;
				HX_STACK_LINE(110)
				if ((_this->_construct)){
					HX_STACK_LINE(110)
					_this->z;
				}
				else{
					HX_STACK_LINE(110)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(110)
						_this->listen_z(_z);
					}
					HX_STACK_LINE(110)
					_this->z;
				}
			}
			HX_STACK_LINE(110)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(110)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(110)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(110)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(110)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(110)
			if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(110)
				_this->listen_z(_this->z);
			}
			HX_STACK_LINE(110)
			_this;
		}
		HX_STACK_LINE(110)
		d = _this;
	}
	HX_STACK_LINE(112)
	::phoenix::Vector f;		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(112)
	{
		HX_STACK_LINE(112)
		::phoenix::Vector _this = ::phoenix::Vector_obj::__new(lineStart->x,lineStart->y,lineStart->z,lineStart->w);		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(112)
		::phoenix::Vector other = circle->get_position();		HX_STACK_VAR(other,"other");
		HX_STACK_LINE(112)
		if (((other == null()))){
			HX_STACK_LINE(112)
			HX_STACK_DO_THROW(HX_CSTRING("vector.subtract other was handed in as null"));
		}
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			Float _x = (_this->x - other->x);		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(112)
			Float _y = (_this->y - other->y);		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(112)
			Float _z = (_this->z - other->z);		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(112)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(112)
			_this->ignore_listeners = true;
			HX_STACK_LINE(112)
			{
				HX_STACK_LINE(112)
				_this->x = _x;
				HX_STACK_LINE(112)
				if ((_this->_construct)){
					HX_STACK_LINE(112)
					_this->x;
				}
				else{
					HX_STACK_LINE(112)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(112)
						_this->listen_x(_x);
					}
					HX_STACK_LINE(112)
					_this->x;
				}
			}
			HX_STACK_LINE(112)
			{
				HX_STACK_LINE(112)
				_this->y = _y;
				HX_STACK_LINE(112)
				if ((_this->_construct)){
					HX_STACK_LINE(112)
					_this->y;
				}
				else{
					HX_STACK_LINE(112)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(112)
						_this->listen_y(_y);
					}
					HX_STACK_LINE(112)
					_this->y;
				}
			}
			HX_STACK_LINE(112)
			{
				HX_STACK_LINE(112)
				_this->z = _z;
				HX_STACK_LINE(112)
				if ((_this->_construct)){
					HX_STACK_LINE(112)
					_this->z;
				}
				else{
					HX_STACK_LINE(112)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(112)
						_this->listen_z(_z);
					}
					HX_STACK_LINE(112)
					_this->z;
				}
			}
			HX_STACK_LINE(112)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(112)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(112)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(112)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(112)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(112)
			if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(112)
				_this->listen_z(_this->z);
			}
			HX_STACK_LINE(112)
			_this;
		}
		HX_STACK_LINE(112)
		f = _this;
	}
	HX_STACK_LINE(114)
	Float a = (((d->x * d->x) + (d->y * d->y)) + (d->z * d->z));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(115)
	Float b = ((int)2 * ((((f->x * d->x) + (f->y * d->y)) + (f->z * d->z))));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(116)
	Float _g = circle->get_radius();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(116)
	Float c = ((((f->x * f->x) + (f->y * f->y)) + (f->z * f->z)) - (_g * circle->get_radius()));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(117)
	Float discrm = ((b * b) - (((int)4 * a) * c));		HX_STACK_VAR(discrm,"discrm");
	HX_STACK_LINE(120)
	if (((discrm < (int)0))){
		HX_STACK_LINE(121)
		return false;
	}
	else{
		HX_STACK_LINE(124)
		discrm = ::Math_obj::sqrt(discrm);
		HX_STACK_LINE(126)
		Float t1 = (Float(((-(b) + discrm))) / Float((((int)2 * a))));		HX_STACK_VAR(t1,"t1");
		HX_STACK_LINE(127)
		Float t2 = (Float(((-(b) - discrm))) / Float((((int)2 * a))));		HX_STACK_VAR(t2,"t2");
		HX_STACK_LINE(129)
		if (((bool((t1 >= (int)0)) && bool((t1 <= (int)1))))){
			HX_STACK_LINE(130)
			return true;
		}
		else{
			HX_STACK_LINE(132)
			return false;
		}
	}
	HX_STACK_LINE(137)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Collision_obj,testCircleLine,return )

bool Collision_obj::pointInPoly( ::phoenix::Vector point,::luxe::collision::shapes::Polygon poly){
	HX_STACK_FRAME("luxe.collision.Collision","pointInPoly",0xf7437571,"luxe.collision.Collision.pointInPoly","luxe/collision/Collision.hx",142,0x1f361322)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(poly,"poly")
	HX_STACK_LINE(144)
	int sides = poly->get_transformedVertices()->length;		HX_STACK_VAR(sides,"sides");
	HX_STACK_LINE(145)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(146)
	int j = (sides - (int)1);		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(148)
	bool oddNodes = false;		HX_STACK_VAR(oddNodes,"oddNodes");
	HX_STACK_LINE(150)
	{
		HX_STACK_LINE(150)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(150)
		while(((_g < sides))){
			HX_STACK_LINE(150)
			int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(153)
			Array< ::Dynamic > _g1 = poly->get_transformedVertices();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(152)
			Array< ::Dynamic > _g11 = poly->get_transformedVertices();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(152)
			Array< ::Dynamic > _g2 = poly->get_transformedVertices();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(152)
			if (((bool((bool((_g11->__get(i1).StaticCast< ::phoenix::Vector >()->y < point->y)) && bool((_g2->__get(j).StaticCast< ::phoenix::Vector >()->y >= point->y)))) || bool((bool((poly->get_transformedVertices()->__get(j).StaticCast< ::phoenix::Vector >()->y < point->y)) && bool((_g1->__get(i1).StaticCast< ::phoenix::Vector >()->y >= point->y))))))){
				HX_STACK_LINE(156)
				Array< ::Dynamic > _g3 = poly->get_transformedVertices();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(157)
				Array< ::Dynamic > _g4 = poly->get_transformedVertices();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(157)
				Array< ::Dynamic > _g5 = poly->get_transformedVertices();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(158)
				Array< ::Dynamic > _g6 = poly->get_transformedVertices();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(158)
				Array< ::Dynamic > _g7 = poly->get_transformedVertices();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(155)
				if ((((poly->get_transformedVertices()->__get(i1).StaticCast< ::phoenix::Vector >()->x + ((Float(((point->y - _g3->__get(i1).StaticCast< ::phoenix::Vector >()->y))) / Float(((_g4->__get(j).StaticCast< ::phoenix::Vector >()->y - _g5->__get(i1).StaticCast< ::phoenix::Vector >()->y)))) * ((_g6->__get(j).StaticCast< ::phoenix::Vector >()->x - _g7->__get(i1).StaticCast< ::phoenix::Vector >()->x)))) < point->x))){
					HX_STACK_LINE(160)
					oddNodes = !(oddNodes);
				}
			}
			HX_STACK_LINE(165)
			j = i1;
		}
	}
	HX_STACK_LINE(169)
	return oddNodes;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Collision_obj,pointInPoly,return )

Array< ::Dynamic > Collision_obj::bresenhamLine( ::phoenix::Vector start,::phoenix::Vector end){
	HX_STACK_FRAME("luxe.collision.Collision","bresenhamLine",0x18887a51,"luxe.collision.Collision.bresenhamLine","luxe/collision/Collision.hx",180,0x1f361322)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(183)
	Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
	HX_STACK_LINE(184)
	Float _g = ::Math_obj::abs((end->y - start->y));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(184)
	bool steep = (_g > ::Math_obj::abs((end->x - start->x)));		HX_STACK_VAR(steep,"steep");
	HX_STACK_LINE(186)
	bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
	HX_STACK_LINE(188)
	if ((steep)){
		HX_STACK_LINE(190)
		start = ::luxe::collision::Collision_obj::swap(start->x,start->y);
		HX_STACK_LINE(191)
		end = ::luxe::collision::Collision_obj::swap(end->x,end->y);
	}
	HX_STACK_LINE(195)
	if (((start->x > end->x))){
		HX_STACK_LINE(197)
		Float t = start->x;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(199)
		{
			HX_STACK_LINE(199)
			Float _x = end->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(199)
			start->x = _x;
			HX_STACK_LINE(199)
			if ((start->_construct)){
				HX_STACK_LINE(199)
				start->x;
			}
			else{
				HX_STACK_LINE(199)
				if (((bool((start->listen_x != null())) && bool(!(start->ignore_listeners))))){
					HX_STACK_LINE(199)
					start->listen_x(_x);
				}
				HX_STACK_LINE(199)
				start->x;
			}
		}
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			end->x = t;
			HX_STACK_LINE(200)
			if ((end->_construct)){
				HX_STACK_LINE(200)
				end->x;
			}
			else{
				HX_STACK_LINE(200)
				if (((bool((end->listen_x != null())) && bool(!(end->ignore_listeners))))){
					HX_STACK_LINE(200)
					end->listen_x(t);
				}
				HX_STACK_LINE(200)
				end->x;
			}
		}
		HX_STACK_LINE(201)
		t = start->y;
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			Float _y = end->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(202)
			start->y = _y;
			HX_STACK_LINE(202)
			if ((start->_construct)){
				HX_STACK_LINE(202)
				start->y;
			}
			else{
				HX_STACK_LINE(202)
				if (((bool((start->listen_y != null())) && bool(!(start->ignore_listeners))))){
					HX_STACK_LINE(202)
					start->listen_y(_y);
				}
				HX_STACK_LINE(202)
				start->y;
			}
		}
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			end->y = t;
			HX_STACK_LINE(203)
			if ((end->_construct)){
				HX_STACK_LINE(203)
				end->y;
			}
			else{
				HX_STACK_LINE(203)
				if (((bool((end->listen_y != null())) && bool(!(end->ignore_listeners))))){
					HX_STACK_LINE(203)
					end->listen_y(t);
				}
				HX_STACK_LINE(203)
				end->y;
			}
		}
		HX_STACK_LINE(204)
		swapped = true;
	}
	HX_STACK_LINE(209)
	Float deltax = (end->x - start->x);		HX_STACK_VAR(deltax,"deltax");
	HX_STACK_LINE(211)
	Float deltay = ::Math_obj::abs((end->y - start->y));		HX_STACK_VAR(deltay,"deltay");
	HX_STACK_LINE(213)
	Float error = (Float(deltax) / Float((int)2));		HX_STACK_VAR(error,"error");
	HX_STACK_LINE(214)
	Float ystep;		HX_STACK_VAR(ystep,"ystep");
	HX_STACK_LINE(215)
	Float y = start->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(217)
	if (((start->y < end->y))){
		HX_STACK_LINE(218)
		ystep = (int)1;
	}
	else{
		HX_STACK_LINE(220)
		ystep = (int)-1;
	}
	HX_STACK_LINE(223)
	int x = ::Std_obj::_int(start->x);		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(224)
	{
		HX_STACK_LINE(224)
		int _g1 = ::Std_obj::_int(start->x);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(224)
		int _g2 = ::Std_obj::_int(end->x);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(224)
		while(((_g1 < _g2))){
			HX_STACK_LINE(224)
			int x1 = (_g1)++;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(226)
			if ((steep)){
				HX_STACK_LINE(227)
				points->push(::phoenix::Vector_obj::__new(y,x1,null(),null()));
			}
			else{
				HX_STACK_LINE(229)
				points->push(::phoenix::Vector_obj::__new(x1,y,null(),null()));
			}
			HX_STACK_LINE(232)
			hx::SubEq(error,deltay);
			HX_STACK_LINE(234)
			if (((error < (int)0))){
				HX_STACK_LINE(235)
				hx::AddEq(y,ystep);
				HX_STACK_LINE(236)
				hx::AddEq(error,deltax);
			}
		}
	}
	HX_STACK_LINE(240)
	if ((swapped)){
		HX_STACK_LINE(241)
		points->reverse();
	}
	HX_STACK_LINE(244)
	return points;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Collision_obj,bresenhamLine,return )

::luxe::collision::CollisionData Collision_obj::checkCircleVsPolygon( ::luxe::collision::shapes::Circle circle,::luxe::collision::shapes::Polygon polygon,bool flip){
	HX_STACK_FRAME("luxe.collision.Collision","checkCircleVsPolygon",0x7cf43675,"luxe.collision.Collision.checkCircleVsPolygon","luxe/collision/Collision.hx",249,0x1f361322)
	HX_STACK_ARG(circle,"circle")
	HX_STACK_ARG(polygon,"polygon")
	HX_STACK_ARG(flip,"flip")
	HX_STACK_LINE(251)
	Float test1;		HX_STACK_VAR(test1,"test1");
	HX_STACK_LINE(252)
	Float test2;		HX_STACK_VAR(test2,"test2");
	HX_STACK_LINE(253)
	Float test;		HX_STACK_VAR(test,"test");
	HX_STACK_LINE(255)
	Float min1 = (int)0;		HX_STACK_VAR(min1,"min1");
	HX_STACK_LINE(256)
	Float max1 = (int)1073741823;		HX_STACK_VAR(max1,"max1");
	HX_STACK_LINE(257)
	Float min2 = (int)0;		HX_STACK_VAR(min2,"min2");
	HX_STACK_LINE(258)
	Float max2 = (int)1073741823;		HX_STACK_VAR(max2,"max2");
	HX_STACK_LINE(259)
	::phoenix::Vector normalAxis = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(normalAxis,"normalAxis");
	HX_STACK_LINE(260)
	Float offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(261)
	::phoenix::Vector vectorOffset = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(vectorOffset,"vectorOffset");
	HX_STACK_LINE(262)
	Array< ::Dynamic > vectors;		HX_STACK_VAR(vectors,"vectors");
	HX_STACK_LINE(263)
	Float shortestDistance = (int)1073741823;		HX_STACK_VAR(shortestDistance,"shortestDistance");
	HX_STACK_LINE(264)
	::luxe::collision::CollisionData collisionData = ::luxe::collision::CollisionData_obj::__new();		HX_STACK_VAR(collisionData,"collisionData");
	HX_STACK_LINE(265)
	Float distMin;		HX_STACK_VAR(distMin,"distMin");
	HX_STACK_LINE(267)
	Float distance = (int)-1;		HX_STACK_VAR(distance,"distance");
	HX_STACK_LINE(268)
	Float testDistance = (int)1073741823;		HX_STACK_VAR(testDistance,"testDistance");
	HX_STACK_LINE(269)
	::phoenix::Vector closestVector = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(closestVector,"closestVector");
	HX_STACK_LINE(272)
	Float _g = circle->get_x();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(272)
	vectorOffset = ::phoenix::Vector_obj::__new(-(_g),-(circle->get_y()),null(),null());
	HX_STACK_LINE(273)
	vectors = polygon->get_transformedVertices()->copy();
	HX_STACK_LINE(276)
	if (((vectors->length == (int)2))){
		HX_STACK_LINE(277)
		::phoenix::Vector temp = ::phoenix::Vector_obj::__new(-(((vectors->__get((int)1).StaticCast< ::phoenix::Vector >()->y - vectors->__get((int)0).StaticCast< ::phoenix::Vector >()->y))),(vectors->__get((int)1).StaticCast< ::phoenix::Vector >()->x - vectors->__get((int)0).StaticCast< ::phoenix::Vector >()->x),null(),null());		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(278)
		{
			HX_STACK_LINE(278)
			{
				HX_STACK_LINE(278)
				Float value = ::Math_obj::min(0.0000000001,::Math_obj::sqrt((((temp->x * temp->x) + (temp->y * temp->y)) + (temp->z * temp->z))));		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(278)
				{
					HX_STACK_LINE(278)
					::phoenix::Vector _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(278)
					{
						HX_STACK_LINE(278)
						Float v = ::Math_obj::sqrt((((temp->x * temp->x) + (temp->y * temp->y)) + (temp->z * temp->z)));		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(278)
						if (((v != (int)0))){
							HX_STACK_LINE(278)
							Float _x = (Float(temp->x) / Float(v));		HX_STACK_VAR(_x,"_x");
							HX_STACK_LINE(278)
							Float _y = (Float(temp->y) / Float(v));		HX_STACK_VAR(_y,"_y");
							HX_STACK_LINE(278)
							Float _z = (Float(temp->z) / Float(v));		HX_STACK_VAR(_z,"_z");
							HX_STACK_LINE(278)
							bool prev = temp->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(278)
							temp->ignore_listeners = true;
							HX_STACK_LINE(278)
							{
								HX_STACK_LINE(278)
								temp->x = _x;
								HX_STACK_LINE(278)
								if ((temp->_construct)){
									HX_STACK_LINE(278)
									temp->x;
								}
								else{
									HX_STACK_LINE(278)
									if (((bool((temp->listen_x != null())) && bool(!(temp->ignore_listeners))))){
										HX_STACK_LINE(278)
										temp->listen_x(_x);
									}
									HX_STACK_LINE(278)
									temp->x;
								}
							}
							HX_STACK_LINE(278)
							{
								HX_STACK_LINE(278)
								temp->y = _y;
								HX_STACK_LINE(278)
								if ((temp->_construct)){
									HX_STACK_LINE(278)
									temp->y;
								}
								else{
									HX_STACK_LINE(278)
									if (((bool((temp->listen_y != null())) && bool(!(temp->ignore_listeners))))){
										HX_STACK_LINE(278)
										temp->listen_y(_y);
									}
									HX_STACK_LINE(278)
									temp->y;
								}
							}
							HX_STACK_LINE(278)
							{
								HX_STACK_LINE(278)
								temp->z = _z;
								HX_STACK_LINE(278)
								if ((temp->_construct)){
									HX_STACK_LINE(278)
									temp->z;
								}
								else{
									HX_STACK_LINE(278)
									if (((bool((temp->listen_z != null())) && bool(!(temp->ignore_listeners))))){
										HX_STACK_LINE(278)
										temp->listen_z(_z);
									}
									HX_STACK_LINE(278)
									temp->z;
								}
							}
							HX_STACK_LINE(278)
							temp->ignore_listeners = prev;
							HX_STACK_LINE(278)
							if (((bool((temp->listen_x != null())) && bool(!(temp->ignore_listeners))))){
								HX_STACK_LINE(278)
								temp->listen_x(temp->x);
							}
							HX_STACK_LINE(278)
							if (((bool((temp->listen_y != null())) && bool(!(temp->ignore_listeners))))){
								HX_STACK_LINE(278)
								temp->listen_y(temp->y);
							}
							HX_STACK_LINE(278)
							if (((bool((temp->listen_z != null())) && bool(!(temp->ignore_listeners))))){
								HX_STACK_LINE(278)
								temp->listen_z(temp->z);
							}
							HX_STACK_LINE(278)
							temp;
						}
						else{
							HX_STACK_LINE(278)
							bool prev = temp->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(278)
							temp->ignore_listeners = true;
							HX_STACK_LINE(278)
							{
								HX_STACK_LINE(278)
								temp->x = (int)0;
								HX_STACK_LINE(278)
								if ((temp->_construct)){
									HX_STACK_LINE(278)
									temp->x;
								}
								else{
									HX_STACK_LINE(278)
									if (((bool((temp->listen_x != null())) && bool(!(temp->ignore_listeners))))){
										HX_STACK_LINE(278)
										temp->listen_x((int)0);
									}
									HX_STACK_LINE(278)
									temp->x;
								}
							}
							HX_STACK_LINE(278)
							{
								HX_STACK_LINE(278)
								temp->y = (int)0;
								HX_STACK_LINE(278)
								if ((temp->_construct)){
									HX_STACK_LINE(278)
									temp->y;
								}
								else{
									HX_STACK_LINE(278)
									if (((bool((temp->listen_y != null())) && bool(!(temp->ignore_listeners))))){
										HX_STACK_LINE(278)
										temp->listen_y((int)0);
									}
									HX_STACK_LINE(278)
									temp->y;
								}
							}
							HX_STACK_LINE(278)
							{
								HX_STACK_LINE(278)
								temp->z = (int)0;
								HX_STACK_LINE(278)
								if ((temp->_construct)){
									HX_STACK_LINE(278)
									temp->z;
								}
								else{
									HX_STACK_LINE(278)
									if (((bool((temp->listen_z != null())) && bool(!(temp->ignore_listeners))))){
										HX_STACK_LINE(278)
										temp->listen_z((int)0);
									}
									HX_STACK_LINE(278)
									temp->z;
								}
							}
							HX_STACK_LINE(278)
							temp->ignore_listeners = prev;
							HX_STACK_LINE(278)
							if (((bool((temp->listen_x != null())) && bool(!(temp->ignore_listeners))))){
								HX_STACK_LINE(278)
								temp->listen_x(temp->x);
							}
							HX_STACK_LINE(278)
							if (((bool((temp->listen_y != null())) && bool(!(temp->ignore_listeners))))){
								HX_STACK_LINE(278)
								temp->listen_y(temp->y);
							}
							HX_STACK_LINE(278)
							if (((bool((temp->listen_z != null())) && bool(!(temp->ignore_listeners))))){
								HX_STACK_LINE(278)
								temp->listen_z(temp->z);
							}
							HX_STACK_LINE(278)
							temp;
						}
						HX_STACK_LINE(278)
						_this = temp;
					}
					HX_STACK_LINE(278)
					{
						HX_STACK_LINE(278)
						Float _x = (_this->x * value);		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(278)
						Float _y = (_this->y * value);		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(278)
						Float _z = (_this->z * value);		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(278)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(278)
						_this->ignore_listeners = true;
						HX_STACK_LINE(278)
						{
							HX_STACK_LINE(278)
							_this->x = _x;
							HX_STACK_LINE(278)
							if ((_this->_construct)){
								HX_STACK_LINE(278)
								_this->x;
							}
							else{
								HX_STACK_LINE(278)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(278)
									_this->listen_x(_x);
								}
								HX_STACK_LINE(278)
								_this->x;
							}
						}
						HX_STACK_LINE(278)
						{
							HX_STACK_LINE(278)
							_this->y = _y;
							HX_STACK_LINE(278)
							if ((_this->_construct)){
								HX_STACK_LINE(278)
								_this->y;
							}
							else{
								HX_STACK_LINE(278)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(278)
									_this->listen_y(_y);
								}
								HX_STACK_LINE(278)
								_this->y;
							}
						}
						HX_STACK_LINE(278)
						{
							HX_STACK_LINE(278)
							_this->z = _z;
							HX_STACK_LINE(278)
							if ((_this->_construct)){
								HX_STACK_LINE(278)
								_this->z;
							}
							else{
								HX_STACK_LINE(278)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(278)
									_this->listen_z(_z);
								}
								HX_STACK_LINE(278)
								_this->z;
							}
						}
						HX_STACK_LINE(278)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(278)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(278)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(278)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(278)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(278)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(278)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(278)
						_this;
					}
					HX_STACK_LINE(278)
					_this;
				}
				HX_STACK_LINE(278)
				value;
			}
			HX_STACK_LINE(278)
			temp;
		}
		struct _Function_2_1{
			inline static ::phoenix::Vector Block( ::phoenix::Vector &temp,Array< ::Dynamic > &vectors){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/collision/Collision.hx",279,0x1f361322)
				{
					HX_STACK_LINE(279)
					::phoenix::Vector _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(279)
					{
						HX_STACK_LINE(279)
						::phoenix::Vector _this1 = vectors->__get((int)1).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(279)
						_this = ::phoenix::Vector_obj::__new(_this1->x,_this1->y,_this1->z,_this1->w);
					}
					HX_STACK_LINE(279)
					if (((temp == null()))){
						HX_STACK_LINE(279)
						HX_STACK_DO_THROW(HX_CSTRING("vector.add other was handed in as null"));
					}
					HX_STACK_LINE(279)
					{
						HX_STACK_LINE(279)
						Float _x = (_this->x + temp->x);		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(279)
						Float _y = (_this->y + temp->y);		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(279)
						Float _z = (_this->z + temp->z);		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(279)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(279)
						_this->ignore_listeners = true;
						HX_STACK_LINE(279)
						{
							HX_STACK_LINE(279)
							_this->x = _x;
							HX_STACK_LINE(279)
							if ((_this->_construct)){
								HX_STACK_LINE(279)
								_this->x;
							}
							else{
								HX_STACK_LINE(279)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(279)
									_this->listen_x(_x);
								}
								HX_STACK_LINE(279)
								_this->x;
							}
						}
						HX_STACK_LINE(279)
						{
							HX_STACK_LINE(279)
							_this->y = _y;
							HX_STACK_LINE(279)
							if ((_this->_construct)){
								HX_STACK_LINE(279)
								_this->y;
							}
							else{
								HX_STACK_LINE(279)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(279)
									_this->listen_y(_y);
								}
								HX_STACK_LINE(279)
								_this->y;
							}
						}
						HX_STACK_LINE(279)
						{
							HX_STACK_LINE(279)
							_this->z = _z;
							HX_STACK_LINE(279)
							if ((_this->_construct)){
								HX_STACK_LINE(279)
								_this->z;
							}
							else{
								HX_STACK_LINE(279)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(279)
									_this->listen_z(_z);
								}
								HX_STACK_LINE(279)
								_this->z;
							}
						}
						HX_STACK_LINE(279)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(279)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(279)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(279)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(279)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(279)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(279)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(279)
						_this;
					}
					HX_STACK_LINE(279)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(279)
		vectors->push(_Function_2_1::Block(temp,vectors));
	}
	HX_STACK_LINE(283)
	{
		HX_STACK_LINE(283)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(283)
		int _g2 = vectors->length;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(283)
		while(((_g1 < _g2))){
			HX_STACK_LINE(283)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(287)
			Float _g11 = (circle->get_x() - vectors->__get(i).StaticCast< ::phoenix::Vector >()->x);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(287)
			Float _g21 = (_g11 * ((circle->get_x() - vectors->__get(i).StaticCast< ::phoenix::Vector >()->x)));		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(288)
			Float _g3 = (circle->get_y() - vectors->__get(i).StaticCast< ::phoenix::Vector >()->y);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(287)
			distance = (_g21 + (_g3 * ((circle->get_y() - vectors->__get(i).StaticCast< ::phoenix::Vector >()->y))));
			HX_STACK_LINE(290)
			if (((distance < testDistance))){
				HX_STACK_LINE(291)
				testDistance = distance;
				HX_STACK_LINE(292)
				{
					HX_STACK_LINE(292)
					Float _x = vectors->__get(i).StaticCast< ::phoenix::Vector >()->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(292)
					closestVector->x = _x;
					HX_STACK_LINE(292)
					if ((closestVector->_construct)){
						HX_STACK_LINE(292)
						closestVector->x;
					}
					else{
						HX_STACK_LINE(292)
						if (((bool((closestVector->listen_x != null())) && bool(!(closestVector->ignore_listeners))))){
							HX_STACK_LINE(292)
							closestVector->listen_x(_x);
						}
						HX_STACK_LINE(292)
						closestVector->x;
					}
				}
				HX_STACK_LINE(293)
				{
					HX_STACK_LINE(293)
					Float _y = vectors->__get(i).StaticCast< ::phoenix::Vector >()->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(293)
					closestVector->y = _y;
					HX_STACK_LINE(293)
					if ((closestVector->_construct)){
						HX_STACK_LINE(293)
						closestVector->y;
					}
					else{
						HX_STACK_LINE(293)
						if (((bool((closestVector->listen_y != null())) && bool(!(closestVector->ignore_listeners))))){
							HX_STACK_LINE(293)
							closestVector->listen_y(_y);
						}
						HX_STACK_LINE(293)
						closestVector->y;
					}
				}
			}
		}
	}
	HX_STACK_LINE(299)
	Float _g4 = (closestVector->x - circle->get_x());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(299)
	normalAxis = ::phoenix::Vector_obj::__new(_g4,(closestVector->y - circle->get_y()),null(),null());
	HX_STACK_LINE(300)
	{
		HX_STACK_LINE(300)
		Float v = ::Math_obj::sqrt((((normalAxis->x * normalAxis->x) + (normalAxis->y * normalAxis->y)) + (normalAxis->z * normalAxis->z)));		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(300)
		if (((v != (int)0))){
			HX_STACK_LINE(300)
			Float _x = (Float(normalAxis->x) / Float(v));		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(300)
			Float _y = (Float(normalAxis->y) / Float(v));		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(300)
			Float _z = (Float(normalAxis->z) / Float(v));		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(300)
			bool prev = normalAxis->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(300)
			normalAxis->ignore_listeners = true;
			HX_STACK_LINE(300)
			{
				HX_STACK_LINE(300)
				normalAxis->x = _x;
				HX_STACK_LINE(300)
				if ((normalAxis->_construct)){
					HX_STACK_LINE(300)
					normalAxis->x;
				}
				else{
					HX_STACK_LINE(300)
					if (((bool((normalAxis->listen_x != null())) && bool(!(normalAxis->ignore_listeners))))){
						HX_STACK_LINE(300)
						normalAxis->listen_x(_x);
					}
					HX_STACK_LINE(300)
					normalAxis->x;
				}
			}
			HX_STACK_LINE(300)
			{
				HX_STACK_LINE(300)
				normalAxis->y = _y;
				HX_STACK_LINE(300)
				if ((normalAxis->_construct)){
					HX_STACK_LINE(300)
					normalAxis->y;
				}
				else{
					HX_STACK_LINE(300)
					if (((bool((normalAxis->listen_y != null())) && bool(!(normalAxis->ignore_listeners))))){
						HX_STACK_LINE(300)
						normalAxis->listen_y(_y);
					}
					HX_STACK_LINE(300)
					normalAxis->y;
				}
			}
			HX_STACK_LINE(300)
			{
				HX_STACK_LINE(300)
				normalAxis->z = _z;
				HX_STACK_LINE(300)
				if ((normalAxis->_construct)){
					HX_STACK_LINE(300)
					normalAxis->z;
				}
				else{
					HX_STACK_LINE(300)
					if (((bool((normalAxis->listen_z != null())) && bool(!(normalAxis->ignore_listeners))))){
						HX_STACK_LINE(300)
						normalAxis->listen_z(_z);
					}
					HX_STACK_LINE(300)
					normalAxis->z;
				}
			}
			HX_STACK_LINE(300)
			normalAxis->ignore_listeners = prev;
			HX_STACK_LINE(300)
			if (((bool((normalAxis->listen_x != null())) && bool(!(normalAxis->ignore_listeners))))){
				HX_STACK_LINE(300)
				normalAxis->listen_x(normalAxis->x);
			}
			HX_STACK_LINE(300)
			if (((bool((normalAxis->listen_y != null())) && bool(!(normalAxis->ignore_listeners))))){
				HX_STACK_LINE(300)
				normalAxis->listen_y(normalAxis->y);
			}
			HX_STACK_LINE(300)
			if (((bool((normalAxis->listen_z != null())) && bool(!(normalAxis->ignore_listeners))))){
				HX_STACK_LINE(300)
				normalAxis->listen_z(normalAxis->z);
			}
			HX_STACK_LINE(300)
			normalAxis;
		}
		else{
			HX_STACK_LINE(300)
			bool prev = normalAxis->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(300)
			normalAxis->ignore_listeners = true;
			HX_STACK_LINE(300)
			{
				HX_STACK_LINE(300)
				normalAxis->x = (int)0;
				HX_STACK_LINE(300)
				if ((normalAxis->_construct)){
					HX_STACK_LINE(300)
					normalAxis->x;
				}
				else{
					HX_STACK_LINE(300)
					if (((bool((normalAxis->listen_x != null())) && bool(!(normalAxis->ignore_listeners))))){
						HX_STACK_LINE(300)
						normalAxis->listen_x((int)0);
					}
					HX_STACK_LINE(300)
					normalAxis->x;
				}
			}
			HX_STACK_LINE(300)
			{
				HX_STACK_LINE(300)
				normalAxis->y = (int)0;
				HX_STACK_LINE(300)
				if ((normalAxis->_construct)){
					HX_STACK_LINE(300)
					normalAxis->y;
				}
				else{
					HX_STACK_LINE(300)
					if (((bool((normalAxis->listen_y != null())) && bool(!(normalAxis->ignore_listeners))))){
						HX_STACK_LINE(300)
						normalAxis->listen_y((int)0);
					}
					HX_STACK_LINE(300)
					normalAxis->y;
				}
			}
			HX_STACK_LINE(300)
			{
				HX_STACK_LINE(300)
				normalAxis->z = (int)0;
				HX_STACK_LINE(300)
				if ((normalAxis->_construct)){
					HX_STACK_LINE(300)
					normalAxis->z;
				}
				else{
					HX_STACK_LINE(300)
					if (((bool((normalAxis->listen_z != null())) && bool(!(normalAxis->ignore_listeners))))){
						HX_STACK_LINE(300)
						normalAxis->listen_z((int)0);
					}
					HX_STACK_LINE(300)
					normalAxis->z;
				}
			}
			HX_STACK_LINE(300)
			normalAxis->ignore_listeners = prev;
			HX_STACK_LINE(300)
			if (((bool((normalAxis->listen_x != null())) && bool(!(normalAxis->ignore_listeners))))){
				HX_STACK_LINE(300)
				normalAxis->listen_x(normalAxis->x);
			}
			HX_STACK_LINE(300)
			if (((bool((normalAxis->listen_y != null())) && bool(!(normalAxis->ignore_listeners))))){
				HX_STACK_LINE(300)
				normalAxis->listen_y(normalAxis->y);
			}
			HX_STACK_LINE(300)
			if (((bool((normalAxis->listen_z != null())) && bool(!(normalAxis->ignore_listeners))))){
				HX_STACK_LINE(300)
				normalAxis->listen_z(normalAxis->z);
			}
			HX_STACK_LINE(300)
			normalAxis;
		}
		HX_STACK_LINE(300)
		normalAxis;
	}
	HX_STACK_LINE(303)
	{
		HX_STACK_LINE(303)
		::phoenix::Vector other = vectors->__get((int)0).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(other,"other");
		HX_STACK_LINE(303)
		min1 = (((normalAxis->x * other->x) + (normalAxis->y * other->y)) + (normalAxis->z * other->z));
	}
	HX_STACK_LINE(304)
	max1 = min1;
	HX_STACK_LINE(306)
	{
		HX_STACK_LINE(306)
		int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(306)
		int _g2 = vectors->length;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(306)
		while(((_g1 < _g2))){
			HX_STACK_LINE(306)
			int j = (_g1)++;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(307)
			{
				HX_STACK_LINE(307)
				::phoenix::Vector other = vectors->__get(j).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(307)
				test = (((normalAxis->x * other->x) + (normalAxis->y * other->y)) + (normalAxis->z * other->z));
			}
			HX_STACK_LINE(308)
			if (((test < min1))){
				HX_STACK_LINE(309)
				min1 = test;
			}
			HX_STACK_LINE(311)
			if (((test > max1))){
				HX_STACK_LINE(312)
				max1 = test;
			}
		}
	}
	HX_STACK_LINE(317)
	max2 = circle->get_transformedRadius();
	HX_STACK_LINE(318)
	hx::SubEq(min2,circle->get_transformedRadius());
	HX_STACK_LINE(321)
	offset = (((normalAxis->x * vectorOffset->x) + (normalAxis->y * vectorOffset->y)) + (normalAxis->z * vectorOffset->z));
	HX_STACK_LINE(322)
	hx::AddEq(min1,offset);
	HX_STACK_LINE(323)
	hx::AddEq(max1,offset);
	HX_STACK_LINE(326)
	test1 = (min1 - max2);
	HX_STACK_LINE(327)
	test2 = (min2 - max1);
	HX_STACK_LINE(329)
	if (((bool((test1 > (int)0)) || bool((test2 > (int)0))))){
		HX_STACK_LINE(330)
		return null();
	}
	HX_STACK_LINE(334)
	distMin = -(((max2 - min1)));
	HX_STACK_LINE(335)
	if ((flip)){
		HX_STACK_LINE(335)
		hx::MultEq(distMin,(int)-1);
	}
	HX_STACK_LINE(336)
	if (((::Math_obj::abs(distMin) < shortestDistance))){
		HX_STACK_LINE(337)
		collisionData->unitVector = normalAxis;
		HX_STACK_LINE(338)
		collisionData->overlap = distMin;
		HX_STACK_LINE(339)
		shortestDistance = ::Math_obj::abs(distMin);
	}
	HX_STACK_LINE(343)
	{
		HX_STACK_LINE(343)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(343)
		int _g2 = vectors->length;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(343)
		while(((_g1 < _g2))){
			HX_STACK_LINE(343)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(345)
			normalAxis = ::luxe::collision::Collision_obj::findNormalAxis(vectors,i);
			HX_STACK_LINE(348)
			{
				HX_STACK_LINE(348)
				::phoenix::Vector other = vectors->__get((int)0).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(348)
				min1 = (((normalAxis->x * other->x) + (normalAxis->y * other->y)) + (normalAxis->z * other->z));
			}
			HX_STACK_LINE(349)
			max1 = min1;
			HX_STACK_LINE(352)
			{
				HX_STACK_LINE(352)
				int _g3 = (int)1;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(352)
				int _g21 = vectors->length;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(352)
				while(((_g3 < _g21))){
					HX_STACK_LINE(352)
					int j = (_g3)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(353)
					{
						HX_STACK_LINE(353)
						::phoenix::Vector other = vectors->__get(j).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(353)
						test = (((normalAxis->x * other->x) + (normalAxis->y * other->y)) + (normalAxis->z * other->z));
					}
					HX_STACK_LINE(354)
					if (((test < min1))){
						HX_STACK_LINE(355)
						min1 = test;
					}
					HX_STACK_LINE(357)
					if (((test > max1))){
						HX_STACK_LINE(358)
						max1 = test;
					}
				}
			}
			HX_STACK_LINE(363)
			max2 = circle->get_transformedRadius();
			HX_STACK_LINE(364)
			min2 = -(circle->get_transformedRadius());
			HX_STACK_LINE(367)
			offset = (((normalAxis->x * vectorOffset->x) + (normalAxis->y * vectorOffset->y)) + (normalAxis->z * vectorOffset->z));
			HX_STACK_LINE(368)
			hx::AddEq(min1,offset);
			HX_STACK_LINE(369)
			hx::AddEq(max1,offset);
			HX_STACK_LINE(372)
			test1 = (min1 - max2);
			HX_STACK_LINE(373)
			test2 = (min2 - max1);
			HX_STACK_LINE(375)
			if (((bool((test1 > (int)0)) || bool((test2 > (int)0))))){
				HX_STACK_LINE(378)
				return null();
			}
			HX_STACK_LINE(382)
			distMin = -(((max2 - min1)));
			HX_STACK_LINE(383)
			if ((flip)){
				HX_STACK_LINE(383)
				hx::MultEq(distMin,(int)-1);
			}
			HX_STACK_LINE(384)
			if (((::Math_obj::abs(distMin) < shortestDistance))){
				HX_STACK_LINE(385)
				collisionData->unitVector = normalAxis;
				HX_STACK_LINE(386)
				collisionData->overlap = distMin;
				HX_STACK_LINE(387)
				shortestDistance = ::Math_obj::abs(distMin);
			}
		}
	}
	HX_STACK_LINE(394)
	if ((flip)){
		HX_STACK_LINE(394)
		collisionData->shape2 = polygon;
	}
	else{
		HX_STACK_LINE(394)
		collisionData->shape2 = circle;
	}
	HX_STACK_LINE(395)
	if ((flip)){
		HX_STACK_LINE(395)
		collisionData->shape1 = circle;
	}
	else{
		HX_STACK_LINE(395)
		collisionData->shape1 = polygon;
	}
	HX_STACK_LINE(396)
	collisionData->separation = ::phoenix::Vector_obj::__new((-(collisionData->unitVector->x) * collisionData->overlap),(-(collisionData->unitVector->y) * collisionData->overlap),null(),null());
	HX_STACK_LINE(398)
	if ((flip)){
		HX_STACK_LINE(398)
		collisionData->unitVector->invert();
	}
	HX_STACK_LINE(399)
	return collisionData;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Collision_obj,checkCircleVsPolygon,return )

::luxe::collision::CollisionData Collision_obj::checkCircles( ::luxe::collision::shapes::Circle circle1,::luxe::collision::shapes::Circle circle2){
	HX_STACK_FRAME("luxe.collision.Collision","checkCircles",0x050dea4b,"luxe.collision.Collision.checkCircles","luxe/collision/Collision.hx",404,0x1f361322)
	HX_STACK_ARG(circle1,"circle1")
	HX_STACK_ARG(circle2,"circle2")
	HX_STACK_LINE(406)
	Float _g = circle1->get_transformedRadius();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(406)
	Float totalRadius = (_g + circle2->get_transformedRadius());		HX_STACK_VAR(totalRadius,"totalRadius");
	HX_STACK_LINE(407)
	Float _g1 = circle1->get_x();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(407)
	Float _g2 = (_g1 - circle2->get_x());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(407)
	Float _g3 = circle1->get_x();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(407)
	Float _g4 = (_g2 * ((_g3 - circle2->get_x())));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(407)
	Float _g5 = circle1->get_y();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(407)
	Float _g6 = (_g5 - circle2->get_y());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(407)
	Float _g7 = circle1->get_y();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(407)
	Float distanceSquared = (_g4 + (_g6 * ((_g7 - circle2->get_y()))));		HX_STACK_VAR(distanceSquared,"distanceSquared");
	HX_STACK_LINE(409)
	if (((distanceSquared < (totalRadius * totalRadius)))){
		HX_STACK_LINE(410)
		Float difference = (totalRadius - ::Math_obj::sqrt(distanceSquared));		HX_STACK_VAR(difference,"difference");
		HX_STACK_LINE(411)
		::luxe::collision::CollisionData collisionData = ::luxe::collision::CollisionData_obj::__new();		HX_STACK_VAR(collisionData,"collisionData");
		HX_STACK_LINE(412)
		collisionData->shape1 = circle1;
		HX_STACK_LINE(413)
		collisionData->shape2 = circle2;
		HX_STACK_LINE(414)
		Float _g8 = circle1->get_x();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(414)
		Float _g9 = (_g8 - circle2->get_x());		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(414)
		Float _g10 = circle1->get_y();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(414)
		collisionData->unitVector = ::phoenix::Vector_obj::__new(_g9,(_g10 - circle2->get_y()),null(),null());
		HX_STACK_LINE(415)
		{
			HX_STACK_LINE(415)
			::phoenix::Vector _this = collisionData->unitVector;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(415)
			{
				HX_STACK_LINE(415)
				Float v = ::Math_obj::sqrt((((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z)));		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(415)
				if (((v != (int)0))){
					HX_STACK_LINE(415)
					Float _x = (Float(_this->x) / Float(v));		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(415)
					Float _y = (Float(_this->y) / Float(v));		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(415)
					Float _z = (Float(_this->z) / Float(v));		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(415)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(415)
					_this->ignore_listeners = true;
					HX_STACK_LINE(415)
					{
						HX_STACK_LINE(415)
						_this->x = _x;
						HX_STACK_LINE(415)
						if ((_this->_construct)){
							HX_STACK_LINE(415)
							_this->x;
						}
						else{
							HX_STACK_LINE(415)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(415)
								_this->listen_x(_x);
							}
							HX_STACK_LINE(415)
							_this->x;
						}
					}
					HX_STACK_LINE(415)
					{
						HX_STACK_LINE(415)
						_this->y = _y;
						HX_STACK_LINE(415)
						if ((_this->_construct)){
							HX_STACK_LINE(415)
							_this->y;
						}
						else{
							HX_STACK_LINE(415)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(415)
								_this->listen_y(_y);
							}
							HX_STACK_LINE(415)
							_this->y;
						}
					}
					HX_STACK_LINE(415)
					{
						HX_STACK_LINE(415)
						_this->z = _z;
						HX_STACK_LINE(415)
						if ((_this->_construct)){
							HX_STACK_LINE(415)
							_this->z;
						}
						else{
							HX_STACK_LINE(415)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(415)
								_this->listen_z(_z);
							}
							HX_STACK_LINE(415)
							_this->z;
						}
					}
					HX_STACK_LINE(415)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(415)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(415)
						_this->listen_x(_this->x);
					}
					HX_STACK_LINE(415)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(415)
						_this->listen_y(_this->y);
					}
					HX_STACK_LINE(415)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(415)
						_this->listen_z(_this->z);
					}
					HX_STACK_LINE(415)
					_this;
				}
				else{
					HX_STACK_LINE(415)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(415)
					_this->ignore_listeners = true;
					HX_STACK_LINE(415)
					{
						HX_STACK_LINE(415)
						_this->x = (int)0;
						HX_STACK_LINE(415)
						if ((_this->_construct)){
							HX_STACK_LINE(415)
							_this->x;
						}
						else{
							HX_STACK_LINE(415)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(415)
								_this->listen_x((int)0);
							}
							HX_STACK_LINE(415)
							_this->x;
						}
					}
					HX_STACK_LINE(415)
					{
						HX_STACK_LINE(415)
						_this->y = (int)0;
						HX_STACK_LINE(415)
						if ((_this->_construct)){
							HX_STACK_LINE(415)
							_this->y;
						}
						else{
							HX_STACK_LINE(415)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(415)
								_this->listen_y((int)0);
							}
							HX_STACK_LINE(415)
							_this->y;
						}
					}
					HX_STACK_LINE(415)
					{
						HX_STACK_LINE(415)
						_this->z = (int)0;
						HX_STACK_LINE(415)
						if ((_this->_construct)){
							HX_STACK_LINE(415)
							_this->z;
						}
						else{
							HX_STACK_LINE(415)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(415)
								_this->listen_z((int)0);
							}
							HX_STACK_LINE(415)
							_this->z;
						}
					}
					HX_STACK_LINE(415)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(415)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(415)
						_this->listen_x(_this->x);
					}
					HX_STACK_LINE(415)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(415)
						_this->listen_y(_this->y);
					}
					HX_STACK_LINE(415)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(415)
						_this->listen_z(_this->z);
					}
					HX_STACK_LINE(415)
					_this;
				}
				HX_STACK_LINE(415)
				_this;
			}
		}
		HX_STACK_LINE(416)
		collisionData->separation = ::phoenix::Vector_obj::__new((collisionData->unitVector->x * difference),(collisionData->unitVector->y * difference),null(),null());
		HX_STACK_LINE(418)
		{
			HX_STACK_LINE(418)
			::phoenix::Vector _this = collisionData->separation;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(418)
			collisionData->overlap = ::Math_obj::sqrt((((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z)));
		}
		HX_STACK_LINE(419)
		return collisionData;
	}
	HX_STACK_LINE(422)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Collision_obj,checkCircles,return )

::luxe::collision::CollisionData Collision_obj::checkPolygons( ::luxe::collision::shapes::Polygon polygon1,::luxe::collision::shapes::Polygon polygon2,bool flip){
	HX_STACK_FRAME("luxe.collision.Collision","checkPolygons",0x8995c5d1,"luxe.collision.Collision.checkPolygons","luxe/collision/Collision.hx",427,0x1f361322)
	HX_STACK_ARG(polygon1,"polygon1")
	HX_STACK_ARG(polygon2,"polygon2")
	HX_STACK_ARG(flip,"flip")
	HX_STACK_LINE(429)
	Float test1;		HX_STACK_VAR(test1,"test1");
	HX_STACK_LINE(430)
	Float test2;		HX_STACK_VAR(test2,"test2");
	HX_STACK_LINE(431)
	Float testNum;		HX_STACK_VAR(testNum,"testNum");
	HX_STACK_LINE(432)
	Float min1;		HX_STACK_VAR(min1,"min1");
	HX_STACK_LINE(433)
	Float max1;		HX_STACK_VAR(max1,"max1");
	HX_STACK_LINE(434)
	Float min2;		HX_STACK_VAR(min2,"min2");
	HX_STACK_LINE(435)
	Float max2;		HX_STACK_VAR(max2,"max2");
	HX_STACK_LINE(436)
	::phoenix::Vector axis;		HX_STACK_VAR(axis,"axis");
	HX_STACK_LINE(437)
	Float offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(438)
	Array< ::Dynamic > vectors1;		HX_STACK_VAR(vectors1,"vectors1");
	HX_STACK_LINE(439)
	Array< ::Dynamic > vectors2;		HX_STACK_VAR(vectors2,"vectors2");
	HX_STACK_LINE(440)
	Float shortestDistance = (int)1073741823;		HX_STACK_VAR(shortestDistance,"shortestDistance");
	HX_STACK_LINE(441)
	::luxe::collision::CollisionData collisionData = ::luxe::collision::CollisionData_obj::__new();		HX_STACK_VAR(collisionData,"collisionData");
	HX_STACK_LINE(442)
	vectors1 = polygon1->get_transformedVertices()->copy();
	HX_STACK_LINE(443)
	vectors2 = polygon2->get_transformedVertices()->copy();
	HX_STACK_LINE(445)
	if (((vectors1->length == (int)2))){
		HX_STACK_LINE(446)
		::phoenix::Vector temp = ::phoenix::Vector_obj::__new(-(((vectors1->__get((int)1).StaticCast< ::phoenix::Vector >()->y - vectors1->__get((int)0).StaticCast< ::phoenix::Vector >()->y))),(vectors1->__get((int)1).StaticCast< ::phoenix::Vector >()->x - vectors1->__get((int)0).StaticCast< ::phoenix::Vector >()->x),null(),null());		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(447)
		{
			HX_STACK_LINE(447)
			{
				HX_STACK_LINE(447)
				Float value = ::Math_obj::min(0.0000000001,::Math_obj::sqrt((((temp->x * temp->x) + (temp->y * temp->y)) + (temp->z * temp->z))));		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(447)
				{
					HX_STACK_LINE(447)
					::phoenix::Vector _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(447)
					{
						HX_STACK_LINE(447)
						Float v = ::Math_obj::sqrt((((temp->x * temp->x) + (temp->y * temp->y)) + (temp->z * temp->z)));		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(447)
						if (((v != (int)0))){
							HX_STACK_LINE(447)
							Float _x = (Float(temp->x) / Float(v));		HX_STACK_VAR(_x,"_x");
							HX_STACK_LINE(447)
							Float _y = (Float(temp->y) / Float(v));		HX_STACK_VAR(_y,"_y");
							HX_STACK_LINE(447)
							Float _z = (Float(temp->z) / Float(v));		HX_STACK_VAR(_z,"_z");
							HX_STACK_LINE(447)
							bool prev = temp->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(447)
							temp->ignore_listeners = true;
							HX_STACK_LINE(447)
							{
								HX_STACK_LINE(447)
								temp->x = _x;
								HX_STACK_LINE(447)
								if ((temp->_construct)){
									HX_STACK_LINE(447)
									temp->x;
								}
								else{
									HX_STACK_LINE(447)
									if (((bool((temp->listen_x != null())) && bool(!(temp->ignore_listeners))))){
										HX_STACK_LINE(447)
										temp->listen_x(_x);
									}
									HX_STACK_LINE(447)
									temp->x;
								}
							}
							HX_STACK_LINE(447)
							{
								HX_STACK_LINE(447)
								temp->y = _y;
								HX_STACK_LINE(447)
								if ((temp->_construct)){
									HX_STACK_LINE(447)
									temp->y;
								}
								else{
									HX_STACK_LINE(447)
									if (((bool((temp->listen_y != null())) && bool(!(temp->ignore_listeners))))){
										HX_STACK_LINE(447)
										temp->listen_y(_y);
									}
									HX_STACK_LINE(447)
									temp->y;
								}
							}
							HX_STACK_LINE(447)
							{
								HX_STACK_LINE(447)
								temp->z = _z;
								HX_STACK_LINE(447)
								if ((temp->_construct)){
									HX_STACK_LINE(447)
									temp->z;
								}
								else{
									HX_STACK_LINE(447)
									if (((bool((temp->listen_z != null())) && bool(!(temp->ignore_listeners))))){
										HX_STACK_LINE(447)
										temp->listen_z(_z);
									}
									HX_STACK_LINE(447)
									temp->z;
								}
							}
							HX_STACK_LINE(447)
							temp->ignore_listeners = prev;
							HX_STACK_LINE(447)
							if (((bool((temp->listen_x != null())) && bool(!(temp->ignore_listeners))))){
								HX_STACK_LINE(447)
								temp->listen_x(temp->x);
							}
							HX_STACK_LINE(447)
							if (((bool((temp->listen_y != null())) && bool(!(temp->ignore_listeners))))){
								HX_STACK_LINE(447)
								temp->listen_y(temp->y);
							}
							HX_STACK_LINE(447)
							if (((bool((temp->listen_z != null())) && bool(!(temp->ignore_listeners))))){
								HX_STACK_LINE(447)
								temp->listen_z(temp->z);
							}
							HX_STACK_LINE(447)
							temp;
						}
						else{
							HX_STACK_LINE(447)
							bool prev = temp->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(447)
							temp->ignore_listeners = true;
							HX_STACK_LINE(447)
							{
								HX_STACK_LINE(447)
								temp->x = (int)0;
								HX_STACK_LINE(447)
								if ((temp->_construct)){
									HX_STACK_LINE(447)
									temp->x;
								}
								else{
									HX_STACK_LINE(447)
									if (((bool((temp->listen_x != null())) && bool(!(temp->ignore_listeners))))){
										HX_STACK_LINE(447)
										temp->listen_x((int)0);
									}
									HX_STACK_LINE(447)
									temp->x;
								}
							}
							HX_STACK_LINE(447)
							{
								HX_STACK_LINE(447)
								temp->y = (int)0;
								HX_STACK_LINE(447)
								if ((temp->_construct)){
									HX_STACK_LINE(447)
									temp->y;
								}
								else{
									HX_STACK_LINE(447)
									if (((bool((temp->listen_y != null())) && bool(!(temp->ignore_listeners))))){
										HX_STACK_LINE(447)
										temp->listen_y((int)0);
									}
									HX_STACK_LINE(447)
									temp->y;
								}
							}
							HX_STACK_LINE(447)
							{
								HX_STACK_LINE(447)
								temp->z = (int)0;
								HX_STACK_LINE(447)
								if ((temp->_construct)){
									HX_STACK_LINE(447)
									temp->z;
								}
								else{
									HX_STACK_LINE(447)
									if (((bool((temp->listen_z != null())) && bool(!(temp->ignore_listeners))))){
										HX_STACK_LINE(447)
										temp->listen_z((int)0);
									}
									HX_STACK_LINE(447)
									temp->z;
								}
							}
							HX_STACK_LINE(447)
							temp->ignore_listeners = prev;
							HX_STACK_LINE(447)
							if (((bool((temp->listen_x != null())) && bool(!(temp->ignore_listeners))))){
								HX_STACK_LINE(447)
								temp->listen_x(temp->x);
							}
							HX_STACK_LINE(447)
							if (((bool((temp->listen_y != null())) && bool(!(temp->ignore_listeners))))){
								HX_STACK_LINE(447)
								temp->listen_y(temp->y);
							}
							HX_STACK_LINE(447)
							if (((bool((temp->listen_z != null())) && bool(!(temp->ignore_listeners))))){
								HX_STACK_LINE(447)
								temp->listen_z(temp->z);
							}
							HX_STACK_LINE(447)
							temp;
						}
						HX_STACK_LINE(447)
						_this = temp;
					}
					HX_STACK_LINE(447)
					{
						HX_STACK_LINE(447)
						Float _x = (_this->x * value);		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(447)
						Float _y = (_this->y * value);		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(447)
						Float _z = (_this->z * value);		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(447)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(447)
						_this->ignore_listeners = true;
						HX_STACK_LINE(447)
						{
							HX_STACK_LINE(447)
							_this->x = _x;
							HX_STACK_LINE(447)
							if ((_this->_construct)){
								HX_STACK_LINE(447)
								_this->x;
							}
							else{
								HX_STACK_LINE(447)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(447)
									_this->listen_x(_x);
								}
								HX_STACK_LINE(447)
								_this->x;
							}
						}
						HX_STACK_LINE(447)
						{
							HX_STACK_LINE(447)
							_this->y = _y;
							HX_STACK_LINE(447)
							if ((_this->_construct)){
								HX_STACK_LINE(447)
								_this->y;
							}
							else{
								HX_STACK_LINE(447)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(447)
									_this->listen_y(_y);
								}
								HX_STACK_LINE(447)
								_this->y;
							}
						}
						HX_STACK_LINE(447)
						{
							HX_STACK_LINE(447)
							_this->z = _z;
							HX_STACK_LINE(447)
							if ((_this->_construct)){
								HX_STACK_LINE(447)
								_this->z;
							}
							else{
								HX_STACK_LINE(447)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(447)
									_this->listen_z(_z);
								}
								HX_STACK_LINE(447)
								_this->z;
							}
						}
						HX_STACK_LINE(447)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(447)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(447)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(447)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(447)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(447)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(447)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(447)
						_this;
					}
					HX_STACK_LINE(447)
					_this;
				}
				HX_STACK_LINE(447)
				value;
			}
			HX_STACK_LINE(447)
			temp;
		}
		struct _Function_2_1{
			inline static ::phoenix::Vector Block( Array< ::Dynamic > &vectors1,::phoenix::Vector &temp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/collision/Collision.hx",448,0x1f361322)
				{
					HX_STACK_LINE(448)
					::phoenix::Vector _this = vectors1->__get((int)1).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(448)
					if (((temp == null()))){
						HX_STACK_LINE(448)
						HX_STACK_DO_THROW(HX_CSTRING("vector.add other was handed in as null"));
					}
					HX_STACK_LINE(448)
					{
						HX_STACK_LINE(448)
						Float _x = (_this->x + temp->x);		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(448)
						Float _y = (_this->y + temp->y);		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(448)
						Float _z = (_this->z + temp->z);		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(448)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(448)
						_this->ignore_listeners = true;
						HX_STACK_LINE(448)
						{
							HX_STACK_LINE(448)
							_this->x = _x;
							HX_STACK_LINE(448)
							if ((_this->_construct)){
								HX_STACK_LINE(448)
								_this->x;
							}
							else{
								HX_STACK_LINE(448)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(448)
									_this->listen_x(_x);
								}
								HX_STACK_LINE(448)
								_this->x;
							}
						}
						HX_STACK_LINE(448)
						{
							HX_STACK_LINE(448)
							_this->y = _y;
							HX_STACK_LINE(448)
							if ((_this->_construct)){
								HX_STACK_LINE(448)
								_this->y;
							}
							else{
								HX_STACK_LINE(448)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(448)
									_this->listen_y(_y);
								}
								HX_STACK_LINE(448)
								_this->y;
							}
						}
						HX_STACK_LINE(448)
						{
							HX_STACK_LINE(448)
							_this->z = _z;
							HX_STACK_LINE(448)
							if ((_this->_construct)){
								HX_STACK_LINE(448)
								_this->z;
							}
							else{
								HX_STACK_LINE(448)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(448)
									_this->listen_z(_z);
								}
								HX_STACK_LINE(448)
								_this->z;
							}
						}
						HX_STACK_LINE(448)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(448)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(448)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(448)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(448)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(448)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(448)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(448)
						_this;
					}
					HX_STACK_LINE(448)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(448)
		vectors1->push(_Function_2_1::Block(vectors1,temp));
	}
	HX_STACK_LINE(450)
	if (((vectors2->length == (int)2))){
		HX_STACK_LINE(451)
		::phoenix::Vector temp = ::phoenix::Vector_obj::__new(-(((vectors2->__get((int)1).StaticCast< ::phoenix::Vector >()->y - vectors2->__get((int)0).StaticCast< ::phoenix::Vector >()->y))),(vectors2->__get((int)1).StaticCast< ::phoenix::Vector >()->x - vectors2->__get((int)0).StaticCast< ::phoenix::Vector >()->x),null(),null());		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(452)
		{
			HX_STACK_LINE(452)
			{
				HX_STACK_LINE(452)
				Float value = ::Math_obj::min(0.0000000001,::Math_obj::sqrt((((temp->x * temp->x) + (temp->y * temp->y)) + (temp->z * temp->z))));		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(452)
				{
					HX_STACK_LINE(452)
					::phoenix::Vector _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(452)
					{
						HX_STACK_LINE(452)
						Float v = ::Math_obj::sqrt((((temp->x * temp->x) + (temp->y * temp->y)) + (temp->z * temp->z)));		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(452)
						if (((v != (int)0))){
							HX_STACK_LINE(452)
							Float _x = (Float(temp->x) / Float(v));		HX_STACK_VAR(_x,"_x");
							HX_STACK_LINE(452)
							Float _y = (Float(temp->y) / Float(v));		HX_STACK_VAR(_y,"_y");
							HX_STACK_LINE(452)
							Float _z = (Float(temp->z) / Float(v));		HX_STACK_VAR(_z,"_z");
							HX_STACK_LINE(452)
							bool prev = temp->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(452)
							temp->ignore_listeners = true;
							HX_STACK_LINE(452)
							{
								HX_STACK_LINE(452)
								temp->x = _x;
								HX_STACK_LINE(452)
								if ((temp->_construct)){
									HX_STACK_LINE(452)
									temp->x;
								}
								else{
									HX_STACK_LINE(452)
									if (((bool((temp->listen_x != null())) && bool(!(temp->ignore_listeners))))){
										HX_STACK_LINE(452)
										temp->listen_x(_x);
									}
									HX_STACK_LINE(452)
									temp->x;
								}
							}
							HX_STACK_LINE(452)
							{
								HX_STACK_LINE(452)
								temp->y = _y;
								HX_STACK_LINE(452)
								if ((temp->_construct)){
									HX_STACK_LINE(452)
									temp->y;
								}
								else{
									HX_STACK_LINE(452)
									if (((bool((temp->listen_y != null())) && bool(!(temp->ignore_listeners))))){
										HX_STACK_LINE(452)
										temp->listen_y(_y);
									}
									HX_STACK_LINE(452)
									temp->y;
								}
							}
							HX_STACK_LINE(452)
							{
								HX_STACK_LINE(452)
								temp->z = _z;
								HX_STACK_LINE(452)
								if ((temp->_construct)){
									HX_STACK_LINE(452)
									temp->z;
								}
								else{
									HX_STACK_LINE(452)
									if (((bool((temp->listen_z != null())) && bool(!(temp->ignore_listeners))))){
										HX_STACK_LINE(452)
										temp->listen_z(_z);
									}
									HX_STACK_LINE(452)
									temp->z;
								}
							}
							HX_STACK_LINE(452)
							temp->ignore_listeners = prev;
							HX_STACK_LINE(452)
							if (((bool((temp->listen_x != null())) && bool(!(temp->ignore_listeners))))){
								HX_STACK_LINE(452)
								temp->listen_x(temp->x);
							}
							HX_STACK_LINE(452)
							if (((bool((temp->listen_y != null())) && bool(!(temp->ignore_listeners))))){
								HX_STACK_LINE(452)
								temp->listen_y(temp->y);
							}
							HX_STACK_LINE(452)
							if (((bool((temp->listen_z != null())) && bool(!(temp->ignore_listeners))))){
								HX_STACK_LINE(452)
								temp->listen_z(temp->z);
							}
							HX_STACK_LINE(452)
							temp;
						}
						else{
							HX_STACK_LINE(452)
							bool prev = temp->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(452)
							temp->ignore_listeners = true;
							HX_STACK_LINE(452)
							{
								HX_STACK_LINE(452)
								temp->x = (int)0;
								HX_STACK_LINE(452)
								if ((temp->_construct)){
									HX_STACK_LINE(452)
									temp->x;
								}
								else{
									HX_STACK_LINE(452)
									if (((bool((temp->listen_x != null())) && bool(!(temp->ignore_listeners))))){
										HX_STACK_LINE(452)
										temp->listen_x((int)0);
									}
									HX_STACK_LINE(452)
									temp->x;
								}
							}
							HX_STACK_LINE(452)
							{
								HX_STACK_LINE(452)
								temp->y = (int)0;
								HX_STACK_LINE(452)
								if ((temp->_construct)){
									HX_STACK_LINE(452)
									temp->y;
								}
								else{
									HX_STACK_LINE(452)
									if (((bool((temp->listen_y != null())) && bool(!(temp->ignore_listeners))))){
										HX_STACK_LINE(452)
										temp->listen_y((int)0);
									}
									HX_STACK_LINE(452)
									temp->y;
								}
							}
							HX_STACK_LINE(452)
							{
								HX_STACK_LINE(452)
								temp->z = (int)0;
								HX_STACK_LINE(452)
								if ((temp->_construct)){
									HX_STACK_LINE(452)
									temp->z;
								}
								else{
									HX_STACK_LINE(452)
									if (((bool((temp->listen_z != null())) && bool(!(temp->ignore_listeners))))){
										HX_STACK_LINE(452)
										temp->listen_z((int)0);
									}
									HX_STACK_LINE(452)
									temp->z;
								}
							}
							HX_STACK_LINE(452)
							temp->ignore_listeners = prev;
							HX_STACK_LINE(452)
							if (((bool((temp->listen_x != null())) && bool(!(temp->ignore_listeners))))){
								HX_STACK_LINE(452)
								temp->listen_x(temp->x);
							}
							HX_STACK_LINE(452)
							if (((bool((temp->listen_y != null())) && bool(!(temp->ignore_listeners))))){
								HX_STACK_LINE(452)
								temp->listen_y(temp->y);
							}
							HX_STACK_LINE(452)
							if (((bool((temp->listen_z != null())) && bool(!(temp->ignore_listeners))))){
								HX_STACK_LINE(452)
								temp->listen_z(temp->z);
							}
							HX_STACK_LINE(452)
							temp;
						}
						HX_STACK_LINE(452)
						_this = temp;
					}
					HX_STACK_LINE(452)
					{
						HX_STACK_LINE(452)
						Float _x = (_this->x * value);		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(452)
						Float _y = (_this->y * value);		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(452)
						Float _z = (_this->z * value);		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(452)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(452)
						_this->ignore_listeners = true;
						HX_STACK_LINE(452)
						{
							HX_STACK_LINE(452)
							_this->x = _x;
							HX_STACK_LINE(452)
							if ((_this->_construct)){
								HX_STACK_LINE(452)
								_this->x;
							}
							else{
								HX_STACK_LINE(452)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(452)
									_this->listen_x(_x);
								}
								HX_STACK_LINE(452)
								_this->x;
							}
						}
						HX_STACK_LINE(452)
						{
							HX_STACK_LINE(452)
							_this->y = _y;
							HX_STACK_LINE(452)
							if ((_this->_construct)){
								HX_STACK_LINE(452)
								_this->y;
							}
							else{
								HX_STACK_LINE(452)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(452)
									_this->listen_y(_y);
								}
								HX_STACK_LINE(452)
								_this->y;
							}
						}
						HX_STACK_LINE(452)
						{
							HX_STACK_LINE(452)
							_this->z = _z;
							HX_STACK_LINE(452)
							if ((_this->_construct)){
								HX_STACK_LINE(452)
								_this->z;
							}
							else{
								HX_STACK_LINE(452)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(452)
									_this->listen_z(_z);
								}
								HX_STACK_LINE(452)
								_this->z;
							}
						}
						HX_STACK_LINE(452)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(452)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(452)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(452)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(452)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(452)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(452)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(452)
						_this;
					}
					HX_STACK_LINE(452)
					_this;
				}
				HX_STACK_LINE(452)
				value;
			}
			HX_STACK_LINE(452)
			temp;
		}
		struct _Function_2_1{
			inline static ::phoenix::Vector Block( Array< ::Dynamic > &vectors2,::phoenix::Vector &temp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","luxe/collision/Collision.hx",453,0x1f361322)
				{
					HX_STACK_LINE(453)
					::phoenix::Vector _this = vectors2->__get((int)1).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(453)
					if (((temp == null()))){
						HX_STACK_LINE(453)
						HX_STACK_DO_THROW(HX_CSTRING("vector.add other was handed in as null"));
					}
					HX_STACK_LINE(453)
					{
						HX_STACK_LINE(453)
						Float _x = (_this->x + temp->x);		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(453)
						Float _y = (_this->y + temp->y);		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(453)
						Float _z = (_this->z + temp->z);		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(453)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(453)
						_this->ignore_listeners = true;
						HX_STACK_LINE(453)
						{
							HX_STACK_LINE(453)
							_this->x = _x;
							HX_STACK_LINE(453)
							if ((_this->_construct)){
								HX_STACK_LINE(453)
								_this->x;
							}
							else{
								HX_STACK_LINE(453)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(453)
									_this->listen_x(_x);
								}
								HX_STACK_LINE(453)
								_this->x;
							}
						}
						HX_STACK_LINE(453)
						{
							HX_STACK_LINE(453)
							_this->y = _y;
							HX_STACK_LINE(453)
							if ((_this->_construct)){
								HX_STACK_LINE(453)
								_this->y;
							}
							else{
								HX_STACK_LINE(453)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(453)
									_this->listen_y(_y);
								}
								HX_STACK_LINE(453)
								_this->y;
							}
						}
						HX_STACK_LINE(453)
						{
							HX_STACK_LINE(453)
							_this->z = _z;
							HX_STACK_LINE(453)
							if ((_this->_construct)){
								HX_STACK_LINE(453)
								_this->z;
							}
							else{
								HX_STACK_LINE(453)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(453)
									_this->listen_z(_z);
								}
								HX_STACK_LINE(453)
								_this->z;
							}
						}
						HX_STACK_LINE(453)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(453)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(453)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(453)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(453)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(453)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(453)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(453)
						_this;
					}
					HX_STACK_LINE(453)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(453)
		vectors2->push(_Function_2_1::Block(vectors2,temp));
	}
	HX_STACK_LINE(457)
	{
		HX_STACK_LINE(457)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(457)
		int _g = vectors1->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(457)
		while(((_g1 < _g))){
			HX_STACK_LINE(457)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(460)
			axis = ::luxe::collision::Collision_obj::findNormalAxis(vectors1,i);
			HX_STACK_LINE(463)
			{
				HX_STACK_LINE(463)
				::phoenix::Vector other = vectors1->__get((int)0).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(463)
				min1 = (((axis->x * other->x) + (axis->y * other->y)) + (axis->z * other->z));
			}
			HX_STACK_LINE(464)
			max1 = min1;
			HX_STACK_LINE(466)
			{
				HX_STACK_LINE(466)
				int _g3 = (int)1;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(466)
				int _g2 = vectors1->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(466)
				while(((_g3 < _g2))){
					HX_STACK_LINE(466)
					int j = (_g3)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(467)
					{
						HX_STACK_LINE(467)
						::phoenix::Vector other = vectors1->__get(j).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(467)
						testNum = (((axis->x * other->x) + (axis->y * other->y)) + (axis->z * other->z));
					}
					HX_STACK_LINE(468)
					if (((testNum < min1))){
						HX_STACK_LINE(469)
						min1 = testNum;
					}
					HX_STACK_LINE(471)
					if (((testNum > max1))){
						HX_STACK_LINE(472)
						max1 = testNum;
					}
				}
			}
			HX_STACK_LINE(477)
			{
				HX_STACK_LINE(477)
				::phoenix::Vector other = vectors2->__get((int)0).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(477)
				min2 = (((axis->x * other->x) + (axis->y * other->y)) + (axis->z * other->z));
			}
			HX_STACK_LINE(478)
			max2 = min2;
			HX_STACK_LINE(480)
			{
				HX_STACK_LINE(480)
				int _g3 = (int)1;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(480)
				int _g2 = vectors2->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(480)
				while(((_g3 < _g2))){
					HX_STACK_LINE(480)
					int j = (_g3)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(481)
					{
						HX_STACK_LINE(481)
						::phoenix::Vector other = vectors2->__get(j).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(481)
						testNum = (((axis->x * other->x) + (axis->y * other->y)) + (axis->z * other->z));
					}
					HX_STACK_LINE(482)
					if (((testNum < min2))){
						HX_STACK_LINE(483)
						min2 = testNum;
					}
					HX_STACK_LINE(485)
					if (((testNum > max2))){
						HX_STACK_LINE(486)
						max2 = testNum;
					}
				}
			}
			HX_STACK_LINE(491)
			test1 = (min1 - max2);
			HX_STACK_LINE(492)
			test2 = (min2 - max1);
			HX_STACK_LINE(493)
			if (((bool((test1 > (int)0)) || bool((test2 > (int)0))))){
				HX_STACK_LINE(494)
				return null();
			}
			HX_STACK_LINE(497)
			Float distMin = -(((max2 - min1)));		HX_STACK_VAR(distMin,"distMin");
			HX_STACK_LINE(498)
			if ((flip)){
				HX_STACK_LINE(498)
				hx::MultEq(distMin,(int)-1);
			}
			HX_STACK_LINE(499)
			if (((::Math_obj::abs(distMin) < shortestDistance))){
				HX_STACK_LINE(500)
				collisionData->unitVector = axis;
				HX_STACK_LINE(501)
				collisionData->overlap = distMin;
				HX_STACK_LINE(502)
				shortestDistance = ::Math_obj::abs(distMin);
			}
		}
	}
	HX_STACK_LINE(508)
	if ((flip)){
		HX_STACK_LINE(508)
		collisionData->shape1 = polygon2;
	}
	else{
		HX_STACK_LINE(508)
		collisionData->shape1 = polygon1;
	}
	HX_STACK_LINE(509)
	if ((flip)){
		HX_STACK_LINE(509)
		collisionData->shape2 = polygon1;
	}
	else{
		HX_STACK_LINE(509)
		collisionData->shape2 = polygon2;
	}
	HX_STACK_LINE(510)
	collisionData->separation = ::phoenix::Vector_obj::__new((-(collisionData->unitVector->x) * collisionData->overlap),(-(collisionData->unitVector->y) * collisionData->overlap),null(),null());
	HX_STACK_LINE(512)
	if ((flip)){
		HX_STACK_LINE(512)
		collisionData->unitVector->invert();
	}
	HX_STACK_LINE(514)
	return collisionData;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Collision_obj,checkPolygons,return )

::phoenix::Vector Collision_obj::findNormalAxis( Array< ::Dynamic > vertices,int index){
	HX_STACK_FRAME("luxe.collision.Collision","findNormalAxis",0xf9e1f9d1,"luxe.collision.Collision.findNormalAxis","luxe/collision/Collision.hx",519,0x1f361322)
	HX_STACK_ARG(vertices,"vertices")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(521)
	::phoenix::Vector vector1 = vertices->__get(index).StaticCast< ::phoenix::Vector >();		HX_STACK_VAR(vector1,"vector1");
	HX_STACK_LINE(522)
	::phoenix::Vector vector2;		HX_STACK_VAR(vector2,"vector2");
	HX_STACK_LINE(522)
	if (((index >= (vertices->length - (int)1)))){
		HX_STACK_LINE(522)
		vector2 = vertices->__get((int)0).StaticCast< ::phoenix::Vector >();
	}
	else{
		HX_STACK_LINE(522)
		vector2 = vertices->__get((index + (int)1)).StaticCast< ::phoenix::Vector >();
	}
	HX_STACK_LINE(524)
	::phoenix::Vector normalAxis = ::phoenix::Vector_obj::__new(-(((vector2->y - vector1->y))),(vector2->x - vector1->x),null(),null());		HX_STACK_VAR(normalAxis,"normalAxis");
	HX_STACK_LINE(525)
	{
		HX_STACK_LINE(525)
		Float v = ::Math_obj::sqrt((((normalAxis->x * normalAxis->x) + (normalAxis->y * normalAxis->y)) + (normalAxis->z * normalAxis->z)));		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(525)
		if (((v != (int)0))){
			HX_STACK_LINE(525)
			Float _x = (Float(normalAxis->x) / Float(v));		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(525)
			Float _y = (Float(normalAxis->y) / Float(v));		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(525)
			Float _z = (Float(normalAxis->z) / Float(v));		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(525)
			bool prev = normalAxis->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(525)
			normalAxis->ignore_listeners = true;
			HX_STACK_LINE(525)
			{
				HX_STACK_LINE(525)
				normalAxis->x = _x;
				HX_STACK_LINE(525)
				if ((normalAxis->_construct)){
					HX_STACK_LINE(525)
					normalAxis->x;
				}
				else{
					HX_STACK_LINE(525)
					if (((bool((normalAxis->listen_x != null())) && bool(!(normalAxis->ignore_listeners))))){
						HX_STACK_LINE(525)
						normalAxis->listen_x(_x);
					}
					HX_STACK_LINE(525)
					normalAxis->x;
				}
			}
			HX_STACK_LINE(525)
			{
				HX_STACK_LINE(525)
				normalAxis->y = _y;
				HX_STACK_LINE(525)
				if ((normalAxis->_construct)){
					HX_STACK_LINE(525)
					normalAxis->y;
				}
				else{
					HX_STACK_LINE(525)
					if (((bool((normalAxis->listen_y != null())) && bool(!(normalAxis->ignore_listeners))))){
						HX_STACK_LINE(525)
						normalAxis->listen_y(_y);
					}
					HX_STACK_LINE(525)
					normalAxis->y;
				}
			}
			HX_STACK_LINE(525)
			{
				HX_STACK_LINE(525)
				normalAxis->z = _z;
				HX_STACK_LINE(525)
				if ((normalAxis->_construct)){
					HX_STACK_LINE(525)
					normalAxis->z;
				}
				else{
					HX_STACK_LINE(525)
					if (((bool((normalAxis->listen_z != null())) && bool(!(normalAxis->ignore_listeners))))){
						HX_STACK_LINE(525)
						normalAxis->listen_z(_z);
					}
					HX_STACK_LINE(525)
					normalAxis->z;
				}
			}
			HX_STACK_LINE(525)
			normalAxis->ignore_listeners = prev;
			HX_STACK_LINE(525)
			if (((bool((normalAxis->listen_x != null())) && bool(!(normalAxis->ignore_listeners))))){
				HX_STACK_LINE(525)
				normalAxis->listen_x(normalAxis->x);
			}
			HX_STACK_LINE(525)
			if (((bool((normalAxis->listen_y != null())) && bool(!(normalAxis->ignore_listeners))))){
				HX_STACK_LINE(525)
				normalAxis->listen_y(normalAxis->y);
			}
			HX_STACK_LINE(525)
			if (((bool((normalAxis->listen_z != null())) && bool(!(normalAxis->ignore_listeners))))){
				HX_STACK_LINE(525)
				normalAxis->listen_z(normalAxis->z);
			}
			HX_STACK_LINE(525)
			normalAxis;
		}
		else{
			HX_STACK_LINE(525)
			bool prev = normalAxis->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(525)
			normalAxis->ignore_listeners = true;
			HX_STACK_LINE(525)
			{
				HX_STACK_LINE(525)
				normalAxis->x = (int)0;
				HX_STACK_LINE(525)
				if ((normalAxis->_construct)){
					HX_STACK_LINE(525)
					normalAxis->x;
				}
				else{
					HX_STACK_LINE(525)
					if (((bool((normalAxis->listen_x != null())) && bool(!(normalAxis->ignore_listeners))))){
						HX_STACK_LINE(525)
						normalAxis->listen_x((int)0);
					}
					HX_STACK_LINE(525)
					normalAxis->x;
				}
			}
			HX_STACK_LINE(525)
			{
				HX_STACK_LINE(525)
				normalAxis->y = (int)0;
				HX_STACK_LINE(525)
				if ((normalAxis->_construct)){
					HX_STACK_LINE(525)
					normalAxis->y;
				}
				else{
					HX_STACK_LINE(525)
					if (((bool((normalAxis->listen_y != null())) && bool(!(normalAxis->ignore_listeners))))){
						HX_STACK_LINE(525)
						normalAxis->listen_y((int)0);
					}
					HX_STACK_LINE(525)
					normalAxis->y;
				}
			}
			HX_STACK_LINE(525)
			{
				HX_STACK_LINE(525)
				normalAxis->z = (int)0;
				HX_STACK_LINE(525)
				if ((normalAxis->_construct)){
					HX_STACK_LINE(525)
					normalAxis->z;
				}
				else{
					HX_STACK_LINE(525)
					if (((bool((normalAxis->listen_z != null())) && bool(!(normalAxis->ignore_listeners))))){
						HX_STACK_LINE(525)
						normalAxis->listen_z((int)0);
					}
					HX_STACK_LINE(525)
					normalAxis->z;
				}
			}
			HX_STACK_LINE(525)
			normalAxis->ignore_listeners = prev;
			HX_STACK_LINE(525)
			if (((bool((normalAxis->listen_x != null())) && bool(!(normalAxis->ignore_listeners))))){
				HX_STACK_LINE(525)
				normalAxis->listen_x(normalAxis->x);
			}
			HX_STACK_LINE(525)
			if (((bool((normalAxis->listen_y != null())) && bool(!(normalAxis->ignore_listeners))))){
				HX_STACK_LINE(525)
				normalAxis->listen_y(normalAxis->y);
			}
			HX_STACK_LINE(525)
			if (((bool((normalAxis->listen_z != null())) && bool(!(normalAxis->ignore_listeners))))){
				HX_STACK_LINE(525)
				normalAxis->listen_z(normalAxis->z);
			}
			HX_STACK_LINE(525)
			normalAxis;
		}
		HX_STACK_LINE(525)
		normalAxis;
	}
	HX_STACK_LINE(527)
	return normalAxis;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Collision_obj,findNormalAxis,return )

::phoenix::Vector Collision_obj::swap( Float a,Float b){
	HX_STACK_FRAME("luxe.collision.Collision","swap",0x507cb063,"luxe.collision.Collision.swap","luxe/collision/Collision.hx",532,0x1f361322)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(534)
	Float t = a;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(536)
	a = b;
	HX_STACK_LINE(537)
	b = t;
	HX_STACK_LINE(539)
	return ::phoenix::Vector_obj::__new(a,b,null(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Collision_obj,swap,return )


Collision_obj::Collision_obj()
{
}

Dynamic Collision_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ray_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"test") ) { return test_dyn(); }
		if (HX_FIELD_EQ(inName,"swap") ) { return swap_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testShapes") ) { return testShapes_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pointInPoly") ) { return pointInPoly_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkCircles") ) { return checkCircles_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bresenhamLine") ) { return bresenhamLine_dyn(); }
		if (HX_FIELD_EQ(inName,"checkPolygons") ) { return checkPolygons_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"testCircleLine") ) { return testCircleLine_dyn(); }
		if (HX_FIELD_EQ(inName,"findNormalAxis") ) { return findNormalAxis_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"checkCircleVsPolygon") ) { return checkCircleVsPolygon_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Collision_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Collision_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("test"),
	HX_CSTRING("testShapes"),
	HX_CSTRING("ray"),
	HX_CSTRING("testCircleLine"),
	HX_CSTRING("pointInPoly"),
	HX_CSTRING("bresenhamLine"),
	HX_CSTRING("checkCircleVsPolygon"),
	HX_CSTRING("checkCircles"),
	HX_CSTRING("checkPolygons"),
	HX_CSTRING("findNormalAxis"),
	HX_CSTRING("swap"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Collision_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Collision_obj::__mClass,"__mClass");
};

#endif

Class Collision_obj::__mClass;

void Collision_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.collision.Collision"), hx::TCanCast< Collision_obj> ,sStaticFields,sMemberFields,
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

void Collision_obj::__boot()
{
}

} // end namespace luxe
} // end namespace collision
