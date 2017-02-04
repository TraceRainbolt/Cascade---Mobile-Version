#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectPuller
struct  ObjectPuller_t3135798229  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ObjectPuller::pullRadius
	float ___pullRadius_2;
	// System.Single ObjectPuller::pullForce
	float ___pullForce_3;

public:
	inline static int32_t get_offset_of_pullRadius_2() { return static_cast<int32_t>(offsetof(ObjectPuller_t3135798229, ___pullRadius_2)); }
	inline float get_pullRadius_2() const { return ___pullRadius_2; }
	inline float* get_address_of_pullRadius_2() { return &___pullRadius_2; }
	inline void set_pullRadius_2(float value)
	{
		___pullRadius_2 = value;
	}

	inline static int32_t get_offset_of_pullForce_3() { return static_cast<int32_t>(offsetof(ObjectPuller_t3135798229, ___pullForce_3)); }
	inline float get_pullForce_3() const { return ___pullForce_3; }
	inline float* get_address_of_pullForce_3() { return &___pullForce_3; }
	inline void set_pullForce_3(float value)
	{
		___pullForce_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
