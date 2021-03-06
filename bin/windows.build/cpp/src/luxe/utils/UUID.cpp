#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_luxe_utils_UUID
#include <luxe/utils/UUID.h>
#endif
#ifndef INCLUDED_luxe_utils__UUID_Rule30
#include <luxe/utils/_UUID/Rule30.h>
#endif
namespace luxe{
namespace utils{

Void UUID_obj::__construct()
{
	return null();
}

//UUID_obj::~UUID_obj() { }

Dynamic UUID_obj::__CreateEmpty() { return  new UUID_obj; }
hx::ObjectPtr< UUID_obj > UUID_obj::__new()
{  hx::ObjectPtr< UUID_obj > result = new UUID_obj();
	result->__construct();
	return result;}

Dynamic UUID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UUID_obj > result = new UUID_obj();
	result->__construct();
	return result;}

::luxe::utils::_UUID::Rule30 UUID_obj::rule30;

::String UUID_obj::hexChars;

::String UUID_obj::generate_undashed( ){
	HX_STACK_FRAME("luxe.utils.UUID","generate_undashed",0xb5710e36,"luxe.utils.UUID.generate_undashed","luxe/utils/UUID.hx",39,0x68a04aec)
	HX_STACK_LINE(41)
	::StringBuf sbuf = ::StringBuf_obj::__new();		HX_STACK_VAR(sbuf,"sbuf");
	HX_STACK_LINE(42)
	Dynamic getBits = ::luxe::utils::UUID_obj::rule30->getBits_dyn();		HX_STACK_VAR(getBits,"getBits");
	HX_STACK_LINE(43)
	Dynamic hex;		HX_STACK_VAR(hex,"hex");
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		Array< ::Dynamic > a1 = Array_obj< ::Dynamic >::__new().Add(sbuf);		HX_STACK_VAR(a1,"a1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,a1)
		Void run(int n){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","luxe/utils/UUID.hx",43,0x68a04aec)
			HX_STACK_ARG(n,"n")
			{
				HX_STACK_LINE(43)
				return null(::luxe::utils::UUID_obj::hex(a1->__get((int)0).StaticCast< ::StringBuf >(),n));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(43)
		hex =  Dynamic(new _Function_2_1(a1));
	}
	HX_STACK_LINE(46)
	hex(getBits((int)16).Cast< int >()).Cast< Void >();
	HX_STACK_LINE(47)
	hex(getBits((int)16).Cast< int >()).Cast< Void >();
	HX_STACK_LINE(50)
	hex(getBits((int)16).Cast< int >()).Cast< Void >();
	HX_STACK_LINE(53)
	hex((int((int)16384) | int(getBits((int)12).Cast< int >()))).Cast< Void >();
	HX_STACK_LINE(56)
	hex((int((int)32768) | int(getBits((int)14).Cast< int >()))).Cast< Void >();
	HX_STACK_LINE(59)
	hex(getBits((int)16).Cast< int >()).Cast< Void >();
	HX_STACK_LINE(60)
	hex(getBits((int)16).Cast< int >()).Cast< Void >();
	HX_STACK_LINE(61)
	hex(getBits((int)16).Cast< int >()).Cast< Void >();
	HX_STACK_LINE(63)
	return sbuf->b->join(HX_CSTRING(""));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(UUID_obj,generate_undashed,return )

::String UUID_obj::get( ){
	HX_STACK_FRAME("luxe.utils.UUID","get",0xbbb36878,"luxe.utils.UUID.get","luxe/utils/UUID.hx",69,0x68a04aec)
	HX_STACK_LINE(71)
	::StringBuf sbuf = ::StringBuf_obj::__new();		HX_STACK_VAR(sbuf,"sbuf");
	HX_STACK_LINE(72)
	Dynamic getBits = ::luxe::utils::UUID_obj::rule30->getBits_dyn();		HX_STACK_VAR(getBits,"getBits");
	HX_STACK_LINE(73)
	Dynamic hex;		HX_STACK_VAR(hex,"hex");
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		Array< ::Dynamic > a1 = Array_obj< ::Dynamic >::__new().Add(sbuf);		HX_STACK_VAR(a1,"a1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,a1)
		Void run(int n){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","luxe/utils/UUID.hx",73,0x68a04aec)
			HX_STACK_ARG(n,"n")
			{
				HX_STACK_LINE(73)
				return null(::luxe::utils::UUID_obj::hex(a1->__get((int)0).StaticCast< ::StringBuf >(),n));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(73)
		hex =  Dynamic(new _Function_2_1(a1));
	}
	HX_STACK_LINE(76)
	hex(getBits((int)16).Cast< int >()).Cast< Void >();
	HX_STACK_LINE(77)
	hex(getBits((int)16).Cast< int >()).Cast< Void >();
	HX_STACK_LINE(80)
	sbuf->b->push(HX_CSTRING("-"));
	HX_STACK_LINE(81)
	hex(getBits((int)16).Cast< int >()).Cast< Void >();
	HX_STACK_LINE(84)
	sbuf->b->push(HX_CSTRING("-"));
	HX_STACK_LINE(85)
	hex((int((int)16384) | int(getBits((int)12).Cast< int >()))).Cast< Void >();
	HX_STACK_LINE(88)
	sbuf->b->push(HX_CSTRING("-"));
	HX_STACK_LINE(89)
	hex((int((int)32768) | int(getBits((int)14).Cast< int >()))).Cast< Void >();
	HX_STACK_LINE(92)
	sbuf->b->push(HX_CSTRING("-"));
	HX_STACK_LINE(93)
	hex(getBits((int)16).Cast< int >()).Cast< Void >();
	HX_STACK_LINE(94)
	hex(getBits((int)16).Cast< int >()).Cast< Void >();
	HX_STACK_LINE(95)
	hex(getBits((int)16).Cast< int >()).Cast< Void >();
	HX_STACK_LINE(97)
	return sbuf->b->join(HX_CSTRING("")).toLowerCase();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(UUID_obj,get,return )

Void UUID_obj::hex( ::StringBuf sbuf,int n){
{
		HX_STACK_FRAME("luxe.utils.UUID","hex",0xbbb42abd,"luxe.utils.UUID.hex","luxe/utils/UUID.hx",101,0x68a04aec)
		HX_STACK_ARG(sbuf,"sbuf")
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(103)
		::StringBuf s = ::StringBuf_obj::__new();		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(104)
		do{
			HX_STACK_LINE(105)
			{
				HX_STACK_LINE(105)
				int c = ::luxe::utils::UUID_obj::hexChars.charCodeAt(hx::Mod(n,(int)16));		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(105)
				s->b->push(::String::fromCharCode(c));
			}
			HX_STACK_LINE(106)
			n = ::Std_obj::_int((Float(n) / Float((int)16)));
		}
while(((n > (int)0)));
		HX_STACK_LINE(109)
		::String s1 = s->b->join(HX_CSTRING(""));		HX_STACK_VAR(s1,"s1");
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(110)
			int _g = ((int)4 - s1.length);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(110)
			while(((_g1 < _g))){
				HX_STACK_LINE(110)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(111)
				sbuf->b->push(HX_CSTRING("0"));
			}
		}
		HX_STACK_LINE(113)
		sbuf->add(s1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UUID_obj,hex,(void))


UUID_obj::UUID_obj()
{
}

Dynamic UUID_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"hex") ) { return hex_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rule30") ) { return rule30; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hexChars") ) { return hexChars; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"generate_undashed") ) { return generate_undashed_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UUID_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"rule30") ) { rule30=inValue.Cast< ::luxe::utils::_UUID::Rule30 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hexChars") ) { hexChars=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UUID_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("rule30"),
	HX_CSTRING("hexChars"),
	HX_CSTRING("generate_undashed"),
	HX_CSTRING("get"),
	HX_CSTRING("hex"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UUID_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UUID_obj::rule30,"rule30");
	HX_MARK_MEMBER_NAME(UUID_obj::hexChars,"hexChars");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UUID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UUID_obj::rule30,"rule30");
	HX_VISIT_MEMBER_NAME(UUID_obj::hexChars,"hexChars");
};

#endif

Class UUID_obj::__mClass;

void UUID_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("luxe.utils.UUID"), hx::TCanCast< UUID_obj> ,sStaticFields,sMemberFields,
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

void UUID_obj::__boot()
{
	rule30= ::luxe::utils::_UUID::Rule30_obj::createWithLength((int)24);
	hexChars= HX_CSTRING("0123456789ABCDEF");
}

} // end namespace luxe
} // end namespace utils
