// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Caching
#include <Caching.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_19_setCurrentLevel,"Paths","setCurrentLevel",0x8a8c27ed,"Paths.setCurrentLevel","Paths.hx",19,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_23_getPath,"Paths","getPath",0x5f104ffb,"Paths.getPath","Paths.hx",23,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_43_getLibraryPath,"Paths","getLibraryPath",0xe56efeaa,"Paths.getLibraryPath","Paths.hx",43,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_48_getLibraryPathForce,"Paths","getLibraryPathForce",0xe1e5bae1,"Paths.getLibraryPathForce","Paths.hx",48,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_53_getPreloadPath,"Paths","getPreloadPath",0x2fdd9e78,"Paths.getPreloadPath","Paths.hx",53,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_58_file,"Paths","file",0x8f872fdc,"Paths.file","Paths.hx",58,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_63_lua,"Paths","lua",0x5a344458,"Paths.lua","Paths.hx",63,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_68_luaImage,"Paths","luaImage",0xedd38be3,"Paths.luaImage","Paths.hx",68,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_73_txt,"Paths","txt",0x5a3a5910,"Paths.txt","Paths.hx",73,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_78_xml,"Paths","xml",0x5a3d5877,"Paths.xml","Paths.hx",78,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_83_json,"Paths","json",0x9233a388,"Paths.json","Paths.hx",83,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_88_sound,"Paths","sound",0x86f65f6f,"Paths.sound","Paths.hx",88,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_93_soundRandom,"Paths","soundRandom",0x8e79b2d2,"Paths.soundRandom","Paths.hx",93,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_98_music,"Paths","music",0x1684a345,"Paths.music","Paths.hx",98,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_102_voices,"Paths","voices",0xbbb84fe1,"Paths.voices","Paths.hx",102,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_112_inst,"Paths","inst",0x9186a526,"Paths.inst","Paths.hx",112,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_123_image,"Paths","image",0xc392f1fb,"Paths.image","Paths.hx",123,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_128_font,"Paths","font",0x8f8bbf2f,"Paths.font","Paths.hx",128,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_132_getSparrowAtlas,"Paths","getSparrowAtlas",0x5a1f05f5,"Paths.getSparrowAtlas","Paths.hx",132,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_151_imageCached,"Paths","imageCached",0x1ceff43d,"Paths.imageCached","Paths.hx",151,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_159_getPackerAtlas,"Paths","getPackerAtlas",0xa8de8c4f,"Paths.getPackerAtlas","Paths.hx",159,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_13_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",13,0x309ea470)

void Paths_obj::__construct() { }

Dynamic Paths_obj::__CreateEmpty() { return new Paths_obj; }

void *Paths_obj::_hx_vtable = 0;

Dynamic Paths_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Paths_obj > _hx_result = new Paths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Paths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x44c8e46a;
}

::String Paths_obj::SOUND_EXT;

::String Paths_obj::currentLevel;

void Paths_obj::setCurrentLevel(::String name){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_19_setCurrentLevel)
HXDLIN(  19)		::Paths_obj::currentLevel = name.toLowerCase();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,setCurrentLevel,(void))

::String Paths_obj::getPath(::String file,::String type,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_23_getPath)
HXLINE(  24)		if (::hx::IsNotNull( library )) {
HXLINE(  25)			return ::Paths_obj::getLibraryPath(file,library);
            		}
HXLINE(  27)		if (::hx::IsNotNull( ::Paths_obj::currentLevel )) {
HXLINE(  29)			::String library = ::Paths_obj::currentLevel;
HXDLIN(  29)			::String levelPath = (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + library) + HX_("/",2f,00,00,00)) + file);
HXLINE(  30)			if (::openfl::utils::Assets_obj::exists(levelPath,type)) {
HXLINE(  31)				return levelPath;
            			}
HXLINE(  33)			levelPath = ((((HX_("shared",a5,5e,2b,1d) + HX_(":assets/",52,05,4a,2c)) + HX_("shared",a5,5e,2b,1d)) + HX_("/",2f,00,00,00)) + file);
HXLINE(  34)			if (::openfl::utils::Assets_obj::exists(levelPath,type)) {
HXLINE(  35)				return levelPath;
            			}
            		}
