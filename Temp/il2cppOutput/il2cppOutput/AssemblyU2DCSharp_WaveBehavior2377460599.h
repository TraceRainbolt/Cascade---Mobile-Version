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
// UnityEngine.PhysicsMaterial2D
struct PhysicsMaterial2D_t851691520;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t13116344;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// CameraShakeBehavior
struct CameraShakeBehavior_t3092048811;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WaveBehavior
struct  WaveBehavior_t2377460599  : public MonoBehaviour_t1158329972
{
public:
	// System.Single WaveBehavior::expansionSpeed
	float ___expansionSpeed_3;
	// System.Single WaveBehavior::maxSize
	float ___maxSize_4;
	// System.Single WaveBehavior::ringWidth
	float ___ringWidth_5;
	// UnityEngine.GameObject WaveBehavior::myBubble
	GameObject_t1756533147 * ___myBubble_6;
	// UnityEngine.Color WaveBehavior::color
	Color_t2020392075  ___color_7;
	// UnityEngine.PhysicsMaterial2D WaveBehavior::wavePhysics
	PhysicsMaterial2D_t851691520 * ___wavePhysics_8;
	// UnityEngine.Vector3 WaveBehavior::origin
	Vector3_t2243707580  ___origin_9;
	// System.Int32 WaveBehavior::comboCounter
	int32_t ___comboCounter_10;
	// UnityEngine.GameObject WaveBehavior::displayMult
	GameObject_t1756533147 * ___displayMult_11;
	// System.Boolean WaveBehavior::shake
	bool ___shake_12;
	// UnityEngine.CircleCollider2D WaveBehavior::outerRingCollider
	CircleCollider2D_t13116344 * ___outerRingCollider_13;
	// UnityEngine.SpriteRenderer WaveBehavior::sprite
	SpriteRenderer_t1209076198 * ___sprite_14;
	// System.Single WaveBehavior::sizeDiff
	float ___sizeDiff_15;
	// CameraShakeBehavior WaveBehavior::camShake
	CameraShakeBehavior_t3092048811 * ___camShake_16;

public:
	inline static int32_t get_offset_of_expansionSpeed_3() { return static_cast<int32_t>(offsetof(WaveBehavior_t2377460599, ___expansionSpeed_3)); }
	inline float get_expansionSpeed_3() const { return ___expansionSpeed_3; }
	inline float* get_address_of_expansionSpeed_3() { return &___expansionSpeed_3; }
	inline void set_expansionSpeed_3(float value)
	{
		___expansionSpeed_3 = value;
	}

	inline static int32_t get_offset_of_maxSize_4() { return static_cast<int32_t>(offsetof(WaveBehavior_t2377460599, ___maxSize_4)); }
	inline float get_maxSize_4() const { return ___maxSize_4; }
	inline float* get_address_of_maxSize_4() { return &___maxSize_4; }
	inline void set_maxSize_4(float value)
	{
		___maxSize_4 = value;
	}

	inline static int32_t get_offset_of_ringWidth_5() { return static_cast<int32_t>(offsetof(WaveBehavior_t2377460599, ___ringWidth_5)); }
	inline float get_ringWidth_5() const { return ___ringWidth_5; }
	inline float* get_address_of_ringWidth_5() { return &___ringWidth_5; }
	inline void set_ringWidth_5(float value)
	{
		___ringWidth_5 = value;
	}

	inline static int32_t get_offset_of_myBubble_6() { return static_cast<int32_t>(offsetof(WaveBehavior_t2377460599, ___myBubble_6)); }
	inline GameObject_t1756533147 * get_myBubble_6() const { return ___myBubble_6; }
	inline GameObject_t1756533147 ** get_address_of_myBubble_6() { return &___myBubble_6; }
	inline void set_myBubble_6(GameObject_t1756533147 * value)
	{
		___myBubble_6 = value;
		Il2CppCodeGenWriteBarrier(&___myBubble_6, value);
	}

	inline static int32_t get_offset_of_color_7() { return static_cast<int32_t>(offsetof(WaveBehavior_t2377460599, ___color_7)); }
	inline Color_t2020392075  get_color_7() const { return ___color_7; }
	inline Color_t2020392075 * get_address_of_color_7() { return &___color_7; }
	inline void set_color_7(Color_t2020392075  value)
	{
		___color_7 = value;
	}

	inline static int32_t get_offset_of_wavePhysics_8() { return static_cast<int32_t>(offsetof(WaveBehavior_t2377460599, ___wavePhysics_8)); }
	inline PhysicsMaterial2D_t851691520 * get_wavePhysics_8() const { return ___wavePhysics_8; }
	inline PhysicsMaterial2D_t851691520 ** get_address_of_wavePhysics_8() { return &___wavePhysics_8; }
	inline void set_wavePhysics_8(PhysicsMaterial2D_t851691520 * value)
	{
		___wavePhysics_8 = value;
		Il2CppCodeGenWriteBarrier(&___wavePhysics_8, value);
	}

