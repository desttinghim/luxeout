#include <hxcpp.h>

#ifndef INCLUDED_Destroyable
#include <Destroyable.h>
#endif
#ifndef INCLUDED_Hitbox
#include <Hitbox.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Luxe
#include <Luxe.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Movement
#include <Movement.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_luxe_Component
#include <luxe/Component.h>
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
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
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
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",18,0x087e5c05)
{
	HX_STACK_LINE(26)
	this->once = true;
	HX_STACK_LINE(24)
	this->collisionGroup = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(18)
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

Dynamic Main_obj::config( Dynamic config){
	HX_STACK_FRAME("Main","config",0xf87c7637,"Main.config","Main.hx",29,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(31)
	if (((config->__Field(HX_CSTRING("runtime"),true)->__Field(HX_CSTRING("window"),true) != null()))){
		HX_STACK_LINE(32)
		if (((config->__Field(HX_CSTRING("runtime"),true)->__Field(HX_CSTRING("window"),true)->__Field(HX_CSTRING("width"),true) != null()))){
			HX_STACK_LINE(33)
			config->__Field(HX_CSTRING("window"),true)->__FieldRef(HX_CSTRING("width")) = ::Std_obj::_int(config->__Field(HX_CSTRING("runtime"),true)->__Field(HX_CSTRING("window"),true)->__Field(HX_CSTRING("width"),true));
		}
		HX_STACK_LINE(35)
		if (((config->__Field(HX_CSTRING("runtime"),true)->__Field(HX_CSTRING("window"),true)->__Field(HX_CSTRING("height"),true) != null()))){
			HX_STACK_LINE(36)
			config->__Field(HX_CSTRING("window"),true)->__FieldRef(HX_CSTRING("height")) = ::Std_obj::_int(config->__Field(HX_CSTRING("runtime"),true)->__Field(HX_CSTRING("window"),true)->__Field(HX_CSTRING("height"),true));
		}
	}
	HX_STACK_LINE(40)
	config->__Field(HX_CSTRING("window"),true)->__FieldRef(HX_CSTRING("title")) = HX_CSTRING("Luxeout - A Breakout Clone in Luxe");
	HX_STACK_LINE(42)
	return config;
}


Void Main_obj::ready( ){
{
		HX_STACK_FRAME("Main","ready",0x62ede68e,"Main.ready","Main.hx",45,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		::phoenix::Vector _g = ::phoenix::Vector_obj::__new((int)-45,::Luxe_obj::get_screen()->get_mid()->y,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		::phoenix::Color _g1 = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)16777215);		HX_STACK_VAR(_g1,"_g1");
		struct _Function_1_1{
			inline static Dynamic Block( ::phoenix::Color &_g1,::phoenix::Vector &_g){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",47,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("borderleft"),false);
					__result->Add(HX_CSTRING("pos") , _g,false);
					__result->Add(HX_CSTRING("color") , _g1,false);
					__result->Add(HX_CSTRING("size") , ::phoenix::Vector_obj::__new((int)50,::Luxe_obj::get_screen()->h,null(),null()),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(47)
		::luxe::Sprite borderLeft = ::luxe::Sprite_obj::__new(_Function_1_1::Block(_g1,_g));		HX_STACK_VAR(borderLeft,"borderLeft");
		HX_STACK_LINE(55)
		::luxe::Screen _g2 = ::Luxe_obj::get_screen();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(55)
		::phoenix::Vector _g3 = ::phoenix::Vector_obj::__new((_g2->w + (int)45),::Luxe_obj::get_screen()->get_mid()->y,null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(56)
		::phoenix::Color _g4 = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)16777215);		HX_STACK_VAR(_g4,"_g4");
		struct _Function_1_2{
			inline static Dynamic Block( ::phoenix::Color &_g4,::phoenix::Vector &_g3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",53,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("borderright"),false);
					__result->Add(HX_CSTRING("pos") , _g3,false);
					__result->Add(HX_CSTRING("color") , _g4,false);
					__result->Add(HX_CSTRING("size") , ::phoenix::Vector_obj::__new((int)50,::Luxe_obj::get_screen()->h,null(),null()),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(53)
		::luxe::Sprite borderRight = ::luxe::Sprite_obj::__new(_Function_1_2::Block(_g4,_g3));		HX_STACK_VAR(borderRight,"borderRight");
		HX_STACK_LINE(61)
		::phoenix::Vector _g5 = ::phoenix::Vector_obj::__new(::Luxe_obj::get_screen()->get_mid()->x,(int)-45,null(),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(62)
		::phoenix::Color _g6 = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)16777215);		HX_STACK_VAR(_g6,"_g6");
		struct _Function_1_3{
			inline static Dynamic Block( ::phoenix::Vector &_g5,::phoenix::Color &_g6){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",59,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("bordertop"),false);
					__result->Add(HX_CSTRING("pos") , _g5,false);
					__result->Add(HX_CSTRING("color") , _g6,false);
					__result->Add(HX_CSTRING("size") , ::phoenix::Vector_obj::__new((::Luxe_obj::get_screen()->w * (int)3),(int)50,null(),null()),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(59)
		::luxe::Sprite borderTop = ::luxe::Sprite_obj::__new(_Function_1_3::Block(_g5,_g6));		HX_STACK_VAR(borderTop,"borderTop");
		HX_STACK_LINE(68)
		::phoenix::Vector _g7 = ::Luxe_obj::get_screen()->get_mid();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(69)
		::phoenix::Color _g8 = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)16777215);		HX_STACK_VAR(_g8,"_g8");
		struct _Function_1_4{
			inline static Dynamic Block( ::phoenix::Vector &_g7,::phoenix::Color &_g8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",66,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("paddle"),false);
					__result->Add(HX_CSTRING("pos") , _g7,false);
					__result->Add(HX_CSTRING("color") , _g8,false);
					__result->Add(HX_CSTRING("size") , ::phoenix::Vector_obj::__new((int)128,(int)16,null(),null()),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(66)
		this->paddle = ::luxe::Sprite_obj::__new(_Function_1_4::Block(_g7,_g8));
		HX_STACK_LINE(75)
		::phoenix::Vector _g9 = ::Luxe_obj::get_screen()->get_mid();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(76)
		::phoenix::Color _g10 = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)16777215);		HX_STACK_VAR(_g10,"_g10");
		struct _Function_1_5{
			inline static Dynamic Block( ::phoenix::Color &_g10,::phoenix::Vector &_g9){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",73,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , HX_CSTRING("ball0"),false);
					__result->Add(HX_CSTRING("pos") , _g9,false);
					__result->Add(HX_CSTRING("color") , _g10,false);
					__result->Add(HX_CSTRING("size") , ::phoenix::Vector_obj::__new((int)16,(int)16,null(),null()),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(73)
		this->ball0 = ::luxe::Sprite_obj::__new(_Function_1_5::Block(_g10,_g9));
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(80)
			while(((_g11 < (int)5))){
				HX_STACK_LINE(80)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(81)
					while(((_g12 < (int)5))){
						HX_STACK_LINE(81)
						int a = (_g12)++;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(84)
						::phoenix::Vector _g111 = ::phoenix::Vector_obj::__new((a * (int)64),((i * (int)16) + (int)32),null(),null());		HX_STACK_VAR(_g111,"_g111");
						HX_STACK_LINE(85)
						::phoenix::Color _g121 = ::phoenix::Color_obj::__new(null(),null(),null(),null())->rgb((int)16768477);		HX_STACK_VAR(_g121,"_g121");
						struct _Function_5_1{
							inline static Dynamic Block( int &i,::phoenix::Color &_g121,::phoenix::Vector &_g111,int &a){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",82,0x087e5c05)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("name") , (((HX_CSTRING("block") + i) + HX_CSTRING(".")) + a),false);
									__result->Add(HX_CSTRING("pos") , _g111,false);
									__result->Add(HX_CSTRING("color") , _g121,false);
									__result->Add(HX_CSTRING("size") , ::phoenix::Vector_obj::__new((int)64,(int)16,null(),null()),false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(82)
						::luxe::Sprite block = ::luxe::Sprite_obj::__new(_Function_5_1::Block(i,_g121,_g111,a));		HX_STACK_VAR(block,"block");
						HX_STACK_LINE(88)
						block->add(::Hitbox_obj::__new((int)64,(int)16,block));
						HX_STACK_LINE(89)
						block->add(::Destroyable_obj::__new());
						HX_STACK_LINE(90)
						this->collisionGroup->push(block);
					}
				}
			}
		}
		HX_STACK_LINE(94)
		int _g13 = ::Std_obj::_int(borderLeft->size->x);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(94)
		borderLeft->add(::Hitbox_obj::__new(_g13,::Std_obj::_int(borderLeft->size->y),borderLeft));
		HX_STACK_LINE(95)
		int _g14 = ::Std_obj::_int(borderRight->size->x);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(95)
		borderRight->add(::Hitbox_obj::__new(_g14,::Std_obj::_int(borderRight->size->y),borderRight));
		HX_STACK_LINE(96)
		int _g15 = ::Std_obj::_int(borderTop->size->x);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(96)
		borderTop->add(::Hitbox_obj::__new(_g15,::Std_obj::_int(borderTop->size->y),borderTop));
		HX_STACK_LINE(97)
		this->paddle->add(::Hitbox_obj::__new((int)128,(int)16,this->paddle));
		HX_STACK_LINE(98)
		this->ball0->add(::Hitbox_obj::__new((int)16,(int)16,this->ball0));
		HX_STACK_LINE(101)
		this->ball0->add(::Movement_obj::__new((int)0,(int)200,(int)250,this->ball0));
		HX_STACK_LINE(103)
		this->collisionGroup->push(this->paddle);
		HX_STACK_LINE(104)
		this->collisionGroup->push(this->ball0);
		HX_STACK_LINE(105)
		this->collisionGroup->push(borderLeft);
		HX_STACK_LINE(106)
		this->collisionGroup->push(borderRight);
		HX_STACK_LINE(107)
		this->collisionGroup->push(borderTop);
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			::phoenix::Vector _this = this->paddle->get_pos();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(109)
			Float _y = (::Luxe_obj::get_screen()->h - (int)8);		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(109)
			_this->y = _y;
			HX_STACK_LINE(109)
			if ((_this->_construct)){
				HX_STACK_LINE(109)
				_this->y;
			}
			else{
				HX_STACK_LINE(109)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(109)
					_this->listen_y(_y);
				}
				HX_STACK_LINE(109)
				_this->y;
			}
		}
	}
return null();
}


Void Main_obj::onmousemove( Dynamic event){
{
		HX_STACK_FRAME("Main","onmousemove",0x89532b22,"Main.onmousemove","Main.hx",114,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(114)
		::phoenix::Vector _this = this->paddle->get_pos();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(114)
		Float _x = event->__Field(HX_CSTRING("pos"),true)->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(114)
		_this->x = _x;
		HX_STACK_LINE(114)
		if ((_this->_construct)){
			HX_STACK_LINE(114)
			_this->x;
		}
		else{
			HX_STACK_LINE(114)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(114)
				_this->listen_x(_x);
			}
			HX_STACK_LINE(114)
			_this->x;
		}
	}
return null();
}


Void Main_obj::onkeyup( Dynamic event){
{
		HX_STACK_FRAME("Main","onkeyup",0x46406b26,"Main.onkeyup","Main.hx",120,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(120)
		if (((event->__Field(HX_CSTRING("keycode"),true) == ::snow::input::Keycodes_obj::escape))){
			HX_STACK_LINE(121)
			::Luxe_obj::shutdown();
		}
	}
return null();
}


Void Main_obj::update( Float delta){
{
		HX_STACK_FRAME("Main","update",0xb7afa57e,"Main.update","Main.hx",132,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(132)
		this->collisionSystem();
	}
return null();
}


Void Main_obj::collisionSystem( ){
{
		HX_STACK_FRAME("Main","collisionSystem",0x15515eec,"Main.collisionSystem","Main.hx",136,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		Array< ::Dynamic > collisions = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(collisions,"collisions");
		HX_STACK_LINE(139)
		Array< ::Dynamic > otherCollisions = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(otherCollisions,"otherCollisions");
		HX_STACK_LINE(141)
		{
			HX_STACK_LINE(141)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(141)
			Array< ::Dynamic > _g1 = this->collisionGroup;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(141)
			while(((_g < _g1->length))){
				HX_STACK_LINE(141)
				::luxe::Sprite i = _g1->__get(_g).StaticCast< ::luxe::Sprite >();		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(141)
				++(_g);
				HX_STACK_LINE(142)
				{
					HX_STACK_LINE(142)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(142)
					Array< ::Dynamic > _g3 = this->collisionGroup;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(142)
					while(((_g2 < _g3->length))){
						HX_STACK_LINE(142)
						::luxe::Sprite a = _g3->__get(_g2).StaticCast< ::luxe::Sprite >();		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(142)
						++(_g2);
						HX_STACK_LINE(143)
						if (((  ((this->theseCollide(i,a))) ? bool((i != a)) : bool(false) ))){
							HX_STACK_LINE(144)
							collisions->push(i);
							HX_STACK_LINE(145)
							otherCollisions->push(a);
							HX_STACK_LINE(146)
							::haxe::Log_obj::trace(HX_CSTRING("Collision!"),hx::SourceInfo(HX_CSTRING("Main.hx"),146,HX_CSTRING("Main"),HX_CSTRING("collisionSystem")));
						}
					}
				}
			}
		}
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(151)
			while(((_g < collisions->length))){
				HX_STACK_LINE(151)
				::luxe::Sprite i = collisions->__get(_g).StaticCast< ::luxe::Sprite >();		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(151)
				++(_g);
				HX_STACK_LINE(153)
				Array< bool > collisionSides = Array_obj< bool >::__new().Add(false).Add(false).Add(false).Add(false);		HX_STACK_VAR(collisionSides,"collisionSides");
				HX_STACK_LINE(154)
				::luxe::Sprite other = otherCollisions->__get(collisions->indexOf(i,null())).StaticCast< ::luxe::Sprite >();		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(155)
				Dynamic firstRect = i->get(HX_CSTRING("hitbox"),null())->__Field(HX_CSTRING("getHitbox"),true)();		HX_STACK_VAR(firstRect,"firstRect");
				HX_STACK_LINE(156)
				Dynamic secondRect = other->get(HX_CSTRING("hitbox"),null())->__Field(HX_CSTRING("getHitbox"),true)();		HX_STACK_VAR(secondRect,"secondRect");
				HX_STACK_LINE(157)
				collisionSides[(int)0] = secondRect->__Field(HX_CSTRING("point_inside"),true)(::phoenix::Vector_obj::__new((firstRect->__Field(HX_CSTRING("x"),true) + (Float(firstRect->__Field(HX_CSTRING("w"),true)) / Float((int)2))),firstRect->__Field(HX_CSTRING("y"),true),null(),null()));
				HX_STACK_LINE(158)
				collisionSides[(int)1] = secondRect->__Field(HX_CSTRING("point_inside"),true)(::phoenix::Vector_obj::__new((firstRect->__Field(HX_CSTRING("x"),true) + firstRect->__Field(HX_CSTRING("w"),true)),(firstRect->__Field(HX_CSTRING("y"),true) + (Float(firstRect->__Field(HX_CSTRING("h"),true)) / Float((int)2))),null(),null()));
				HX_STACK_LINE(159)
				collisionSides[(int)2] = secondRect->__Field(HX_CSTRING("point_inside"),true)(::phoenix::Vector_obj::__new((firstRect->__Field(HX_CSTRING("x"),true) + (Float(firstRect->__Field(HX_CSTRING("w"),true)) / Float((int)2))),(firstRect->__Field(HX_CSTRING("y"),true) + firstRect->__Field(HX_CSTRING("h"),true)),null(),null()));
				HX_STACK_LINE(160)
				collisionSides[(int)3] = secondRect->__Field(HX_CSTRING("point_inside"),true)(::phoenix::Vector_obj::__new(firstRect->__Field(HX_CSTRING("x"),true),(firstRect->__Field(HX_CSTRING("y"),true) + (Float(firstRect->__Field(HX_CSTRING("h"),true)) / Float((int)2))),null(),null()));

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				bool run(bool T){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","Main.hx",162,0x087e5c05)
					HX_STACK_ARG(T,"T")
					{
						HX_STACK_LINE(162)
						if (((T == true))){
							HX_STACK_LINE(162)
							return true;
						}
						else{
							HX_STACK_LINE(162)
							return false;
						}
						HX_STACK_LINE(162)
						return false;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(162)
				if (((collisionSides->filter( Dynamic(new _Function_3_1()))->length > (int)1))){
					HX_STACK_LINE(163)
					::haxe::Log_obj::trace(HX_CSTRING("WE'VE GONE TOO DEEP."),hx::SourceInfo(HX_CSTRING("Main.hx"),163,HX_CSTRING("Main"),HX_CSTRING("collisionSystem")));
				}
				struct _Function_3_2{
					inline static ::luxe::Component Block( ::luxe::Sprite &i){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",166,0x087e5c05)
						{
							HX_STACK_LINE(166)
							::IMap this1 = i->get_components();		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(166)
							return this1->get(HX_CSTRING("movement"));
						}
						return null();
					}
				};
				HX_STACK_LINE(166)
				if (((_Function_3_2::Block(i) != null()))){
					HX_STACK_LINE(168)
					::haxe::Log_obj::trace((HX_CSTRING("\t\tMovement collision in ") + i->name),hx::SourceInfo(HX_CSTRING("Main.hx"),168,HX_CSTRING("Main"),HX_CSTRING("collisionSystem")));
					HX_STACK_LINE(174)
					Float velocityX = i->get(HX_CSTRING("movement"),null())->__Field(HX_CSTRING("velocity"),true)->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(velocityX,"velocityX");
					HX_STACK_LINE(175)
					Float velocityY = i->get(HX_CSTRING("movement"),null())->__Field(HX_CSTRING("velocity"),true)->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(velocityY,"velocityY");
					HX_STACK_LINE(176)
					Float absVelocityX = ::Math_obj::abs(velocityX);		HX_STACK_VAR(absVelocityX,"absVelocityX");
					HX_STACK_LINE(177)
					Float absVelocityY = ::Math_obj::abs(velocityY);		HX_STACK_VAR(absVelocityY,"absVelocityY");
					HX_STACK_LINE(179)
					if (((other->name == HX_CSTRING("paddle")))){
						HX_STACK_LINE(180)
						::phoenix::Vector _g1 = other->get_pos();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(180)
						Dynamic _g11 = i->get(HX_CSTRING("movement"),null());		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(180)
						_g11->__Field(HX_CSTRING("velocity"),true)->__FieldRef(HX_CSTRING("x")) = (((i->get_pos()->x - _g1->x)) * (int)10);
						HX_STACK_LINE(181)
						i->get(HX_CSTRING("movement"),null())->__Field(HX_CSTRING("velocity"),true)->__FieldRef(HX_CSTRING("y")) = -(absVelocityY);
					}
					else{
						HX_STACK_LINE(184)
						if ((collisionSides->__get((int)0))){
							HX_STACK_LINE(185)
							i->get(HX_CSTRING("movement"),null())->__Field(HX_CSTRING("velocity"),true)->__FieldRef(HX_CSTRING("y")) = absVelocityY;
						}
						else{
							HX_STACK_LINE(186)
							if ((collisionSides->__get((int)2))){
								HX_STACK_LINE(187)
								i->get(HX_CSTRING("movement"),null())->__Field(HX_CSTRING("velocity"),true)->__FieldRef(HX_CSTRING("y")) = -(absVelocityY);
							}
							else{
								HX_STACK_LINE(188)
								if ((collisionSides->__get((int)1))){
									HX_STACK_LINE(189)
									i->get(HX_CSTRING("movement"),null())->__Field(HX_CSTRING("velocity"),true)->__FieldRef(HX_CSTRING("x")) = -(absVelocityX);
								}
								else{
									HX_STACK_LINE(190)
									if ((collisionSides->__get((int)3))){
										HX_STACK_LINE(191)
										i->get(HX_CSTRING("movement"),null())->__Field(HX_CSTRING("velocity"),true)->__FieldRef(HX_CSTRING("x")) = absVelocityX;
									}
									else{
										HX_STACK_LINE(192)
										if (((bool(collisionSides->__get((int)0)) && bool(collisionSides->__get((int)1))))){
											HX_STACK_LINE(193)
											Dynamic _g2 = i->get(HX_CSTRING("movement"),null());		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(193)
											_g2->__FieldRef(HX_CSTRING("velocity")) = ::phoenix::Vector_obj::__new(-(absVelocityX),absVelocityY,null(),null());
										}
										else{
											HX_STACK_LINE(194)
											if (((bool(collisionSides->__get((int)0)) && bool(collisionSides->__get((int)3))))){
												HX_STACK_LINE(195)
												Dynamic _g3 = i->get(HX_CSTRING("movement"),null());		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(195)
												_g3->__FieldRef(HX_CSTRING("velocity")) = ::phoenix::Vector_obj::__new(absVelocityX,absVelocityY,null(),null());
											}
											else{
												HX_STACK_LINE(196)
												if (((bool(collisionSides->__get((int)2)) && bool(collisionSides->__get((int)1))))){
													HX_STACK_LINE(197)
													Dynamic _g4 = i->get(HX_CSTRING("movement"),null());		HX_STACK_VAR(_g4,"_g4");
													HX_STACK_LINE(197)
													_g4->__FieldRef(HX_CSTRING("velocity")) = ::phoenix::Vector_obj::__new(-(absVelocityX),-(absVelocityY),null(),null());
												}
												else{
													HX_STACK_LINE(198)
													if (((bool(collisionSides->__get((int)2)) && bool(collisionSides->__get((int)3))))){
														HX_STACK_LINE(199)
														Dynamic _g5 = i->get(HX_CSTRING("movement"),null());		HX_STACK_VAR(_g5,"_g5");
														HX_STACK_LINE(199)
														_g5->__FieldRef(HX_CSTRING("velocity")) = ::phoenix::Vector_obj::__new(absVelocityX,-(absVelocityY),null(),null());
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else{
					struct _Function_4_1{
						inline static ::luxe::Component Block( ::luxe::Sprite &i){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",205,0x087e5c05)
							{
								HX_STACK_LINE(205)
								::IMap this1 = i->get_components();		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(205)
								return this1->get(HX_CSTRING("destroyable"));
							}
							return null();
						}
					};
					HX_STACK_LINE(205)
					if (((_Function_4_1::Block(i) != null()))){
						HX_STACK_LINE(207)
						i->destroy(null());
						HX_STACK_LINE(208)
						this->collisionGroup->remove(i);
						HX_STACK_LINE(209)
						::haxe::Log_obj::trace((HX_CSTRING("\t\tDestruction collision in ") + i->name),hx::SourceInfo(HX_CSTRING("Main.hx"),209,HX_CSTRING("Main"),HX_CSTRING("collisionSystem")));
					}
					else{
						HX_STACK_LINE(213)
						::haxe::Log_obj::trace((HX_CSTRING("\t\tWeird collision in ") + i->name),hx::SourceInfo(HX_CSTRING("Main.hx"),213,HX_CSTRING("Main"),HX_CSTRING("collisionSystem")));
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,collisionSystem,(void))

bool Main_obj::theseCollide( ::luxe::Sprite spr1,::luxe::Sprite spr2){
	HX_STACK_FRAME("Main","theseCollide",0x376337b0,"Main.theseCollide","Main.hx",221,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(spr1,"spr1")
	HX_STACK_ARG(spr2,"spr2")
	HX_STACK_LINE(223)
	Dynamic hitbox1 = spr1->get(HX_CSTRING("hitbox"),null())->__Field(HX_CSTRING("getHitbox"),true)();		HX_STACK_VAR(hitbox1,"hitbox1");
	HX_STACK_LINE(224)
	Dynamic hitbox2 = spr2->get(HX_CSTRING("hitbox"),null())->__Field(HX_CSTRING("getHitbox"),true)();		HX_STACK_VAR(hitbox2,"hitbox2");
	HX_STACK_LINE(226)
	if ((hitbox1->__Field(HX_CSTRING("overlaps"),true)(hitbox2))){
		HX_STACK_LINE(227)
		return true;
	}
	else{
		HX_STACK_LINE(229)
		return false;
	}
	HX_STACK_LINE(226)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,theseCollide,return )


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(paddle,"paddle");
	HX_MARK_MEMBER_NAME(ball0,"ball0");
	HX_MARK_MEMBER_NAME(collisionGroup,"collisionGroup");
	HX_MARK_MEMBER_NAME(once,"once");
	::luxe::Game_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(paddle,"paddle");
	HX_VISIT_MEMBER_NAME(ball0,"ball0");
	HX_VISIT_MEMBER_NAME(collisionGroup,"collisionGroup");
	HX_VISIT_MEMBER_NAME(once,"once");
	::luxe::Game_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"once") ) { return once; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ball0") ) { return ball0; }
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paddle") ) { return paddle; }
		if (HX_FIELD_EQ(inName,"config") ) { return config_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"theseCollide") ) { return theseCollide_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collisionGroup") ) { return collisionGroup; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collisionSystem") ) { return collisionSystem_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"once") ) { once=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ball0") ) { ball0=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paddle") ) { paddle=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collisionGroup") ) { collisionGroup=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("paddle"));
	outFields->push(HX_CSTRING("ball0"));
	outFields->push(HX_CSTRING("collisionGroup"));
	outFields->push(HX_CSTRING("once"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Main_obj,paddle),HX_CSTRING("paddle")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Main_obj,ball0),HX_CSTRING("ball0")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Main_obj,collisionGroup),HX_CSTRING("collisionGroup")},
	{hx::fsBool,(int)offsetof(Main_obj,once),HX_CSTRING("once")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("paddle"),
	HX_CSTRING("ball0"),
	HX_CSTRING("collisionGroup"),
	HX_CSTRING("once"),
	HX_CSTRING("config"),
	HX_CSTRING("ready"),
	HX_CSTRING("onmousemove"),
	HX_CSTRING("onkeyup"),
	HX_CSTRING("update"),
	HX_CSTRING("collisionSystem"),
	HX_CSTRING("theseCollide"),
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

