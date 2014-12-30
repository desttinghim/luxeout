#include <hxcpp.h>

#ifndef INCLUDED_Movement
#include <Movement.h>
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
#ifndef INCLUDED_luxe_ID
#include <luxe/ID.h>
#endif
#ifndef INCLUDED_luxe_Objects
#include <luxe/Objects.h>
#endif
#ifndef INCLUDED_luxe_Sprite
#include <luxe/Sprite.h>
#endif
#ifndef INCLUDED_luxe_Visual
#include <luxe/Visual.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif

Void Movement_obj::__construct(Float xspeed,Float yspeed,Float maxSpeed,::luxe::Sprite whichSprite)
{
HX_STACK_FRAME("Movement","new",0x298135c1,"Movement.new","Movement.hx",12,0xa8f07ccf)

HX_STACK_ARG(xspeed,"xspeed")

HX_STACK_ARG(yspeed,"yspeed")

HX_STACK_ARG(maxSpeed,"maxSpeed")

HX_STACK_ARG(whichSprite,"whichSprite")
{
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Movement.hx",14,0xa8f07ccf)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("name") , HX_CSTRING("movement"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(14)
	super::__construct(_Function_1_1::Block());
	HX_STACK_LINE(16)
	this->velocity = ::phoenix::Vector_obj::__new(xspeed,yspeed,null(),null());
	HX_STACK_LINE(17)
	this->maxVelocity = maxSpeed;
	HX_STACK_LINE(18)
	this->sprite = whichSprite;
}
;
	return null();
}

//Movement_obj::~Movement_obj() { }

Dynamic Movement_obj::__CreateEmpty() { return  new Movement_obj; }
hx::ObjectPtr< Movement_obj > Movement_obj::__new(Float xspeed,Float yspeed,Float maxSpeed,::luxe::Sprite whichSprite)
{  hx::ObjectPtr< Movement_obj > result = new Movement_obj();
	result->__construct(xspeed,yspeed,maxSpeed,whichSprite);
	return result;}

Dynamic Movement_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Movement_obj > result = new Movement_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Movement_obj::init( ){
{
		HX_STACK_FRAME("Movement","init",0x24468a8f,"Movement.init","Movement.hx",20,0xa8f07ccf)
		HX_STACK_THIS(this)
	}
return null();
}


