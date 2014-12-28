#include <hxcpp.h>

#ifndef INCLUDED_CollisionRectComponent
#include <CollisionRectComponent.h>
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
#ifndef INCLUDED_luxe_collision_shapes_Polygon
#include <luxe/collision/shapes/Polygon.h>
#endif
#ifndef INCLUDED_luxe_collision_shapes_Shape
#include <luxe/collision/shapes/Shape.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif

Void CollisionRectComponent_obj::__construct(Dynamic _options)
{
HX_STACK_FRAME("CollisionRectComponent","new",0x74a18bb9,"CollisionRectComponent.new","CollisionRectComponent.hx",9,0x088f0dd7)

HX_STACK_ARG(_options,"_options")
{
	HX_STACK_LINE(9)
	super::__construct(_options);
}
;
	return null();
}

//CollisionRectComponent_obj::~CollisionRectComponent_obj() { }

Dynamic CollisionRectComponent_obj::__CreateEmpty() { return  new CollisionRectComponent_obj; }
hx::ObjectPtr< CollisionRectComponent_obj > CollisionRectComponent_obj::__new(Dynamic _options)
{  hx::ObjectPtr< CollisionRectComponent_obj > result = new CollisionRectComponent_obj();
	result->__construct(_options);
	return result;}

Dynamic CollisionRectComponent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollisionRectComponent_obj > result = new CollisionRectComponent_obj();
	result->__construct(inArgs[0]);
	return result;}

Void CollisionRectComponent_obj::init( ){
{
		HX_STACK_FRAME("CollisionRectComponent","init",0x95716d97,"CollisionRectComponent.init","CollisionRectComponent.hx",15,0x088f0dd7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16)
		this->sprite = this->get_entity();
		HX_STACK_LINE(17)
		this->collisionBox = ::luxe::collision::shapes::Polygon_obj::rectangle((int)0,(int)0,this->sprite->size->x,this->sprite->size->y,null());
		HX_STACK_LINE(19)
		this->collisionBox->set_x(this->sprite->get_pos()->x);
		HX_STACK_LINE(20)
		this->collisionBox->set_y(this->sprite->get_pos()->y);
	}
return null();
}


Void CollisionRectComponent_obj::update( Float dt){
{
		HX_STACK_FRAME("CollisionRectComponent","update",0xd692a850,"CollisionRectComponent.update","CollisionRectComponent.hx",23,0x088f0dd7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(25)
		this->collisionBox->set_x(this->sprite->get_pos()->x);
		HX_STACK_LINE(26)
		this->collisionBox->set_y(this->sprite->get_pos()->y);
		HX_STACK_LINE(27)
		::String _g = (this->collisionBox->get_x() + HX_CSTRING(" "));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		::String _g1 = (_g + this->collisionBox->get_y());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		::haxe::Log_obj::trace(_g1,hx::SourceInfo(HX_CSTRING("CollisionRectComponent.hx"),27,HX_CSTRING("CollisionRectComponent"),HX_CSTRING("update")));
	}
return null();
}


Void CollisionRectComponent_obj::onreset( ){
{
		HX_STACK_FRAME("CollisionRectComponent","onreset",0x35c95429,"CollisionRectComponent.onreset","CollisionRectComponent.hx",30,0x088f0dd7)
		HX_STACK_THIS(this)
	}
return null();
}


Void CollisionRectComponent_obj::ondestroy( ){
{
		HX_STACK_FRAME("CollisionRectComponent","ondestroy",0xfda201d4,"CollisionRectComponent.ondestroy","luxe/macros/ComponentRules.hx",50,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::ondestroy();
	}
return null();
}


Void CollisionRectComponent_obj::onremoved( ){
{
		HX_STACK_FRAME("CollisionRectComponent","onremoved",0xcc1bf47a,"CollisionRectComponent.onremoved","luxe/macros/ComponentRules.hx",62,0x7da94735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::onremoved();
	}
return null();
}



CollisionRectComponent_obj::CollisionRectComponent_obj()
{
}

void CollisionRectComponent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CollisionRectComponent);
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(collisionBox,"collisionBox");
	::luxe::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CollisionRectComponent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(collisionBox,"collisionBox");
	::luxe::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CollisionRectComponent_obj::__Field(const ::String &inName,bool inCallProp)
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
	case 12:
		if (HX_FIELD_EQ(inName,"collisionBox") ) { return collisionBox; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CollisionRectComponent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::luxe::Sprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"collisionBox") ) { collisionBox=inValue.Cast< ::luxe::collision::shapes::Polygon >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CollisionRectComponent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("collisionBox"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::luxe::Sprite*/ ,(int)offsetof(CollisionRectComponent_obj,sprite),HX_CSTRING("sprite")},
	{hx::fsObject /*::luxe::collision::shapes::Polygon*/ ,(int)offsetof(CollisionRectComponent_obj,collisionBox),HX_CSTRING("collisionBox")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("sprite"),
	HX_CSTRING("collisionBox"),
	HX_CSTRING("init"),
	HX_CSTRING("update"),
	HX_CSTRING("onreset"),
	HX_CSTRING("ondestroy"),
	HX_CSTRING("onremoved"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollisionRectComponent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollisionRectComponent_obj::__mClass,"__mClass");
};

#endif

Class CollisionRectComponent_obj::__mClass;

void CollisionRectComponent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("CollisionRectComponent"), hx::TCanCast< CollisionRectComponent_obj> ,sStaticFields,sMemberFields,
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

void CollisionRectComponent_obj::__boot()
{
}

