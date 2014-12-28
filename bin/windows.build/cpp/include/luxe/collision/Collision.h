#ifndef INCLUDED_luxe_collision_Collision
#define INCLUDED_luxe_collision_Collision

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,collision,Collision)
HX_DECLARE_CLASS2(luxe,collision,CollisionData)
HX_DECLARE_CLASS3(luxe,collision,shapes,Circle)
HX_DECLARE_CLASS3(luxe,collision,shapes,Polygon)
HX_DECLARE_CLASS3(luxe,collision,shapes,Shape)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace collision{


class HXCPP_CLASS_ATTRIBUTES  Collision_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Collision_obj OBJ_;
		Collision_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Collision_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Collision_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Collision"); }

		static ::luxe::collision::CollisionData test( ::luxe::collision::shapes::Shape shape1,::luxe::collision::shapes::Shape shape2);
		static Dynamic test_dyn();

		static Array< ::Dynamic > testShapes( ::luxe::collision::shapes::Shape shape1,Array< ::Dynamic > shapes);
		static Dynamic testShapes_dyn();

		static bool ray( ::phoenix::Vector lineStart,::phoenix::Vector lineEnd,Array< ::Dynamic > shapes);
		static Dynamic ray_dyn();

		static bool testCircleLine( ::luxe::collision::shapes::Circle circle,::phoenix::Vector lineStart,::phoenix::Vector lineEnd);
		static Dynamic testCircleLine_dyn();

		static bool pointInPoly( ::phoenix::Vector point,::luxe::collision::shapes::Polygon poly);
		static Dynamic pointInPoly_dyn();

		static Array< ::Dynamic > bresenhamLine( ::phoenix::Vector start,::phoenix::Vector end);
		static Dynamic bresenhamLine_dyn();

		static ::luxe::collision::CollisionData checkCircleVsPolygon( ::luxe::collision::shapes::Circle circle,::luxe::collision::shapes::Polygon polygon,bool flip);
		static Dynamic checkCircleVsPolygon_dyn();

		static ::luxe::collision::CollisionData checkCircles( ::luxe::collision::shapes::Circle circle1,::luxe::collision::shapes::Circle circle2);
		static Dynamic checkCircles_dyn();

		static ::luxe::collision::CollisionData checkPolygons( ::luxe::collision::shapes::Polygon polygon1,::luxe::collision::shapes::Polygon polygon2,bool flip);
		static Dynamic checkPolygons_dyn();

		static ::phoenix::Vector findNormalAxis( Array< ::Dynamic > vertices,int index);
		static Dynamic findNormalAxis_dyn();

		static ::phoenix::Vector swap( Float a,Float b);
		static Dynamic swap_dyn();

};

} // end namespace luxe
} // end namespace collision

#endif /* INCLUDED_luxe_collision_Collision */ 
