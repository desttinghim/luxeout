#ifndef INCLUDED_luxe_collision_shapes_Shape
#define INCLUDED_luxe_collision_shapes_Shape

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(luxe,collision,shapes,Shape)
HX_DECLARE_CLASS1(phoenix,Matrix)
HX_DECLARE_CLASS1(phoenix,Quaternion)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace collision{
namespace shapes{


class HXCPP_CLASS_ATTRIBUTES  Shape_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Shape_obj OBJ_;
		Shape_obj();
		Void __construct(Float _x,Float _y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Shape_obj > __new(Float _x,Float _y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shape_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Shape"); }

		bool active;
		::String name;
		Dynamic data;
		::haxe::ds::StringMap tags;
		::phoenix::Vector _position;
		Float _rotation;
		Float _rotation_radians;
		::phoenix::Quaternion _rotation_quat;
		::phoenix::Vector _scale;
		Float _scaleX;
		Float _scaleY;
		bool _transformed;
		::phoenix::Matrix _transformMatrix;
		Array< ::Dynamic > _transformedVertices;
		Array< ::Dynamic > _vertices;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void refresh_transform( );
		Dynamic refresh_transform_dyn();

		virtual ::phoenix::Vector get_position( );
		Dynamic get_position_dyn();

		virtual ::phoenix::Vector set_position( ::phoenix::Vector v);
		Dynamic set_position_dyn();

		virtual Float get_x( );
		Dynamic get_x_dyn();

		virtual Float set_x( Float x);
		Dynamic set_x_dyn();

		virtual Float get_y( );
		Dynamic get_y_dyn();

		virtual Float set_y( Float y);
		Dynamic set_y_dyn();

		virtual Float get_rotation( );
		Dynamic get_rotation_dyn();

		virtual Float set_rotation( Float v);
		Dynamic set_rotation_dyn();

		virtual Float get_scaleX( );
		Dynamic get_scaleX_dyn();

		virtual Float set_scaleX( Float scale);
		Dynamic set_scaleX_dyn();

		virtual Float get_scaleY( );
		Dynamic get_scaleY_dyn();

		virtual Float set_scaleY( Float scale);
		Dynamic set_scaleY_dyn();

		virtual Array< ::Dynamic > get_transformedVertices( );
		Dynamic get_transformedVertices_dyn();

		virtual Array< ::Dynamic > get_vertices( );
		Dynamic get_vertices_dyn();

};

} // end namespace luxe
} // end namespace collision
} // end namespace shapes

#endif /* INCLUDED_luxe_collision_shapes_Shape */ 