	inline static int32_t get_offset_of_origin_9() { return static_cast<int32_t>(offsetof(WaveBehavior_t2377460599, ___origin_9)); }
	inline Vector3_t2243707580  get_origin_9() const { return ___origin_9; }
	inline Vector3_t2243707580 * get_address_of_origin_9() { return &___origin_9; }
	inline void set_origin_9(Vector3_t2243707580  value)
	{
		___origin_9 = value;
	}

	inline static int32_t get_offset_of_comboCounter_10() { return static_cast<int32_t>(offsetof(WaveBehavior_t2377460599, ___comboCounter_10)); }
	inline int32_t get_comboCounter_10() const { return ___comboCounter_10; }
	inline int32_t* get_address_of_comboCounter_10() { return &___comboCounter_10; }
	inline void set_comboCounter_10(int32_t value)
	{
		___comboCounter_10 = value;
	}

	inline static int32_t get_offset_of_displayMult_11() { return static_cast<int32_t>(offsetof(WaveBehavior_t2377460599, ___displayMult_11)); }
	inline GameObject_t1756533147 * get_displayMult_11() const { return ___displayMult_11; }
	inline GameObject_t1756533147 ** get_address_of_displayMult_11() { return &___displayMult_11; }
	inline void set_displayMult_11(GameObject_t1756533147 * value)
	{
		___displayMult_11 = value;
		Il2CppCodeGenWriteBarrier(&___displayMult_11, value);
	}

	inline static int32_t get_offset_of_shake_12() { return static_cast<int32_t>(offsetof(WaveBehavior_t2377460599, ___shake_12)); }
	inline bool get_shake_12() const { return ___shake_12; }
	inline bool* get_address_of_shake_12() { return &___shake_12; }
	inline void set_shake_12(bool value)
	{
		___shake_12 = value;
	}

	inline static int32_t get_offset_of_outerRingCollider_13() { return static_cast<int32_t>(offsetof(WaveBehavior_t2377460599, ___outerRingCollider_13)); }
	inline CircleCollider2D_t13116344 * get_outerRingCollider_13() const { return ___outerRingCollider_13; }
	inline CircleCollider2D_t13116344 ** get_address_of_outerRingCollider_13() { return &___outerRingCollider_13; }
	inline void set_outerRingCollider_13(CircleCollider2D_t13116344 * value)
	{
		___outerRingCollider_13 = value;
		Il2CppCodeGenWriteBarrier(&___outerRingCollider_13, value);
	}

	inline static int32_t get_offset_of_sprite_14() { return static_cast<int32_t>(offsetof(WaveBehavior_t2377460599, ___sprite_14)); }
	inline SpriteRenderer_t1209076198 * get_sprite_14() const { return ___sprite_14; }
	inline SpriteRenderer_t1209076198 ** get_address_of_sprite_14() { return &___sprite_14; }
	inline void set_sprite_14(SpriteRenderer_t1209076198 * value)
	{
		___sprite_14 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_14, value);
	}

	inline static int32_t get_offset_of_sizeDiff_15() { return static_cast<int32_t>(offsetof(WaveBehavior_t2377460599, ___sizeDiff_15)); }
	inline float get_sizeDiff_15() const { return ___sizeDiff_15; }
	inline float* get_address_of_sizeDiff_15() { return &___sizeDiff_15; }
	inline void set_sizeDiff_15(float value)
	{
		___sizeDiff_15 = value;
	}

	inline static int32_t get_offset_of_camShake_16() { return static_cast<int32_t>(offsetof(WaveBehavior_t2377460599, ___camShake_16)); }
	inline CameraShakeBehavior_t3092048811 * get_camShake_16() const { return ___camShake_16; }
	inline CameraShakeBehavior_t3092048811 ** get_address_of_camShake_16() { return &___camShake_16; }
	inline void set_camShake_16(CameraShakeBehavior_t3092048811 * value)
	{
		___camShake_16 = value;
		Il2CppCodeGenWriteBarrier(&___camShake_16, value);
	}
};

struct WaveBehavior_t2377460599_StaticFields
{
public:
	// System.Int32 WaveBehavior::numWaves
	int32_t ___numWaves_2;

public:
	inline static int32_t get_offset_of_numWaves_2() { return static_cast<int32_t>(offsetof(WaveBehavior_t2377460599_StaticFields, ___numWaves_2)); }
	inline int32_t get_numWaves_2() const { return ___numWaves_2; }
	inline int32_t* get_address_of_numWaves_2() { return &___numWaves_2; }
	inline void set_numWaves_2(int32_t value)
	{
		___numWaves_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
