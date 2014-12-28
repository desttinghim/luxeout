#ifndef INCLUDED_luxe_collision_CollisionData
#define INCLUDED_luxe_collision_CollisionData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(luxe,collision,CollisionData)
HX_DECLARE_CLASS3(luxe,collision,shapes,Shape)
HX_DECLARE_CLASS1(phoenix,Vector)
namespace luxe{
namespace collision{


class HXCPP_CLASS_ATTRIBUTES  CollisionData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CollisionData_obj OBJ_;
		CollisionData_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CollisionData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CollisionData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CollisionData"); }

		Float overlap;
		::phoenix::Vector separation;
		::luxe::collision::shapes::Shape shape1;
		::luxe::collision::shapes::Shape shape2;
		::phoenix::Vector unitVector;
};

} // end namespace luxe
} // end namespace collision

#endif /* INCLUDED_luxe_collision_CollisionData */ 