HXLINE(  38)		return (HX_("assets/",4c,2a,dc,36) + file);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,getPath,return )

::String Paths_obj::getLibraryPath(::String file,::String __o_library){
            		::String library = __o_library;
            		if (::hx::IsNull(__o_library)) library = HX_("preload",c9,47,43,35);
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_43_getLibraryPath)
HXDLIN(  43)		bool _hx_tmp;
HXDLIN(  43)		if ((library != HX_("preload",c9,47,43,35))) {
HXDLIN(  43)			_hx_tmp = (library == HX_("default",c1,d8,c3,9b));
            		}
            		else {
HXDLIN(  43)			_hx_tmp = true;
            		}
HXDLIN(  43)		if (_hx_tmp) {
HXDLIN(  43)			return (HX_("assets/",4c,2a,dc,36) + file);
            		}
            		else {
HXDLIN(  43)			return (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + library) + HX_("/",2f,00,00,00)) + file);
            		}
HXDLIN(  43)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getLibraryPath,return )

::String Paths_obj::getLibraryPathForce(::String file,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_48_getLibraryPathForce)
HXDLIN(  48)		return (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + library) + HX_("/",2f,00,00,00)) + file);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getLibraryPathForce,return )

::String Paths_obj::getPreloadPath(::String file){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_53_getPreloadPath)
HXDLIN(  53)		return (HX_("assets/",4c,2a,dc,36) + file);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,getPreloadPath,return )

::String Paths_obj::file(::String file,::String library,::String __o_type){
            		::String type = __o_type;
            		if (::hx::IsNull(__o_type)) type = HX_("TEXT",ad,94,ba,37);
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_58_file)
HXDLIN(  58)		return ::Paths_obj::getPath(file,type,library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,file,return )

::String Paths_obj::lua(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_63_lua)
HXDLIN(  63)		return ::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".lua",4a,2a,ba,1e)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,lua,return )

::String Paths_obj::luaImage(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_68_luaImage)
HXDLIN(  68)		return ::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,luaImage,return )

::String Paths_obj::txt(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_73_txt)
HXDLIN(  73)		return ::Paths_obj::getPath(((HX_("",00,00,00,00) + key) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,txt,return )

::String Paths_obj::xml(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_78_xml)
HXDLIN(  78)		return ::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,xml,return )

::String Paths_obj::json(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_83_json)
HXDLIN(  83)		return ::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".json",56,f1,d6,c2)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,json,return )

::String Paths_obj::sound(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_88_sound)
HXDLIN(  88)		return ::Paths_obj::getPath((((HX_("sounds/",eb,02,a5,b6) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("SOUND",af,c4,ba,fe),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,sound,return )

::String Paths_obj::soundRandom(::String key,int min,int max,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_93_soundRandom)
HXDLIN(  93)		return ::Paths_obj::sound((key + ::flixel::FlxG_obj::random->_hx_int(min,max,null())),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Paths_obj,soundRandom,return )

::String Paths_obj::music(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_98_music)
HXDLIN(  98)		return ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,music,return )

::String Paths_obj::voices(::String song){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_102_voices)
HXLINE( 103)		::String songLowercase = ::StringTools_obj::replace(song,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)).toLowerCase();
HXLINE( 104)		::String _hx_switch_0 = songLowercase;
            		if (  (_hx_switch_0==HX_("dad-battle",be,d5,66,07)) ){
HXLINE( 105)			songLowercase = HX_("dadbattle",bf,6a,a9,a6);
HXDLIN( 105)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("philly-nice",22,2e,26,44)) ){
HXLINE( 106)			songLowercase = HX_("philly",28,77,5e,ef);
HXDLIN( 106)			goto _hx_goto_14;
            		}
            		_hx_goto_14:;
HXLINE( 108)		return (((HX_("songs:assets/songs/",c1,ed,e6,7e) + songLowercase) + HX_("/Voices.",1e,f6,e5,90)) + HX_("ogg",4f,94,54,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,voices,return )

::String Paths_obj::inst(::String song){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_112_inst)
HXLINE( 113)		::String songLowercase = ::StringTools_obj::replace(song,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)).toLowerCase();
HXLINE( 114)		::String _hx_switch_0 = songLowercase;
            		if (  (_hx_switch_0==HX_("dad-battle",be,d5,66,07)) ){
HXLINE( 115)			songLowercase = HX_("dadbattle",bf,6a,a9,a6);
HXDLIN( 115)			goto _hx_goto_16;
            		}
            		if (  (_hx_switch_0==HX_("philly-nice",22,2e,26,44)) ){
HXLINE( 116)			songLowercase = HX_("philly",28,77,5e,ef);
HXDLIN( 116)			goto _hx_goto_16;
            		}
            		_hx_goto_16:;
