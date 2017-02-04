#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ImplodeBehavior
struct  ImplodeBehavior_t358059666  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.ParticleSystem ImplodeBehavior::sys
	ParticleSystem_t3394631041 * ___sys_2;
	// UnityEngine.Color ImplodeBehavior::color
	Color_t2020392075  ___color_3;

public:
	inline static int32_t get_offset_of_sys_2() { return static_cast<int32_t>(offsetof(ImplodeBehavior_t358059666, ___sys_2)); }
	inline ParticleSystem_t3394631041 * get_sys_2() const { return ___sys_2; }
	inline ParticleSystem_t3394631041 ** get_address_of_sys_2() { return &___sys_2; }
	inline void set_sys_2(ParticleSystem_t3394631041 * value)
	{
		___sys_2 = value;
		Il2CppCodeGenWriteBarrier(&___sys_2, value);
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(ImplodeBehavior_t358059666, ___color_3)); }
	inline Color_t2020392075  get_color_3() const { return ___color_3; }
	inline Color_t2020392075 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color_t2020392075  value)
	{
		___color_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
