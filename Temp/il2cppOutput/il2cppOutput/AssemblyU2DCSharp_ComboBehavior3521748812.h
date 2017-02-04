#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ComboBehavior
struct  ComboBehavior_t3521748812  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] ComboBehavior::sprites
	SpriteU5BU5D_t3359083662* ___sprites_3;
	// UnityEngine.GameObject ComboBehavior::comboText
	GameObject_t1756533147 * ___comboText_4;
	// System.Int32 ComboBehavior::mult
	int32_t ___mult_5;

public:
	inline static int32_t get_offset_of_sprites_3() { return static_cast<int32_t>(offsetof(ComboBehavior_t3521748812, ___sprites_3)); }
	inline SpriteU5BU5D_t3359083662* get_sprites_3() const { return ___sprites_3; }
	inline SpriteU5BU5D_t3359083662** get_address_of_sprites_3() { return &___sprites_3; }
	inline void set_sprites_3(SpriteU5BU5D_t3359083662* value)
	{
		___sprites_3 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_3, value);
	}

	inline static int32_t get_offset_of_comboText_4() { return static_cast<int32_t>(offsetof(ComboBehavior_t3521748812, ___comboText_4)); }
	inline GameObject_t1756533147 * get_comboText_4() const { return ___comboText_4; }
	inline GameObject_t1756533147 ** get_address_of_comboText_4() { return &___comboText_4; }
	inline void set_comboText_4(GameObject_t1756533147 * value)
	{
		___comboText_4 = value;
		Il2CppCodeGenWriteBarrier(&___comboText_4, value);
	}

	inline static int32_t get_offset_of_mult_5() { return static_cast<int32_t>(offsetof(ComboBehavior_t3521748812, ___mult_5)); }
	inline int32_t get_mult_5() const { return ___mult_5; }
	inline int32_t* get_address_of_mult_5() { return &___mult_5; }
	inline void set_mult_5(int32_t value)
	{
		___mult_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
