#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
namespace haxe{
namespace io{

Void Input_obj::__construct()
{
	return null();
}

//Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new()
{  hx::ObjectPtr< Input_obj > result = new Input_obj();
	result->__construct();
	return result;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > result = new Input_obj();
	result->__construct();
	return result;}

int Input_obj::readByte( ){
	HX_STACK_FRAME("haxe.io.Input","readByte",0x4de8a3c2,"haxe.io.Input.readByte","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",37,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	HX_STACK_DO_THROW(HX_CSTRING("Not implemented"));
	HX_STACK_LINE(40)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readByte,return )

Void Input_obj::close( ){
{
		HX_STACK_FRAME("haxe.io.Input","close",0xfc421af4,"haxe.io.Input.close","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",67,0x854a6ecd)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,close,(void))

::String Input_obj::readLine( ){
	HX_STACK_FRAME("haxe.io.Input","readLine",0x54789cae,"haxe.io.Input.readLine","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",127,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(128)
	::StringBuf buf = ::StringBuf_obj::__new();		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(129)
	int last;		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(130)
	::String s;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(131)
	try
	{
	HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
	{
		HX_STACK_LINE(132)
		while((((last = this->readByte()) != (int)10))){
			HX_STACK_LINE(133)
			buf->b->push(::String::fromCharCode(last));
		}
		HX_STACK_LINE(134)
		s = buf->b->join(HX_CSTRING(""));
		HX_STACK_LINE(135)
		if (((s.charCodeAt((s.length - (int)1)) == (int)13))){
			HX_STACK_LINE(135)
			s = s.substr((int)0,(int)-1);
		}
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::haxe::io::Eof >() ){
			HX_STACK_BEGIN_CATCH
			::haxe::io::Eof e = __e;{
				HX_STACK_LINE(137)
				s = buf->b->join(HX_CSTRING(""));
				HX_STACK_LINE(138)
				if (((s.length == (int)0))){
					HX_STACK_LINE(139)
					HX_STACK_DO_THROW(e);
				}
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(141)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readLine,return )

int Input_obj::readInt32( ){
	HX_STACK_FRAME("haxe.io.Input","readInt32",0xde2f3154,"haxe.io.Input.readInt32","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",310,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(311)
	int ch1 = this->readByte();		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(312)
	int ch2 = this->readByte();		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(313)
	int ch3 = this->readByte();		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(314)
	int ch4 = this->readByte();		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(322)
	if ((this->bigEndian)){
		HX_STACK_LINE(322)
		return (int((int((int(ch4) | int((int(ch3) << int((int)8))))) | int((int(ch2) << int((int)16))))) | int((int(ch1) << int((int)24))));
	}
	else{
		HX_STACK_LINE(322)
		return (int((int((int(ch1) | int((int(ch2) << int((int)8))))) | int((int(ch3) << int((int)16))))) | int((int(ch4) << int((int)24))));
	}
	HX_STACK_LINE(322)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readInt32,return )


Input_obj::Input_obj()
{
}

Dynamic Input_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"readLine") ) { return readLine_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return bigEndian; }
		if (HX_FIELD_EQ(inName,"readInt32") ) { return readInt32_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Input_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { bigEndian=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bigEndian"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Input_obj,bigEndian),HX_CSTRING("bigEndian")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bigEndian"),
	HX_CSTRING("readByte"),
	HX_CSTRING("close"),
	HX_CSTRING("readLine"),
	HX_CSTRING("readInt32"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#endif

Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.io.Input"), hx::TCanCast< Input_obj> ,sStaticFields,sMemberFields,
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

void Input_obj::__boot()
{
}

} // end namespace haxe
} // end namespace io
