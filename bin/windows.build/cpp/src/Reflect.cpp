#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif

Void Reflect_obj::__construct()
{
	return null();
}

//Reflect_obj::~Reflect_obj() { }

Dynamic Reflect_obj::__CreateEmpty() { return  new Reflect_obj; }
hx::ObjectPtr< Reflect_obj > Reflect_obj::__new()
{  hx::ObjectPtr< Reflect_obj > result = new Reflect_obj();
	result->__construct();
	return result;}

Dynamic Reflect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Reflect_obj > result = new Reflect_obj();
	result->__construct();
	return result;}

bool Reflect_obj::hasField( Dynamic o,::String field){
	HX_STACK_FRAME("Reflect","hasField",0xef8c2571,"Reflect.hasField","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",25,0x487b3827)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(field,"field")
	HX_STACK_LINE(25)
	if (((o != null()))){
		HX_STACK_LINE(25)
		return o->__HasField(field);
	}
	else{
		HX_STACK_LINE(25)
		return false;
	}
	HX_STACK_LINE(25)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,hasField,return )

Dynamic Reflect_obj::field( Dynamic o,::String field){
	HX_STACK_FRAME("Reflect","field",0x54b04da9,"Reflect.field","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",29,0x487b3827)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(field,"field")
	HX_STACK_LINE(29)
	if (((o == null()))){
		HX_STACK_LINE(29)
		return null();
	}
	else{
		HX_STACK_LINE(29)
		return o->__Field(field,false);
	}
	HX_STACK_LINE(29)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,field,return )

Dynamic Reflect_obj::callMethod( Dynamic o,Dynamic func,Dynamic args){
	HX_STACK_FRAME("Reflect","callMethod",0xb49e52d0,"Reflect.callMethod","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",46,0x487b3827)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(47)
	if (((  (((func != null()))) ? bool((func->__GetType() == ::vtString)) : bool(false) ))){
		HX_STACK_LINE(48)
		func = o->__Field(func,true);
	}
	HX_STACK_LINE(49)
	func->__SetThis(o);
	HX_STACK_LINE(50)
	return func->__Run(args);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Reflect_obj,callMethod,return )

Array< ::String > Reflect_obj::fields( Dynamic o){
	HX_STACK_FRAME("Reflect","fields",0xc593a6aa,"Reflect.fields","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",53,0x487b3827)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(54)
	if (((o == null()))){
		HX_STACK_LINE(54)
		return Array_obj< ::String >::__new();
	}
	HX_STACK_LINE(55)
	Array< ::String > a = Array_obj< ::String >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(56)
	o->__GetFields(a);
	HX_STACK_LINE(57)
	return a;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,fields,return )

int Reflect_obj::compare( Dynamic a,Dynamic b){
	HX_STACK_FRAME("Reflect","compare",0xa2d92b54,"Reflect.compare","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",65,0x487b3827)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(65)
	if (((a == b))){
		HX_STACK_LINE(65)
		return (int)0;
	}
	else{
		HX_STACK_LINE(65)
		if (((a > b))){
			HX_STACK_LINE(65)
			return (int)1;
		}
		else{
			HX_STACK_LINE(65)
			return (int)-1;
		}
	}
	HX_STACK_LINE(65)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,compare,return )

bool Reflect_obj::isObject( Dynamic v){
	HX_STACK_FRAME("Reflect","isObject",0xd04960ba,"Reflect.isObject","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Reflect.hx",76,0x487b3827)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(77)
	if (((v == null()))){
		HX_STACK_LINE(77)
		return false;
	}
	HX_STACK_LINE(78)
	int t = v->__GetType();		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(79)
	return (bool((bool((bool((t == ::vtObject)) || bool((t == ::vtClass)))) || bool((t == ::vtString)))) || bool((t == ::vtArray)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,isObject,return )


Reflect_obj::Reflect_obj()
{
}

Dynamic Reflect_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { return field_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fields") ) { return fields_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasField") ) { return hasField_dyn(); }
		if (HX_FIELD_EQ(inName,"isObject") ) { return isObject_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"callMethod") ) { return callMethod_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Reflect_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Reflect_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hasField"),
	HX_CSTRING("field"),
	HX_CSTRING("callMethod"),
	HX_CSTRING("fields"),
	HX_CSTRING("compare"),
	HX_CSTRING("isObject"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reflect_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reflect_obj::__mClass,"__mClass");
};

#endif

Class Reflect_obj::__mClass;

void Reflect_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Reflect"), hx::TCanCast< Reflect_obj> ,sStaticFields,sMemberFields,
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

void Reflect_obj::__boot()
{
}

