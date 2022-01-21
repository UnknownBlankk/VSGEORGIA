// Generated by Haxe 4.1.5
#ifndef INCLUDED_TimingStruct
#define INCLUDED_TimingStruct

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(TimingStruct)



class HXCPP_CLASS_ATTRIBUTES TimingStruct_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TimingStruct_obj OBJ_;
		TimingStruct_obj();

	public:
		enum { _hx_ClassId = 0x5041e35f };

		void __construct(Float startBeat,Float bpm,Float endBeat,Float offset);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="TimingStruct")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"TimingStruct"); }
		static ::hx::ObjectPtr< TimingStruct_obj > __new(Float startBeat,Float bpm,Float endBeat,Float offset);
		static ::hx::ObjectPtr< TimingStruct_obj > __alloc(::hx::Ctx *_hx_ctx,Float startBeat,Float bpm,Float endBeat,Float offset);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TimingStruct_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TimingStruct",9f,90,60,67); }

		static void __boot();
		static ::Array< ::Dynamic> AllTimings;
		static void clearTimings();
		static ::Dynamic clearTimings_dyn();

		static void addTiming(Float startBeat,Float bpm,Float endBeat,Float offset);
		static ::Dynamic addTiming_dyn();

		static  ::TimingStruct getTimingAtTimestamp(Float msTime);
		static ::Dynamic getTimingAtTimestamp_dyn();

		static  ::TimingStruct getTimingAtBeat(Float beat);
		static ::Dynamic getTimingAtBeat_dyn();

		Float bpm;
		Float startBeat;
		Float endBeat;
		Float startTime;
		Float length;
};


#endif /* INCLUDED_TimingStruct */ 
