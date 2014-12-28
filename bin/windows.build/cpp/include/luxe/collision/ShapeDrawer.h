#ifndef INCLUDED_luxe_collision_ShapeDrawer
#define INCLUDED_luxe_collision_ShapeDrawer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,collision,ShapeDrawer)
HX_DECLARE_CLASS3(luxe,collision,shapes,Circle)
HX_DECLARE_CLASS3(luxe,collision,shapes,Polygon)
HX_DECLARE_CLASS3(luxe,collision,shapes,Shape)
HX_DECLARE_CLASS1(phoenix,Color)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace collision{


class HXCPP_CLASS_ATTRIBUTES  ShapeDrawer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShapeDrawer_obj OBJ_;
		ShapeDrawer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ShapeDrawer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShapeDrawer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ShapeDrawer"); }

		virtual Void drawLine( ::phoenix::Vector p0,::phoenix::Vector p1,::phoenix::Color color,Dynamic immediate);
		Dynamic drawLine_dyn();

		virtual Void drawShape( ::luxe::collision::shapes::Shape shape);
		Dynamic drawShape_dyn();

		virtual Void drawPolygon( ::luxe::collision::shapes::Polygon poly,::phoenix::Color color,Dynamic immediate);
		Dynamic drawPolygon_dyn();

		virtual Void drawVector( ::phoenix::Vector v,::phoenix::Vector start,::phoenix::Color color,Dynamic immediate);
		Dynamic drawVector_dyn();

		virtual Void drawCircle( ::luxe::collision::shapes::Circle circle,::phoenix::Color color,Dynamic immediate);
		Dynamic drawCircle_dyn();

		virtual Void drawVertList( Array< ::Dynamic > _verts,::phoenix::Color color,Dynamic immediate);
		Dynamic drawVertList_dyn();

};

} // end namespace luxe
} // end namespace collision

#endif /* INCLUDED_luxe_collision_ShapeDrawer */ 
