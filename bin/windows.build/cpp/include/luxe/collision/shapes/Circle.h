#ifndef INCLUDED_luxe_collision_shapes_Circle
#define INCLUDED_luxe_collision_shapes_Circle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/collision/shapes/Shape.h>
HX_DECLARE_CLASS3(luxe,collision,shapes,Circle)
HX_DECLARE_CLASS3(luxe,collision,shapes,Shape)
namespace luxe{
namespace collision{
namespace shapes{


class HXCPP_CLASS_ATTRIBUTES  Circle_obj : public ::luxe::collision::shapes::Shape_obj{
	public:
		typedef ::luxe::collision::shapes::Shape_obj super;
		typedef Circle_obj OBJ_;
		Circle_obj();
		Void __construct(Float x,Float y,Float radius);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Circle_obj > __new(Float x,Float y,Float radius);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Circle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Circle"); }

		Float _radius;
		virtual Float get_radius( );
		Dynamic get_radius_dyn();

		virtual Float get_transformedRadius( );
		Dynamic get_transformedRadius_dyn();

};

} // end namespace luxe
} // end namespace collision
} // end namespace shapes

#endif /* INCLUDED_luxe_collision_shapes_Circle */ 