HXLINE( 118)		return (((HX_("songs:assets/songs/",c1,ed,e6,7e) + songLowercase) + HX_("/Inst.",f9,6e,13,1c)) + HX_("ogg",4f,94,54,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,inst,return )

::String Paths_obj::image(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_123_image)
HXDLIN( 123)		return ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,image,return )

::String Paths_obj::font(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_128_font)
HXDLIN( 128)		return (HX_("assets/fonts/",37,ff,a5,9c) + key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,font,return )

 ::flixel::graphics::frames::FlxAtlasFrames Paths_obj::getSparrowAtlas(::String key,::String library, ::Dynamic __o_isCharacter){
            		 ::Dynamic isCharacter = __o_isCharacter;
            		if (::hx::IsNull(__o_isCharacter)) isCharacter = false;
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_132_getSparrowAtlas)
HXLINE( 133)		bool usecahce = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("cacheImages",9a,7c,33,1d),::hx::paccDynamic)) );
HXLINE( 137)		if (( (bool)(isCharacter) )) {
HXLINE( 138)			if (usecahce) {
HXLINE( 140)				 ::flixel::graphics::FlxGraphic data = ( ( ::flixel::graphics::FlxGraphic)(::Caching_obj::bitmapData->get(key)) );
HXDLIN( 140)				 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 140)				::String _hx_tmp1 = (((HX_("finding ",b7,19,76,ad) + key) + HX_(" - ",73,6f,18,00)) + ::Std_obj::string(data->bitmap));
HXDLIN( 140)				_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/Paths.hx",64,c7,bd,1c),153,HX_("Paths",0e,7b,84,50),HX_("imageCached",9d,69,32,f9)));
HXDLIN( 140)				return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(data,::Paths_obj::getPath(((HX_("images/characters/",2e,e1,08,ac) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
            			else {
HXLINE( 145)				::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + (HX_("characters/",45,3c,bf,be) + key)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 145)				return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/characters/",2e,e1,08,ac) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
            		}
HXLINE( 146)		::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 146)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,getSparrowAtlas,return )

 ::flixel::graphics::FlxGraphic Paths_obj::imageCached(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_151_imageCached)
HXLINE( 152)		 ::flixel::graphics::FlxGraphic data = ( ( ::flixel::graphics::FlxGraphic)(::Caching_obj::bitmapData->get(key)) );
HXLINE( 153)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 153)		::String _hx_tmp1 = (((HX_("finding ",b7,19,76,ad) + key) + HX_(" - ",73,6f,18,00)) + ::Std_obj::string(data->bitmap));
HXDLIN( 153)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/Paths.hx",64,c7,bd,1c),153,HX_("Paths",0e,7b,84,50),HX_("imageCached",9d,69,32,f9)));
HXLINE( 154)		return data;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,imageCached,return )

 ::flixel::graphics::frames::FlxAtlasFrames Paths_obj::getPackerAtlas(::String key,::String library, ::Dynamic __o_isCharacter){
            		 ::Dynamic isCharacter = __o_isCharacter;
            		if (::hx::IsNull(__o_isCharacter)) isCharacter = false;
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_159_getPackerAtlas)
HXLINE( 160)		bool usecahce = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("cacheImages",9a,7c,33,1d),::hx::paccDynamic)) );
HXLINE( 164)		if (( (bool)(isCharacter) )) {
HXLINE( 165)			if (usecahce) {
HXLINE( 167)				 ::flixel::graphics::FlxGraphic data = ( ( ::flixel::graphics::FlxGraphic)(::Caching_obj::bitmapData->get(key)) );
HXDLIN( 167)				 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 167)				::String _hx_tmp1 = (((HX_("finding ",b7,19,76,ad) + key) + HX_(" - ",73,6f,18,00)) + ::Std_obj::string(data->bitmap));
HXDLIN( 167)				_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/Paths.hx",64,c7,bd,1c),153,HX_("Paths",0e,7b,84,50),HX_("imageCached",9d,69,32,f9)));
HXDLIN( 167)				return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(data,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
            			else {
HXLINE( 172)				::String library1 = null();
HXDLIN( 172)				::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + (HX_("characters/",45,3c,bf,be) + key)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
HXDLIN( 172)				return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(_hx_tmp,::Paths_obj::getPath(((HX_("images/characters/",2e,e1,08,ac) + key) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library));
            			}
            		}
HXLINE( 173)		::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 173)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,getPackerAtlas,return )


