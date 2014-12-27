#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_audio_Audio
#include <snow/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_audio_AudioSystemBinding
#include <snow/audio/AudioSystemBinding.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_AudioSystem
#include <snow/platform/native/audio/AudioSystem.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_openal_AL
#include <snow/platform/native/audio/openal/AL.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_openal_ALC
#include <snow/platform/native/audio/openal/ALC.h>
#endif
#ifndef INCLUDED_snow_platform_native_audio_openal_AudioSystem
#include <snow/platform/native/audio/openal/AudioSystem.h>
#endif
#ifndef INCLUDED_snow_utils_AbstractClass
#include <snow/utils/AbstractClass.h>
#endif
namespace snow{
namespace platform{
namespace native{
namespace audio{
namespace openal{

Void AudioSystem_obj::__construct(::snow::audio::Audio _manager,::snow::Snow _lib)
{
HX_STACK_FRAME("snow.platform.native.audio.openal.AudioSystem","new",0x8ec5d5dd,"snow.platform.native.audio.openal.AudioSystem.new","snow/platform/native/audio/openal/AudioSystem.hx",19,0x8276c9d2)

HX_STACK_ARG(_manager,"_manager")

HX_STACK_ARG(_lib,"_lib")
{
	HX_STACK_LINE(19)
	super::__construct(_manager,_lib);
}
;
	return null();
}

//AudioSystem_obj::~AudioSystem_obj() { }

Dynamic AudioSystem_obj::__CreateEmpty() { return  new AudioSystem_obj; }
hx::ObjectPtr< AudioSystem_obj > AudioSystem_obj::__new(::snow::audio::Audio _manager,::snow::Snow _lib)
{  hx::ObjectPtr< AudioSystem_obj > result = new AudioSystem_obj();
	result->__construct(_manager,_lib);
	return result;}

Dynamic AudioSystem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioSystem_obj > result = new AudioSystem_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void AudioSystem_obj::init( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AudioSystem","init",0x5b0e02f3,"snow.platform.native.audio.openal.AudioSystem.init","snow/platform/native/audio/openal/AudioSystem.hx",24,0x8276c9d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		this->device = ::snow::platform::native::audio::openal::ALC_obj::openDevice(null());
		HX_STACK_LINE(30)
		if (((this->device == null()))){
			HX_STACK_LINE(31)
			::haxe::Log_obj::trace(HX_CSTRING("i / audio / failed / didn't create device!"),hx::SourceInfo(HX_CSTRING("AudioSystem.hx"),31,HX_CSTRING("snow.platform.native.audio.openal.AudioSystem"),HX_CSTRING("init")));
			HX_STACK_LINE(32)
			return null();
		}
		HX_STACK_LINE(35)
		::String _g = ((HX_CSTRING("created device / ") + ::Std_obj::string(this->device)) + HX_CSTRING(" / "));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		::String _g1 = (HX_CSTRING("i / audio / ") + ((_g + ::snow::platform::native::audio::openal::AL_obj::getErrorMeaning(::snow::platform::native::audio::openal::AL_obj::getError()))));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(35)
		::haxe::Log_obj::trace(_g1,hx::SourceInfo(HX_CSTRING("AudioSystem.hx"),35,HX_CSTRING("snow.platform.native.audio.openal.AudioSystem"),HX_CSTRING("init")));
		HX_STACK_LINE(37)
		this->context = ::snow::platform::native::audio::openal::ALC_obj::createContext(this->device,null());
		HX_STACK_LINE(39)
		::String _g2 = ((HX_CSTRING("created context / ") + ::Std_obj::string(this->context)) + HX_CSTRING(" / "));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(39)
		::String _g3 = (HX_CSTRING("i / audio / ") + ((_g2 + ::snow::platform::native::audio::openal::ALC_obj::getErrorMeaning(::snow::platform::native::audio::openal::ALC_obj::getError(this->device)))));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(39)
		::haxe::Log_obj::trace(_g3,hx::SourceInfo(HX_CSTRING("AudioSystem.hx"),39,HX_CSTRING("snow.platform.native.audio.openal.AudioSystem"),HX_CSTRING("init")));
		HX_STACK_LINE(41)
		::snow::platform::native::audio::openal::ALC_obj::makeContextCurrent(this->context);
		HX_STACK_LINE(43)
		::String _g4 = (HX_CSTRING("i / audio / ") + ((HX_CSTRING("set current / ") + ::snow::platform::native::audio::openal::AL_obj::getErrorMeaning(::snow::platform::native::audio::openal::AL_obj::getError()))));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(43)
		::haxe::Log_obj::trace(_g4,hx::SourceInfo(HX_CSTRING("AudioSystem.hx"),43,HX_CSTRING("snow.platform.native.audio.openal.AudioSystem"),HX_CSTRING("init")));
	}
return null();
}


Void AudioSystem_obj::destroy( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AudioSystem","destroy",0xcdf534f7,"snow.platform.native.audio.openal.AudioSystem.destroy","snow/platform/native/audio/openal/AudioSystem.hx",47,0x8276c9d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		::snow::platform::native::audio::openal::ALC_obj::makeContextCurrent(null());
		HX_STACK_LINE(50)
		::snow::platform::native::audio::openal::ALC_obj::destroyContext(this->context);
		HX_STACK_LINE(51)
		::snow::platform::native::audio::openal::ALC_obj::closeDevice(this->device);
		HX_STACK_LINE(136)
		Dynamic();
	}
return null();
}


Void AudioSystem_obj::suspend( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AudioSystem","suspend",0xa0be3779,"snow.platform.native.audio.openal.AudioSystem.suspend","snow/platform/native/audio/openal/AudioSystem.hx",57,0x8276c9d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		::snow::platform::native::audio::openal::ALC_obj::suspendContext(this->context);
		HX_STACK_LINE(62)
		::snow::platform::native::audio::openal::ALC_obj::makeContextCurrent(null());
	}
return null();
}


Void AudioSystem_obj::resume( ){
{
		HX_STACK_FRAME("snow.platform.native.audio.openal.AudioSystem","resume",0x2e033050,"snow.platform.native.audio.openal.AudioSystem.resume","snow/platform/native/audio/openal/AudioSystem.hx",66,0x8276c9d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		::snow::platform::native::audio::openal::ALC_obj::processContext(this->context);
		HX_STACK_LINE(71)
		::snow::platform::native::audio::openal::ALC_obj::makeContextCurrent(this->context);
	}
return null();
}



AudioSystem_obj::AudioSystem_obj()
{
}

void AudioSystem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioSystem);
	HX_MARK_MEMBER_NAME(device,"device");
	HX_MARK_MEMBER_NAME(context,"context");
	::snow::audio::AudioSystemBinding_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AudioSystem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(device,"device");
	HX_VISIT_MEMBER_NAME(context,"context");
	::snow::audio::AudioSystemBinding_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AudioSystem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return device; }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"suspend") ) { return suspend_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioSystem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioSystem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("device"));
	outFields->push(HX_CSTRING("context"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioSystem_obj,device),HX_CSTRING("device")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioSystem_obj,context),HX_CSTRING("context")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("device"),
	HX_CSTRING("context"),
	HX_CSTRING("init"),
	HX_CSTRING("destroy"),
	HX_CSTRING("suspend"),
	HX_CSTRING("resume"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioSystem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioSystem_obj::__mClass,"__mClass");
};

#endif

Class AudioSystem_obj::__mClass;

void AudioSystem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("snow.platform.native.audio.openal.AudioSystem"), hx::TCanCast< AudioSystem_obj> ,sStaticFields,sMemberFields,
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

void AudioSystem_obj::__boot()
{
}

} // end namespace snow
} // end namespace platform
} // end namespace native
} // end namespace audio
} // end namespace openal
