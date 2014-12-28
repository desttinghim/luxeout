#include <hxcpp.h>

#ifndef INCLUDED_CollisionCircleComponent
#include <CollisionCircleComponent.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_luxe_collision_shapes_Circle
#include <luxe/collision/shapes/Circle.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Shape
#include <luxe/collision/shapes/Shape.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif

Void CollisionCircleComponent_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("CollisionCircleComponent","new",0x3a5db2cd,"CollisionCircleComponent.new","CollisionCircleComponent.hx",9,0xc11f6543)

HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(9)
	super::__construct(_options);
}
;
	return null();
}

//CollisionCircleComponent_obj::~CollisionCircleComponent_obj() { }

Dynamic CollisionCircleComponent_obj::__CreateEmpty() { return  new CollisionCircleComponent_obj; }
hx::ObjectPtr< CollisionCircleComponent_obj > CollisionCircleComponent_obj::__new(Dynamic _options)
{  hx::ObjectPtr< CollisionCircleComponent_obj > result = new CollisionCircleComponent_obj();
	result->__construct(_options);
	return result;}

Dynamic CollisionCircleComponent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollisionCircleComponent_obj > result = new CollisionCircleComponent_obj();
	result->__construct(inArgs[0]);
	return result;}

Void CollisionCircleComponent_obj::init( ){
{
		HX_STACK_FRAME("CollisionCircleComponent","init",0xd4577803,"CollisionCircleComponent.init","CollisionCircleComponent.hx",15,0xc11f6543)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16)
		this->sprite = this->get_entity();
		HX_STACK_LINE(17)
		this->collisionCircle = ::luxe::collision::shapes::Circle_obj::__new((int)0,(int)0,this->sprite->size->x);
		HX_STACK_LINE(19)
		this->collisionCircle->set_x(this->sprite->get_pos()->x);
		HX_STACK_LINE(20)
		this->collisionCircle->set_y(this->sprite->get_pos()->y);
	}
return null();
}


Void CollisionCircleComponent_obj::update( Float dt){
{
		HX_STACK_FRAME("CollisionCircleComponent","update",0x22e125bc,"CollisionCircleComponent.update","CollisionCircleComponent.hx",23,0xc11f6543)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(24)
		this->collisionCircle->set_x(this->sprite->get_pos()->x);
		HX_STACK_LINE(25)
		this->collisionCircle->set_y(this->sprite->get_pos()->y);
		HX_STACK_LINE(26)
		::String _g = (this->collisionCircle->get_x() + HX_CSTRING(" "));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		::String _g1 = (_g + this->collisionCircle->get_y());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(26)
		::haxe::Log_obj::trace(_g1,hx::SourceInfo(HX_CSTRING("CollisionCircleComponent.hx"),26,HX_CSTRING("CollisionCircleComponent"),HX_CSTRING("update")));
	}
return null();
}


Void CollisionCircleComponent_obj::onreset( ){
{
		HX_STACK_FRAME("CollisionCircleComponent","onreset",0xae28953d,"CollisionCircleComponent.onreset","CollisionCircleComponent.hx",29,0xc11f6543)
		HX_STACK_THIS(this)
	}
return null();
}


Void CollisionCircleComponent_obj::ondestroy( ){
{
		HX_STACK_FRAME("CollisionCircleComponent","ondestroy",0xbd22afe8,"CollisionCircleComponent.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void CollisionCircleComponent_obj::onremoved( ){
{
		HX_STACK_FRAME("CollisionCircleComponent","onremoved",0x8b9ca28e,"CollisionCircleComponent.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}



CollisionCircleComponent_obj::CollisionCircleComponent_obj()
{
}

void CollisionCircleComponent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CollisionCircleComponent);
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(collisionCircle,"collisionCircle");
	::luxe::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CollisionCircleComponent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(collisionCircle,"collisionCircle");
	::luxe::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CollisionCircleComponent_obj::__Field(const ::String &inName,bool inCallProp)
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
	case 9:
		if (HX_FIELD_EQ(inName,"ondestroy") ) { return ondestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onremoved") ) { return onremoved_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collisionCircle") ) { return collisionCircle; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CollisionCircleComponent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collisionCircle") ) { collisionCircle=inValue.Cast< ::luxe::collision::shapes::Circle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CollisionCircleComponent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("collisionCircle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(CollisionCircleComponent_obj,sprite),HX_CSTRING("sprite")},
	{hx::fsObject /*::luxe::collision::shapes::Circle*/ ,(int)offsetof(CollisionCircleComponent_obj,collisionCircle),HX_CSTRING("collisionCircle")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("sprite"),
	HX_CSTRING("collisionCircle"),
	HX_CSTRING("init"),
	HX_CSTRING("update"),
	HX_CSTRING("onreset"),
	HX_CSTRING("ondestroy"),
	HX_CSTRING("onremoved"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollisionCircleComponent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollisionCircleComponent_obj::__mClass,"__mClass");
};

#endif

Class CollisionCircleComponent_obj::__mClass;

void CollisionCircleComponent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("CollisionCircleComponent"), hx::TCanCast< CollisionCircleComponent_obj> ,sStaticFields,sMemberFields,
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

void CollisionCircleComponent_obj::__boot()
{
}