Paths_obj::Paths_obj()
{
}

bool Paths_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lua") ) { outValue = lua_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"txt") ) { outValue = txt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"xml") ) { outValue = xml_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { outValue = file_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"json") ) { outValue = json_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"inst") ) { outValue = inst_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"font") ) { outValue = font_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { outValue = sound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"music") ) { outValue = music_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"image") ) { outValue = image_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"voices") ) { outValue = voices_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"luaImage") ) { outValue = luaImage_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"soundRandom") ) { outValue = soundRandom_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"imageCached") ) { outValue = imageCached_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentLevel") ) { outValue = ( currentLevel ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getLibraryPath") ) { outValue = getLibraryPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPreloadPath") ) { outValue = getPreloadPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPackerAtlas") ) { outValue = getPackerAtlas_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setCurrentLevel") ) { outValue = setCurrentLevel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSparrowAtlas") ) { outValue = getSparrowAtlas_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getLibraryPathForce") ) { outValue = getLibraryPathForce_dyn(); return true; }
	}
	return false;
}

bool Paths_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"currentLevel") ) { currentLevel=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Paths_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Paths_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Paths_obj::SOUND_EXT,HX_("SOUND_EXT",b1,35,8c,6f)},
	{::hx::fsString,(void *) &Paths_obj::currentLevel,HX_("currentLevel",8b,fa,6e,b9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Paths_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Paths_obj::SOUND_EXT,"SOUND_EXT");
	HX_MARK_MEMBER_NAME(Paths_obj::currentLevel,"currentLevel");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Paths_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Paths_obj::SOUND_EXT,"SOUND_EXT");
	HX_VISIT_MEMBER_NAME(Paths_obj::currentLevel,"currentLevel");
};

#endif

::hx::Class Paths_obj::__mClass;

static ::String Paths_obj_sStaticFields[] = {
	HX_("SOUND_EXT",b1,35,8c,6f),
	HX_("currentLevel",8b,fa,6e,b9),
	HX_("setCurrentLevel",4d,cd,24,d8),
	HX_("getPath",5b,95,d4,1c),
	HX_("getLibraryPath",4a,25,d8,33),
	HX_("getLibraryPathForce",41,90,ac,3f),
	HX_("getPreloadPath",18,c5,46,7e),
	HX_("file",7c,ce,bb,43),
	HX_("lua",b8,59,52,00),
	HX_("luaImage",83,fa,cb,3b),
	HX_("txt",70,6e,58,00),
	HX_("xml",d7,6d,5b,00),
	HX_("json",28,42,68,46),
	HX_("sound",cf,8c,cc,80),
	HX_("soundRandom",32,28,bc,6a),
	HX_("music",a5,d0,5a,10),
	HX_("voices",81,d6,49,5d),
	HX_("inst",c6,43,bb,45),
	HX_("image",5b,1f,69,bd),
	HX_("font",cf,5d,c0,43),
	HX_("getSparrowAtlas",55,ab,b7,a7),
	HX_("imageCached",9d,69,32,f9),
	HX_("getPackerAtlas",ef,b2,47,f7),
	::String(null())
};

void Paths_obj::__register()
{
	Paths_obj _hx_dummy;
	Paths_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Paths",0e,7b,84,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Paths_obj::__GetStatic;
	__mClass->mSetStaticField = &Paths_obj::__SetStatic;
	__mClass->mMarkFunc = Paths_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Paths_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Paths_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Paths_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Paths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Paths_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Paths_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_13_boot)
HXDLIN(  13)		SOUND_EXT = HX_("ogg",4f,94,54,00);
            	}
}

