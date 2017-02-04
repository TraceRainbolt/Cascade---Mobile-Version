#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t2973420583;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t4251328308;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vibration
struct  Vibration_t2287070586  : public Il2CppObject
{
public:

public:
};

struct Vibration_t2287070586_StaticFields
{
public:
	// UnityEngine.AndroidJavaClass Vibration::unityPlayer
	AndroidJavaClass_t2973420583 * ___unityPlayer_0;
	// UnityEngine.AndroidJavaObject Vibration::currentActivity
	AndroidJavaObject_t4251328308 * ___currentActivity_1;
	// UnityEngine.AndroidJavaObject Vibration::vibrator
	AndroidJavaObject_t4251328308 * ___vibrator_2;

public:
	inline static int32_t get_offset_of_unityPlayer_0() { return static_cast<int32_t>(offsetof(Vibration_t2287070586_StaticFields, ___unityPlayer_0)); }
	inline AndroidJavaClass_t2973420583 * get_unityPlayer_0() const { return ___unityPlayer_0; }
	inline AndroidJavaClass_t2973420583 ** get_address_of_unityPlayer_0() { return &___unityPlayer_0; }
	inline void set_unityPlayer_0(AndroidJavaClass_t2973420583 * value)
	{
		___unityPlayer_0 = value;
		Il2CppCodeGenWriteBarrier(&___unityPlayer_0, value);
	}

	inline static int32_t get_offset_of_currentActivity_1() { return static_cast<int32_t>(offsetof(Vibration_t2287070586_StaticFields, ___currentActivity_1)); }
	inline AndroidJavaObject_t4251328308 * get_currentActivity_1() const { return ___currentActivity_1; }
	inline AndroidJavaObject_t4251328308 ** get_address_of_currentActivity_1() { return &___currentActivity_1; }
	inline void set_currentActivity_1(AndroidJavaObject_t4251328308 * value)
	{
		___currentActivity_1 = value;
		Il2CppCodeGenWriteBarrier(&___currentActivity_1, value);
	}

	inline static int32_t get_offset_of_vibrator_2() { return static_cast<int32_t>(offsetof(Vibration_t2287070586_StaticFields, ___vibrator_2)); }
	inline AndroidJavaObject_t4251328308 * get_vibrator_2() const { return ___vibrator_2; }
	inline AndroidJavaObject_t4251328308 ** get_address_of_vibrator_2() { return &___vibrator_2; }
	inline void set_vibrator_2(AndroidJavaObject_t4251328308 * value)
	{
		___vibrator_2 = value;
		Il2CppCodeGenWriteBarrier(&___vibrator_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
