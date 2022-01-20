// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_ResetScoreOption
#include <ResetScoreOption.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3ef98e6da45dca70_815_new,"ResetScoreOption","new",0x5d8eefea,"ResetScoreOption.new","Options.hx",815,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_3ef98e6da45dca70_825_press,"ResetScoreOption","press",0x4271e98d,"ResetScoreOption.press","Options.hx",825,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_3ef98e6da45dca70_850_updateDisplay,"ResetScoreOption","updateDisplay",0x42963f43,"ResetScoreOption.updateDisplay","Options.hx",850,0x9d9a0240)

void ResetScoreOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_3ef98e6da45dca70_815_new)
HXLINE( 817)		this->confirm = false;
HXLINE( 821)		super::__construct();
HXLINE( 822)		this->description = desc;
            	}

Dynamic ResetScoreOption_obj::__CreateEmpty() { return new ResetScoreOption_obj; }

void *ResetScoreOption_obj::_hx_vtable = 0;

Dynamic ResetScoreOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ResetScoreOption_obj > _hx_result = new ResetScoreOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ResetScoreOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0a3425b8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0a3425b8;
	} else {
		return inClassId==(int)0x27a70eb9;
	}
}

bool ResetScoreOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_3ef98e6da45dca70_825_press)
HXLINE( 826)		if (!(this->confirm)) {
HXLINE( 828)			this->confirm = true;
HXLINE( 829)			this->display = this->updateDisplay();
HXLINE( 830)			return true;
            		}
HXLINE( 832)		::flixel::FlxG_obj::save->data->__SetField(HX_("songScores",96,1a,f0,a0),null(),::hx::paccDynamic);
HXLINE( 833)		{
HXLINE( 833)			 ::Dynamic key = ::Highscore_obj::songScores->keys();
HXDLIN( 833)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 833)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 835)				::Highscore_obj::songScores->set(key1,0);
            			}
            		}
HXLINE( 837)		::flixel::FlxG_obj::save->data->__SetField(HX_("songCombos",1a,c2,aa,22),null(),::hx::paccDynamic);
HXLINE( 838)		{
HXLINE( 838)			 ::Dynamic key1 = ::Highscore_obj::songCombos->keys();
HXDLIN( 838)			while(( (bool)(key1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 838)				::String key = ( (::String)(key1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 840)				::Highscore_obj::songCombos->set(key,HX_("",00,00,00,00));
            			}
            		}
HXLINE( 842)		this->confirm = false;
HXLINE( 843)		::haxe::Log_obj::trace(HX_("Highscores Wiped",e0,31,8c,e1),::hx::SourceInfo(HX_("source/Options.hx",34,ca,fe,29),843,HX_("ResetScoreOption",f8,72,52,34),HX_("press",83,53,88,c8)));
HXLINE( 844)		this->display = this->updateDisplay();
HXLINE( 845)		return true;
            	}


::String ResetScoreOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_3ef98e6da45dca70_850_updateDisplay)
HXDLIN( 850)		if (this->confirm) {
HXDLIN( 850)			return HX_("Confirm Score Reset",01,e3,61,66);
            		}
            		else {
HXDLIN( 850)			return HX_("Reset Score",01,16,25,27);
            		}
HXDLIN( 850)		return null();
            	}



::hx::ObjectPtr< ResetScoreOption_obj > ResetScoreOption_obj::__new(::String desc) {
	::hx::ObjectPtr< ResetScoreOption_obj > __this = new ResetScoreOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< ResetScoreOption_obj > ResetScoreOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	ResetScoreOption_obj *__this = (ResetScoreOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ResetScoreOption_obj), true, "ResetScoreOption"));
	*(void **)__this = ResetScoreOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

ResetScoreOption_obj::ResetScoreOption_obj()
{
}

::hx::Val ResetScoreOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"confirm") ) { return ::hx::Val( confirm ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ResetScoreOption_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"confirm") ) { confirm=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ResetScoreOption_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("confirm",00,9d,39,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ResetScoreOption_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(ResetScoreOption_obj,confirm),HX_("confirm",00,9d,39,10)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ResetScoreOption_obj_sStaticStorageInfo = 0;
#endif

static ::String ResetScoreOption_obj_sMemberFields[] = {
	HX_("confirm",00,9d,39,10),
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class ResetScoreOption_obj::__mClass;

void ResetScoreOption_obj::__register()
{
	ResetScoreOption_obj _hx_dummy;
	ResetScoreOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ResetScoreOption",f8,72,52,34);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ResetScoreOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ResetScoreOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ResetScoreOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ResetScoreOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

