#ifndef INCLUDED_luxe_collision_shapes_Polygon
#define INCLUDED_luxe_collision_shapes_Polygon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/collision/shapes/Shape.h>
HX_DECLARE_CLASS3(luxe,collision,shapes,Polygon)
HX_DECLARE_CLASS3(luxe,collision,shapes,Shape)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace collision{
namespace shapes{


class HXCPP_CLASS_ATTRIBUTES  Polygon_obj : public ::luxe::collision::shapes::Shape_obj{
	public:
		typedef ::luxe::collision::shapes::Shape_obj super;
		typedef Polygon_obj OBJ_;
		Polygon_obj();
		Void __construct(Float x,Float y,Array< ::Dynamic > vertices);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Polygon_obj > __new(Float x,Float y,Array< ::Dynamic > vertices);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Polygon_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Polygon"); }

		virtual Void destroy( );

		static ::luxe::collision::shapes::Polygon create( Float x,Float y,int sides,hx::Null< Float >  radius);
		static Dynamic create_dyn();

		static ::luxe::collision::shapes::Polygon rectangle( Float x,Float y,Float width,Float height,hx::Null< bool >  centered);
		static Dynamic rectangle_dyn();

		static ::luxe::collision::shapes::Polygon square( Float x,Float y,Float width,hx::Null< bool >  centered);
		static Dynamic square_dyn();

		static ::luxe::collision::shapes::Polygon triangle( Float x,Float y,Float radius);
		static Dynamic triangle_dyn();

};

} // end namespace luxe
} // end namespace collision
} // end namespace shapes

#endif /* INCLUDED_luxe_collision_shapes_Polygon */ 
