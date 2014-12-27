#include <hxcpp.h>

#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_luxe_Emitter
#include <luxe/Emitter.h>
#endif
#ifndef INCLUDED_luxe_Entity
#include <luxe/Entity.h>
#endif
#ifndef INCLUDED_luxe_Game
#include <luxe/Game.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Screen
#include <luxe/Screen.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_phoenix_Color
#include <phoenix/Color.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
#ifndef INCLUDED_snow_input_Keycodes
#include <snow/input/Keycodes.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",15,0x087e5c05)
{
	HX_STACK_LINE(15)
	super::__construct();
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::ready( ){
{
		HX_STACK_FRAME("Main","ready",0x62ede68e,"Main.ready","Main.hx",20,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		::phoenix::Vector _g = ::Luxe_obj::get_screen()->get_mid();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		::phoenix::Color _g1 = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)16777215);		HX_STACK_VAR(_g1,"_g1");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Color &_g1,::phoenix::Vector &_g){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",22,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("paddle"),false);
					__result->Add(HX_CSTRING("pos") , _g,false);
					__result->Add(HX_CSTRING("color") , _g1,false);
					__result->Add(HX_CSTRING("size") , ::phoenix::Vector_obj::__new((int)128,(int)32,null(),null()),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(22)
		this->paddle = ::luxe::Sprite_obj::__new(_Function_1_1::Block(_g1,_g));
		HX_STACK_LINE(31)
		::phoenix::Vector _g2 = ::Luxe_obj::get_screen()->get_mid();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(32)
		::phoenix::Color _g3 = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)16777215);		HX_STACK_VAR(_g3,"_g3");
		struct _Function_1_2{
			inline static Dynamic Block( ::phoenix::Vector &_g2,::phoenix::Color &_g3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",29,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("ball1"),false);
					__result->Add(HX_CSTRING("pos") , _g2,false);
					__result->Add(HX_CSTRING("color") , _g3,false);
					__result->Add(HX_CSTRING("size") , ::phoenix::Vector_obj::__new((int)16,(int)16,null(),null()),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(29)
		this->ball1 = ::luxe::Sprite_obj::__new(_Function_1_2::Block(_g2,_g3));
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			::phoenix::Vector _this = this->paddle->get_pos();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(36)
			Float _y = (::Luxe_obj::get_screen()->h - (int)16);		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(36)
			_this->y = _y;
			HX_STACK_LINE(36)
			if ((_this->_construct)){
				HX_STACK_LINE(36)
				_this->y;
			}
			else{
				HX_STACK_LINE(36)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(36)
					_this->listen_y(_y);
				}
				HX_STACK_LINE(36)
				_this->y;
			}
		}
	}
return null();
}


Void Main_obj::onmousemove( Dynamic event){
{
		HX_STACK_FRAME("Main","onmousemove",0x89532b22,"Main.onmousemove","Main.hx",42,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(42)
		::phoenix::Vector _this = this->paddle->get_pos();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(42)
		Float _x = event->__Field(HX_CSTRING("pos"),true)->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(42)
		_this->x = _x;
		HX_STACK_LINE(42)
		if ((_this->_construct)){
			HX_STACK_LINE(42)
			_this->x;
		}
		else{
			HX_STACK_LINE(42)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(42)
				_this->listen_x(_x);
			}
			HX_STACK_LINE(42)
			_this->x;
		}
	}
return null();
}


Void Main_obj::onkeyup( Dynamic event){
{
		HX_STACK_FRAME("Main","onkeyup",0x46406b26,"Main.onkeyup","Main.hx",48,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(48)
		if (((event->__Field(HX_CSTRING("keycode"),true) == ::snow::input::Keycodes_obj::escape))){
			HX_STACK_LINE(49)
			::Luxe_obj::shutdown();
		}
	}
return null();
}


Void Main_obj::update( Float delta){
{
		HX_STACK_FRAME("Main","update",0xb7afa57e,"Main.update","Main.hx",54,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
	}
return null();
}



Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(paddle,"paddle");
	HX_MARK_MEMBER_NAME(ball1,"ball1");
	::luxe::Game_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(paddle,"paddle");
	HX_VISIT_MEMBER_NAME(ball1,"ball1");
	::luxe::Game_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ball1") ) { return ball1; }
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paddle") ) { return paddle; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ball1") ) { ball1=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paddle") ) { paddle=inValue.Cast< ::luxe::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("paddle"));
	outFields->push(HX_CSTRING("ball1"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Main_obj,paddle),HX_CSTRING("paddle")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Main_obj,ball1),HX_CSTRING("ball1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("paddle"),
	HX_CSTRING("ball1"),
	HX_CSTRING("ready"),
	HX_CSTRING("onmousemove"),
	HX_CSTRING("onkeyup"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
}

