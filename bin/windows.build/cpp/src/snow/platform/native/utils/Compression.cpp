#include <hxcpp.h>

#ifndef INCLUDED_snow_platform_native_utils_Compression
#include <snow/platform/native/utils/Compression.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace utils{

::snow::platform::native::utils::Compression Compression_obj::DEFLATE;

::snow::platform::native::utils::Compression Compression_obj::GZIP;

::snow::platform::native::utils::Compression Compression_obj::LZMA;

::snow::platform::native::utils::Compression Compression_obj::ZLIB;

HX_DEFINE_CREATE_ENUM(Compression_obj)

int Compression_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("DEFLATE")) return 0;
	if (inName==HX_CSTRING("GZIP")) return 3;
	if (inName==HX_CSTRING("LZMA")) return 2;
	if (inName==HX_CSTRING("ZLIB")) return 1;
	return super::__FindIndex(inName);
}

int Compression_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("DEFLATE")) return 0;
	if (inName==HX_CSTRING("GZIP")) return 0;
	if (inName==HX_CSTRING("LZMA")) return 0;
	if (inName==HX_CSTRING("ZLIB")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Compression_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("DEFLATE")) return DEFLATE;
	if (inName==HX_CSTRING("GZIP")) return GZIP;
	if (inName==HX_CSTRING("LZMA")) return LZMA;
	if (inName==HX_CSTRING("ZLIB")) return ZLIB;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("DEFLATE"),
	HX_CSTRING("ZLIB"),
	HX_CSTRING("LZMA"),
	HX_CSTRING("GZIP"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Compression_obj::DEFLATE,"DEFLATE");
	HX_MARK_MEMBER_NAME(Compression_obj::GZIP,"GZIP");
	HX_MARK_MEMBER_NAME(Compression_obj::LZMA,"LZMA");
	HX_MARK_MEMBER_NAME(Compression_obj::ZLIB,"ZLIB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Compression_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Compression_obj::DEFLATE,"DEFLATE");
	HX_VISIT_MEMBER_NAME(Compression_obj::GZIP,"GZIP");
	HX_VISIT_MEMBER_NAME(Compression_obj::LZMA,"LZMA");
	HX_VISIT_MEMBER_NAME(Compression_obj::ZLIB,"ZLIB");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Compression_obj::__mClass;

Dynamic __Create_Compression_obj() { return new Compression_obj; }

void Compression_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.utils.Compression"), hx::TCanCast< Compression_obj >,sStaticFields,sMemberFields,
	&__Create_Compression_obj, &__Create,
	&super::__SGetClass(), &CreateCompression_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Compression_obj::__boot()
{
hx::Static(DEFLATE) = hx::CreateEnum< Compression_obj >(HX_CSTRING("DEFLATE"),0);
hx::Static(GZIP) = hx::CreateEnum< Compression_obj >(HX_CSTRING("GZIP"),3);
hx::Static(LZMA) = hx::CreateEnum< Compression_obj >(HX_CSTRING("LZMA"),2);
hx::Static(ZLIB) = hx::CreateEnum< Compression_obj >(HX_CSTRING("ZLIB"),1);
}


} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace utils
