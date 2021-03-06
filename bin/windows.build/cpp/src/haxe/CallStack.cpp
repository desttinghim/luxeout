#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
namespace haxe{

Void CallStack_obj::__construct()
{
	return null();
}

//CallStack_obj::~CallStack_obj() { }

Dynamic CallStack_obj::__CreateEmpty() { return  new CallStack_obj; }
hx::ObjectPtr< CallStack_obj > CallStack_obj::__new()
{  hx::ObjectPtr< CallStack_obj > result = new CallStack_obj();
	result->__construct();
	return result;}

Dynamic CallStack_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CallStack_obj > result = new CallStack_obj();
	result->__construct();
	return result;}

Array< ::Dynamic > CallStack_obj::callStack( ){
	HX_STACK_FRAME("haxe.CallStack","callStack",0xfa9165be,"haxe.CallStack.callStack","C:\\HaxeToolkit\\haxe\\std/haxe/CallStack.hx",43,0xf338fe24)
	HX_STACK_LINE(57)
	Array< ::String > s = ::__hxcpp_get_call_stack(true);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(58)
	return ::haxe::CallStack_obj::makeStack(s);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CallStack_obj,callStack,return )

Array< ::Dynamic > CallStack_obj::makeStack( Array< ::String > s){
	Array< ::String > stack = s;
	Array< ::Dynamic > m = Array_obj< ::Dynamic >::__new();
	{
		int _g = (int)0;
		while(((_g < stack->length))){
			::String func = stack->__get(_g);
			++(_g);
			Array< ::String > words = func.split(HX_CSTRING("::"));
			if (((words->length == (int)0))){
				m->unshift(::haxe::StackItem_obj::CFunction);
			}
			else{
				if (((words->length == (int)2))){
					m->unshift(::haxe::StackItem_obj::Method(words->__get((int)0),words->__get((int)1)));
				}
				else{
					if (((words->length == (int)4))){
						::haxe::StackItem _g1 = ::haxe::StackItem_obj::Method(words->__get((int)0),words->__get((int)1));
						m->unshift(::haxe::StackItem_obj::FilePos(_g1,words->__get((int)2),::Std_obj::parseInt(words->__get((int)3))));
					}
				}
			}
		}
	}
	return m;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CallStack_obj,makeStack,return )


CallStack_obj::CallStack_obj()
{
}

Dynamic CallStack_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"callStack") ) { return callStack_dyn(); }
		if (HX_FIELD_EQ(inName,"makeStack") ) { return makeStack_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CallStack_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CallStack_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("callStack"),
	HX_CSTRING("makeStack"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CallStack_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CallStack_obj::__mClass,"__mClass");
};

#endif

Class CallStack_obj::__mClass;

void CallStack_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.CallStack"), hx::TCanCast< CallStack_obj> ,sStaticFields,sMemberFields,
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

void CallStack_obj::__boot()
{
}

} // end namespace haxe