Void Movement_obj::update( Float dt){
{
		HX_STACK_FRAME("Movement","update",0x9aa2f348,"Movement.update","Movement.hx",24,0xa8f07ccf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		struct _Function_1_1{
			inline static ::phoenix::Vector Block( ::Movement_obj *__this,Float &dt){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Movement.hx",26,0xa8f07ccf)
				{
					HX_STACK_LINE(26)
					::phoenix::Vector a = __this->sprite->get_pos();		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(26)
					::phoenix::Vector b = ::phoenix::Vector_obj::Multiply(__this->velocity,dt);		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(26)
					return ::phoenix::Vector_obj::__new((a->x + b->x),(a->y + b->y),(a->z + b->z),null());
				}
				return null();
			}
		};
		HX_STACK_LINE(26)
		this->sprite->set_pos(_Function_1_1::Block(this,dt));
		struct _Function_1_2{
			inline static Float Block( ::Movement_obj *__this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Movement.hx",27,0xa8f07ccf)
				{
					HX_STACK_LINE(27)
					::phoenix::Vector _this = __this->velocity;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(27)
					return ::Math_obj::sqrt((((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z)));
				}
				return null();
			}
		};
		HX_STACK_LINE(27)
		if (((_Function_1_2::Block(this) > this->maxVelocity))){
			HX_STACK_LINE(28)
			::phoenix::Vector _this = this->velocity;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(28)
			Float value = this->maxVelocity;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(28)
			{
				HX_STACK_LINE(28)
				::phoenix::Vector _this1;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(28)
				{
					HX_STACK_LINE(28)
					Float v = ::Math_obj::sqrt((((_this->x * _this->x) + (_this->y * _this->y)) + (_this->z * _this->z)));		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(28)
					if (((v != (int)0))){
						HX_STACK_LINE(28)
						Float _x = (Float(_this->x) / Float(v));		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(28)
						Float _y = (Float(_this->y) / Float(v));		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(28)
						Float _z = (Float(_this->z) / Float(v));		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(28)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(28)
						_this->ignore_listeners = true;
						HX_STACK_LINE(28)
						{
							HX_STACK_LINE(28)
							_this->x = _x;
							HX_STACK_LINE(28)
							if ((_this->_construct)){
								HX_STACK_LINE(28)
								_this->x;
							}
							else{
								HX_STACK_LINE(28)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(28)
									_this->listen_x(_x);
								}
								HX_STACK_LINE(28)
								_this->x;
							}
						}
						HX_STACK_LINE(28)
						{
							HX_STACK_LINE(28)
							_this->y = _y;
							HX_STACK_LINE(28)
							if ((_this->_construct)){
								HX_STACK_LINE(28)
								_this->y;
							}
							else{
								HX_STACK_LINE(28)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(28)
									_this->listen_y(_y);
								}
								HX_STACK_LINE(28)
								_this->y;
							}
						}
						HX_STACK_LINE(28)
						{
							HX_STACK_LINE(28)
							_this->z = _z;
							HX_STACK_LINE(28)
							if ((_this->_construct)){
								HX_STACK_LINE(28)
								_this->z;
							}
							else{
								HX_STACK_LINE(28)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(28)
									_this->listen_z(_z);
								}
								HX_STACK_LINE(28)
								_this->z;
							}
						}
						HX_STACK_LINE(28)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(28)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(28)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(28)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(28)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(28)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(28)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(28)
						_this;
					}
					else{
						HX_STACK_LINE(28)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(28)
						_this->ignore_listeners = true;
						HX_STACK_LINE(28)
						{
							HX_STACK_LINE(28)
							_this->x = (int)0;
							HX_STACK_LINE(28)
							if ((_this->_construct)){
								HX_STACK_LINE(28)
								_this->x;
							}
							else{
								HX_STACK_LINE(28)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(28)
									_this->listen_x((int)0);
								}
								HX_STACK_LINE(28)
								_this->x;
							}
						}
						HX_STACK_LINE(28)
						{
							HX_STACK_LINE(28)
							_this->y = (int)0;
							HX_STACK_LINE(28)
							if ((_this->_construct)){
								HX_STACK_LINE(28)
								_this->y;
							}
							else{
								HX_STACK_LINE(28)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(28)
									_this->listen_y((int)0);
								}
								HX_STACK_LINE(28)
								_this->y;
							}
						}
						HX_STACK_LINE(28)
						{
							HX_STACK_LINE(28)
							_this->z = (int)0;
							HX_STACK_LINE(28)
							if ((_this->_construct)){
								HX_STACK_LINE(28)
								_this->z;
							}
							else{
								HX_STACK_LINE(28)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(28)
									_this->listen_z((int)0);
								}
								HX_STACK_LINE(28)
								_this->z;
							}
						}
						HX_STACK_LINE(28)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(28)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(28)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(28)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(28)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(28)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(28)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(28)
						_this;
					}
					HX_STACK_LINE(28)
					_this1 = _this;
				}
				HX_STACK_LINE(28)
				{
					HX_STACK_LINE(28)
					Float _x = (_this1->x * value);		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(28)
					Float _y = (_this1->y * value);		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(28)
					Float _z = (_this1->z * value);		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(28)
					bool prev = _this1->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(28)
					_this1->ignore_listeners = true;
					HX_STACK_LINE(28)
					{
						HX_STACK_LINE(28)
						_this1->x = _x;
						HX_STACK_LINE(28)
						if ((_this1->_construct)){
							HX_STACK_LINE(28)
							_this1->x;
						}
						else{
							HX_STACK_LINE(28)
							if (((bool((_this1->listen_x != null())) && bool(!(_this1->ignore_listeners))))){
								HX_STACK_LINE(28)
								_this1->listen_x(_x);
							}
							HX_STACK_LINE(28)
							_this1->x;
						}
					}
					HX_STACK_LINE(28)
					{
						HX_STACK_LINE(28)
						_this1->y = _y;
						HX_STACK_LINE(28)
						if ((_this1->_construct)){
							HX_STACK_LINE(28)
							_this1->y;
						}
						else{
							HX_STACK_LINE(28)
							if (((bool((_this1->listen_y != null())) && bool(!(_this1->ignore_listeners))))){
								HX_STACK_LINE(28)
								_this1->listen_y(_y);
							}
							HX_STACK_LINE(28)
							_this1->y;
						}
					}
					HX_STACK_LINE(28)
					{
						HX_STACK_LINE(28)
						_this1->z = _z;
						HX_STACK_LINE(28)
						if ((_this1->_construct)){
							HX_STACK_LINE(28)
							_this1->z;
						}
						else{
							HX_STACK_LINE(28)
							if (((bool((_this1->listen_z != null())) && bool(!(_this1->ignore_listeners))))){
								HX_STACK_LINE(28)
								_this1->listen_z(_z);
							}
							HX_STACK_LINE(28)
							_this1->z;
						}
					}
					HX_STACK_LINE(28)
					_this1->ignore_listeners = prev;
					HX_STACK_LINE(28)
					if (((bool((_this1->listen_x != null())) && bool(!(_this1->ignore_listeners))))){
						HX_STACK_LINE(28)
						_this1->listen_x(_this1->x);
					}
					HX_STACK_LINE(28)
					if (((bool((_this1->listen_y != null())) && bool(!(_this1->ignore_listeners))))){
						HX_STACK_LINE(28)
						_this1->listen_y(_this1->y);
					}
					HX_STACK_LINE(28)
					if (((bool((_this1->listen_z != null())) && bool(!(_this1->ignore_listeners))))){
						HX_STACK_LINE(28)
						_this1->listen_z(_this1->z);
					}
					HX_STACK_LINE(28)
					_this1;
				}
				HX_STACK_LINE(28)
				_this1;
			}
			HX_STACK_LINE(28)
			value;
		}
	}
