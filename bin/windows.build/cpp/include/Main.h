#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <luxe/Game.h>
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS1(luxe,Emitter)
HX_DECLARE_CLASS1(luxe,Entity)
HX_DECLARE_CLASS1(luxe,Game)
HX_DECLARE_CLASS1(luxe,Objects)
HX_DECLARE_CLASS1(luxe,Sprite)
HX_DECLARE_CLASS1(luxe,Visual)


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public ::luxe::Game_obj{
	public:
		typedef ::luxe::Game_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Main"); }

		::luxe::Sprite paddle;
		::luxe::Sprite ball0;
		Array< ::Dynamic > collisionGroup;
		bool once;
		virtual Dynamic config( Dynamic config);

		virtual Void ready( );

		virtual Void onmousemove( Dynamic event);

		virtual Void onkeyup( Dynamic event);

		virtual Void update( Float delta);

		virtual Void collisionSystem( );
		Dynamic collisionSystem_dyn();

		virtual bool theseCollide( ::luxe::Sprite spr1,::luxe::Sprite spr2);
		Dynamic theseCollide_dyn();

};


#endif /* INCLUDED_Main */ 
