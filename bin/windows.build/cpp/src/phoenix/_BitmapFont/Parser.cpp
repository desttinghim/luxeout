#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_phoenix__BitmapFont_Parser
#include <phoenix/_BitmapFont/Parser.h>
#endif
namespace phoenix{
namespace _BitmapFont{

Void Parser_obj::__construct()
{
	return null();
}

//Parser_obj::~Parser_obj() { }

Dynamic Parser_obj::__CreateEmpty() { return  new Parser_obj; }
hx::ObjectPtr< Parser_obj > Parser_obj::__new()
{  hx::ObjectPtr< Parser_obj > result = new Parser_obj();
	result->__construct();
	return result;}

Dynamic Parser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Parser_obj > result = new Parser_obj();
	result->__construct();
	return result;}

Dynamic Parser_obj::parse( ::String _font_data){
	HX_STACK_FRAME("phoenix._BitmapFont.Parser","parse",0xd76d46b4,"phoenix._BitmapFont.Parser.parse","phoenix/BitmapFont.hx",459,0xdfcf0e40)
	HX_STACK_ARG(_font_data,"_font_data")
	HX_STACK_LINE(461)
	if (((_font_data.length == (int)0))){
		HX_STACK_LINE(462)
		HX_STACK_DO_THROW(HX_CSTRING("BitmapFont:Parser: _font_data is 0 length"));
	}
	HX_STACK_LINE(467)
	::haxe::ds::IntMap _g = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(470)
	Dynamic _g1 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(_g1,"_g1");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &_g1,::haxe::ds::IntMap &_g){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/BitmapFont.hx",465,0xdfcf0e40)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("face") , null(),false);
				__result->Add(HX_CSTRING("chars") , _g,false);
				__result->Add(HX_CSTRING("point_size") , (int)0,false);
				__result->Add(HX_CSTRING("base_size") , (int)0,false);
				__result->Add(HX_CSTRING("char_count") , (int)0,false);
				__result->Add(HX_CSTRING("line_height") , (int)0,false);
				__result->Add(HX_CSTRING("pages") , _g1,false);
				__result->Add(HX_CSTRING("kernings") , ::haxe::ds::IntMap_obj::__new(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(465)
	Dynamic _info = _Function_1_1::Block(_g1,_g);		HX_STACK_VAR(_info,"_info");
	HX_STACK_LINE(473)
	Array< ::String > _lines = _font_data.split(HX_CSTRING("\n"));		HX_STACK_VAR(_lines,"_lines");
	HX_STACK_LINE(475)
	if (((_lines->length == (int)0))){
		HX_STACK_LINE(475)
		HX_STACK_DO_THROW(HX_CSTRING("BitmapFont; invalid font data specified for parser."));
	}
	HX_STACK_LINE(477)
	::String _first = _lines->__get((int)0);		HX_STACK_VAR(_first,"_first");
	HX_STACK_LINE(478)
	if (((::StringTools_obj::ltrim(_first).substr((int)0,(int)4) != HX_CSTRING("info")))){
		HX_STACK_LINE(479)
		HX_STACK_DO_THROW(HX_CSTRING("BitmapFont; invalid font data specified for parser. Format should be plain ascii text .fnt file only currently."));
	}
	HX_STACK_LINE(482)
	{
		HX_STACK_LINE(482)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(482)
		while(((_g2 < _lines->length))){
			HX_STACK_LINE(482)
			::String _line = _lines->__get(_g2);		HX_STACK_VAR(_line,"_line");
			HX_STACK_LINE(482)
			++(_g2);
			HX_STACK_LINE(483)
			Array< ::String > _tokens = _line.split(HX_CSTRING(" "));		HX_STACK_VAR(_tokens,"_tokens");
			HX_STACK_LINE(484)
			{
				HX_STACK_LINE(484)
				int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(484)
				while(((_g11 < _tokens->length))){
					HX_STACK_LINE(484)
					::String _current = _tokens->__get(_g11);		HX_STACK_VAR(_current,"_current");
					HX_STACK_LINE(484)
					++(_g11);
					HX_STACK_LINE(485)
					::phoenix::_BitmapFont::Parser_obj::parse_token(_current,_tokens,_info);
				}
			}
		}
	}
	HX_STACK_LINE(489)
	return _info;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parse,return )

Void Parser_obj::parse_token( ::String _token,Array< ::String > _tokens,Dynamic _info){
{
		HX_STACK_FRAME("phoenix._BitmapFont.Parser","parse_token",0xd2d00fee,"phoenix._BitmapFont.Parser.parse_token","phoenix/BitmapFont.hx",495,0xdfcf0e40)
		HX_STACK_ARG(_token,"_token")
		HX_STACK_ARG(_tokens,"_tokens")
		HX_STACK_ARG(_info,"_info")
		HX_STACK_LINE(498)
		_tokens->shift();
		HX_STACK_LINE(500)
		::haxe::ds::StringMap _items = ::phoenix::_BitmapFont::Parser_obj::tokenize_line(_tokens);		HX_STACK_VAR(_items,"_items");
		HX_STACK_LINE(502)
		::String _switch_1 = (_token);
		if (  ( _switch_1==HX_CSTRING("info"))){
			HX_STACK_LINE(505)
			{
				HX_STACK_LINE(505)
				::String _s = _items->get(HX_CSTRING("face"));		HX_STACK_VAR(_s,"_s");
				HX_STACK_LINE(505)
				if (((_s.indexOf(HX_CSTRING("\""),null()) != (int)-1))){
					HX_STACK_LINE(505)
					_s = ::StringTools_obj::replace(_s,HX_CSTRING("\""),HX_CSTRING(""));
				}
				HX_STACK_LINE(505)
				_info->__FieldRef(HX_CSTRING("face")) = _s;
			}
			HX_STACK_LINE(506)
			_info->__FieldRef(HX_CSTRING("point_size")) = ::Std_obj::parseFloat(_items->get(HX_CSTRING("size")));
		}
		else if (  ( _switch_1==HX_CSTRING("common"))){
			HX_STACK_LINE(510)
			_info->__FieldRef(HX_CSTRING("line_height")) = ::Std_obj::parseFloat(_items->get(HX_CSTRING("lineHeight")));
			HX_STACK_LINE(511)
			_info->__FieldRef(HX_CSTRING("base_size")) = ::Std_obj::parseFloat(_items->get(HX_CSTRING("base")));
		}
		else if (  ( _switch_1==HX_CSTRING("page"))){
			HX_STACK_LINE(516)
			Dynamic _g = ::Std_obj::parseInt(_items->get(HX_CSTRING("id")));		HX_STACK_VAR(_g,"_g");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &_g,::haxe::ds::StringMap &_items){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/BitmapFont.hx",515,0xdfcf0e40)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("id") , _g,false);
						struct _Function_3_1{
							inline static ::String Block( ::haxe::ds::StringMap &_items){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/BitmapFont.hx",517,0xdfcf0e40)
								{
									HX_STACK_LINE(517)
									::String _s;		HX_STACK_VAR(_s,"_s");
									HX_STACK_LINE(517)
									{
										HX_STACK_LINE(517)
										::String _s1 = _items->get(HX_CSTRING("file"));		HX_STACK_VAR(_s1,"_s1");
										HX_STACK_LINE(517)
										if (((_s1.indexOf(HX_CSTRING("\""),null()) != (int)-1))){
											HX_STACK_LINE(517)
											_s1 = ::StringTools_obj::replace(_s1,HX_CSTRING("\""),HX_CSTRING(""));
										}
										HX_STACK_LINE(517)
										_s = _s1;
									}
									HX_STACK_LINE(517)
									return ::StringTools_obj::trim(_s);
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("file") , _Function_3_1::Block(_items),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(515)
			_info->__Field(HX_CSTRING("pages"),true)->__Field(HX_CSTRING("push"),true)(_Function_2_1::Block(_g,_items));
		}
		else if (  ( _switch_1==HX_CSTRING("chars"))){
			HX_STACK_LINE(522)
			_info->__FieldRef(HX_CSTRING("char_count")) = ::Std_obj::parseInt(_items->get(HX_CSTRING("count")));
		}
		else if (  ( _switch_1==HX_CSTRING("char"))){
			HX_STACK_LINE(528)
			Dynamic _g1 = ::Std_obj::parseInt(_items->get(HX_CSTRING("id")));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(529)
			Float _g2 = ::Std_obj::parseFloat(_items->get(HX_CSTRING("x")));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(530)
			Float _g3 = ::Std_obj::parseFloat(_items->get(HX_CSTRING("y")));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(531)
			Float _g4 = ::Std_obj::parseFloat(_items->get(HX_CSTRING("width")));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(532)
			Float _g5 = ::Std_obj::parseFloat(_items->get(HX_CSTRING("height")));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(533)
			Float _g6 = ::Std_obj::parseFloat(_items->get(HX_CSTRING("xoffset")));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(534)
			Float _g7 = ::Std_obj::parseFloat(_items->get(HX_CSTRING("yoffset")));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(535)
			Float _g8 = ::Std_obj::parseFloat(_items->get(HX_CSTRING("xadvance")));		HX_STACK_VAR(_g8,"_g8");
			struct _Function_2_1{
				inline static Dynamic Block( Float &_g7,Dynamic &_g1,Float &_g5,Float &_g8,Float &_g6,Float &_g4,::haxe::ds::StringMap &_items,Float &_g2,Float &_g3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/BitmapFont.hx",527,0xdfcf0e40)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("id") , _g1,false);
						__result->Add(HX_CSTRING("x") , _g2,false);
						__result->Add(HX_CSTRING("y") , _g3,false);
						__result->Add(HX_CSTRING("width") , _g4,false);
						__result->Add(HX_CSTRING("height") , _g5,false);
						__result->Add(HX_CSTRING("xoffset") , _g6,false);
						__result->Add(HX_CSTRING("yoffset") , _g7,false);
						__result->Add(HX_CSTRING("xadvance") , _g8,false);
						__result->Add(HX_CSTRING("page") , ::Std_obj::parseInt(_items->get(HX_CSTRING("page"))),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(527)
			Dynamic _char = _Function_2_1::Block(_g7,_g1,_g5,_g8,_g6,_g4,_items,_g2,_g3);		HX_STACK_VAR(_char,"_char");
			HX_STACK_LINE(539)
			_info->__Field(HX_CSTRING("chars"),true)->__Field(HX_CSTRING("set"),true)(_char->__Field(HX_CSTRING("id"),true),_char);
		}
		else if (  ( _switch_1==HX_CSTRING("kerning"))){
			HX_STACK_LINE(545)
			Dynamic _first = ::Std_obj::parseInt(_items->get(HX_CSTRING("first")));		HX_STACK_VAR(_first,"_first");
			HX_STACK_LINE(546)
			Dynamic _second = ::Std_obj::parseInt(_items->get(HX_CSTRING("second")));		HX_STACK_VAR(_second,"_second");
			HX_STACK_LINE(547)
			Float _amount = ::Std_obj::parseFloat(_items->get(HX_CSTRING("amount")));		HX_STACK_VAR(_amount,"_amount");
			HX_STACK_LINE(549)
			::haxe::ds::IntMap _map = _info->__Field(HX_CSTRING("kernings"),true)->__Field(HX_CSTRING("get"),true)(_first);		HX_STACK_VAR(_map,"_map");
			HX_STACK_LINE(550)
			if (((_map == null()))){
				HX_STACK_LINE(551)
				_map = ::haxe::ds::IntMap_obj::__new();
				HX_STACK_LINE(552)
				_info->__Field(HX_CSTRING("kernings"),true)->__Field(HX_CSTRING("set"),true)(_first,_map);
			}
			HX_STACK_LINE(555)
			_map->set(_second,_amount);
		}
		else  {
		}
;
;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,parse_token,(void))

::haxe::ds::StringMap Parser_obj::tokenize_line( Array< ::String > _tokens){
	HX_STACK_FRAME("phoenix._BitmapFont.Parser","tokenize_line",0x946b4f79,"phoenix._BitmapFont.Parser.tokenize_line","phoenix/BitmapFont.hx",564,0xdfcf0e40)
	HX_STACK_ARG(_tokens,"_tokens")
	HX_STACK_LINE(566)
	::haxe::ds::StringMap _item_map = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_item_map,"_item_map");
	HX_STACK_LINE(568)
	{
		HX_STACK_LINE(568)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(568)
		while(((_g < _tokens->length))){
			HX_STACK_LINE(568)
			::String _token = _tokens->__get(_g);		HX_STACK_VAR(_token,"_token");
			HX_STACK_LINE(568)
			++(_g);
			HX_STACK_LINE(569)
			Array< ::String > _items = _token.split(HX_CSTRING("="));		HX_STACK_VAR(_items,"_items");
			HX_STACK_LINE(570)
			_item_map->set(_items->__get((int)0),_items->__get((int)1));
		}
	}
	HX_STACK_LINE(573)
	return _item_map;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,tokenize_line,return )

::String Parser_obj::trim( ::String _s){
	HX_STACK_FRAME("phoenix._BitmapFont.Parser","trim",0xe6f5f181,"phoenix._BitmapFont.Parser.trim","phoenix/BitmapFont.hx",577,0xdfcf0e40)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(577)
	return ::StringTools_obj::trim(_s);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,trim,return )

::String Parser_obj::unquote( ::String _s){
	HX_STACK_FRAME("phoenix._BitmapFont.Parser","unquote",0xf2d63304,"phoenix._BitmapFont.Parser.unquote","phoenix/BitmapFont.hx",578,0xdfcf0e40)
	HX_STACK_ARG(_s,"_s")
	HX_STACK_LINE(579)
	if (((_s.indexOf(HX_CSTRING("\""),null()) != (int)-1))){
		HX_STACK_LINE(580)
		_s = ::StringTools_obj::replace(_s,HX_CSTRING("\""),HX_CSTRING(""));
	}
	HX_STACK_LINE(581)
	return _s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,unquote,return )


Parser_obj::Parser_obj()
{
}

Dynamic Parser_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"trim") ) { return trim_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unquote") ) { return unquote_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"parse_token") ) { return parse_token_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tokenize_line") ) { return tokenize_line_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Parser_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Parser_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("parse"),
	HX_CSTRING("parse_token"),
	HX_CSTRING("tokenize_line"),
	HX_CSTRING("trim"),
	HX_CSTRING("unquote"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
};

#endif

Class Parser_obj::__mClass;

void Parser_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix._BitmapFont.Parser"), hx::TCanCast< Parser_obj> ,sStaticFields,sMemberFields,
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

void Parser_obj::__boot()
{
}

} // end namespace phoenix
} // end namespace _BitmapFont
