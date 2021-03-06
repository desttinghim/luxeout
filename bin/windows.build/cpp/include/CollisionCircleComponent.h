#ifndef INCLUDED_CollisionCircleComponent
#define INCLUDED_CollisionCircleComponent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/Component.h>
HX_DECLARE_CLASS0(CollisionCircleComponent)
HX_DECLARE_CLASS1(luxe,Component)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,ID)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)
HX_DECLARE_CLASS3(luxe,collision,shapes,Circle)
HX_DECLARE_CLASS3(luxe,collision,shapes,Shape)


class HXCPP_CLASS_ATTRIBUTES  CollisionCircleComponent_obj : public ::luxe::Component_obj{
	public:
		typedef ::luxe::Component_obj super;
		typedef CollisionCircleComponent_obj OBJ_;
		CollisionCircleComponent_obj();
		Void __construct(Dynamic _options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CollisionCircleComponent_obj > __new(Dynamic _options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CollisionCircleComponent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CollisionCircleComponent"); }

		::luxe::Sprite sprite;
		::luxe::collision::shapes::Circle collisionCircle;
		virtual Void init( );

		virtual Void update( Float dt);

		virtual Void onreset( );

		virtual Void ondestroy( );

		virtual Void onremoved( );

};


#endif /* INCLUDED_CollisionCircleComponent */ 
