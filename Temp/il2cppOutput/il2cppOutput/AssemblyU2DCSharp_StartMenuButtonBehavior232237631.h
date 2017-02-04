#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartMenuButtonBehavior
struct  StartMenuButtonBehavior_t232237631  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject StartMenuButtonBehavior::wave
	GameObject_t1756533147 * ___wave_2;
	// UnityEngine.GameObject StartMenuButtonBehavior::logo
	GameObject_t1756533147 * ___logo_3;
	// System.Boolean StartMenuButtonBehavior::logoFade
	bool ___logoFade_4;
	// System.Int32 StartMenuButtonBehavior::time
	int32_t ___time_5;

public:
	inline static int32_t get_offset_of_wave_2() { return static_cast<int32_t>(offsetof(StartMenuButtonBehavior_t232237631, ___wave_2)); }
	inline GameObject_t1756533147 * get_wave_2() const { return ___wave_2; }
	inline GameObject_t1756533147 ** get_address_of_wave_2() { return &___wave_2; }
	inline void set_wave_2(GameObject_t1756533147 * value)
	{
		___wave_2 = value;
		Il2CppCodeGenWriteBarrier(&___wave_2, value);
	}

	inline static int32_t get_offset_of_logo_3() { return static_cast<int32_t>(offsetof(StartMenuButtonBehavior_t232237631, ___logo_3)); }
	inline GameObject_t1756533147 * get_logo_3() const { return ___logo_3; }
	inline GameObject_t1756533147 ** get_address_of_logo_3() { return &___logo_3; }
	inline void set_logo_3(GameObject_t1756533147 * value)
	{
		___logo_3 = value;
		Il2CppCodeGenWriteBarrier(&___logo_3, value);
	}

	inline static int32_t get_offset_of_logoFade_4() { return static_cast<int32_t>(offsetof(StartMenuButtonBehavior_t232237631, ___logoFade_4)); }
	inline bool get_logoFade_4() const { return ___logoFade_4; }
	inline bool* get_address_of_logoFade_4() { return &___logoFade_4; }
	inline void set_logoFade_4(bool value)
	{
		___logoFade_4 = value;
	}

	inline static int32_t get_offset_of_time_5() { return static_cast<int32_t>(offsetof(StartMenuButtonBehavior_t232237631, ___time_5)); }
	inline int32_t get_time_5() const { return ___time_5; }
	inline int32_t* get_address_of_time_5() { return &___time_5; }
	inline void set_time_5(int32_t value)
	{
		___time_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
