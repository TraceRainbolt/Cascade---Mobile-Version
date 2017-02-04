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

// MouseBehavior
struct  MouseBehavior_t2784306371  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MouseBehavior::ring
	GameObject_t1756533147 * ___ring_2;
	// System.Boolean MouseBehavior::done
	bool ___done_3;
	// System.Int32 MouseBehavior::delay
	int32_t ___delay_4;
	// System.Int32 MouseBehavior::maxTouches
	int32_t ___maxTouches_5;

public:
	inline static int32_t get_offset_of_ring_2() { return static_cast<int32_t>(offsetof(MouseBehavior_t2784306371, ___ring_2)); }
	inline GameObject_t1756533147 * get_ring_2() const { return ___ring_2; }
	inline GameObject_t1756533147 ** get_address_of_ring_2() { return &___ring_2; }
	inline void set_ring_2(GameObject_t1756533147 * value)
	{
		___ring_2 = value;
		Il2CppCodeGenWriteBarrier(&___ring_2, value);
	}

	inline static int32_t get_offset_of_done_3() { return static_cast<int32_t>(offsetof(MouseBehavior_t2784306371, ___done_3)); }
	inline bool get_done_3() const { return ___done_3; }
	inline bool* get_address_of_done_3() { return &___done_3; }
	inline void set_done_3(bool value)
	{
		___done_3 = value;
	}

	inline static int32_t get_offset_of_delay_4() { return static_cast<int32_t>(offsetof(MouseBehavior_t2784306371, ___delay_4)); }
	inline int32_t get_delay_4() const { return ___delay_4; }
	inline int32_t* get_address_of_delay_4() { return &___delay_4; }
	inline void set_delay_4(int32_t value)
	{
		___delay_4 = value;
	}

	inline static int32_t get_offset_of_maxTouches_5() { return static_cast<int32_t>(offsetof(MouseBehavior_t2784306371, ___maxTouches_5)); }
	inline int32_t get_maxTouches_5() const { return ___maxTouches_5; }
	inline int32_t* get_address_of_maxTouches_5() { return &___maxTouches_5; }
	inline void set_maxTouches_5(int32_t value)
	{
		___maxTouches_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