return null();
}


Void Movement_obj::onreset( ){
{
		HX_STACK_FRAME("Movement","onreset",0xfffaa231,"Movement.onreset","Movement.hx",32,0xa8f07ccf)
		HX_STACK_THIS(this)
	}
return null();
}


Void Movement_obj::ondestroy( ){
{
		HX_STACK_FRAME("Movement","ondestroy",0xb148e1dc,"Movement.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void Movement_obj::onremoved( ){
{
		HX_STACK_FRAME("Movement","onremoved",0x7fc2d482,"Movement.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}



Movement_obj::Movement_obj()
{
}

void Movement_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Movement);
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(maxVelocity,"maxVelocity");
	::luxe::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Movement_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(maxVelocity,"maxVelocity");
	::luxe::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Movement_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onreset") ) { return onreset_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { return maxVelocity; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Movement_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { maxVelocity=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Movement_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("maxVelocity"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Movement_obj,velocity),HX_CSTRING("velocity")},
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(Movement_obj,sprite),HX_CSTRING("sprite")},
	{hx::fsFloat,(int)offsetof(Movement_obj,maxVelocity),HX_CSTRING("maxVelocity")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("velocity"),
	HX_CSTRING("sprite"),
	HX_CSTRING("maxVelocity"),
	HX_CSTRING("init"),
	HX_CSTRING("update"),
	HX_CSTRING("onreset"),
	HX_CSTRING("ondestroy"),
	HX_CSTRING("onremoved"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Movement_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Movement_obj::__mClass,"__mClass");
};

#endif

Class Movement_obj::__mClass;

void Movement_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Movement"), hx::TCanCast< Movement_obj> ,sStaticFields,sMemberFields,
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

void Movement_obj::__boot()
{
}

