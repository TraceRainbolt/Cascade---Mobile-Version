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
// UnityEngine.Sprite
struct Sprite_t309593783;
// System.String
struct String_t;
// UnityEngine.Camera
struct Camera_t189460977;
// SoundManager
struct SoundManager_t654432262;
// ScoreManager
struct ScoreManager_t3573108141;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t13116344;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BubbleBehavior
struct  BubbleBehavior_t2953284492  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BubbleBehavior::radius
	float ___radius_2;
	// UnityEngine.Color BubbleBehavior::color
	Color_t2020392075  ___color_3;
	// UnityEngine.GameObject BubbleBehavior::ring
	GameObject_t1756533147 * ___ring_4;
	// UnityEngine.Sprite BubbleBehavior::sp
	Sprite_t309593783 * ___sp_5;
	// System.Int32 BubbleBehavior::immunityDelay
	int32_t ___immunityDelay_6;
	// System.Int32 BubbleBehavior::shrinkDelay
	int32_t ___shrinkDelay_7;
	// System.String BubbleBehavior::history
	String_t* ___history_8;
	// UnityEngine.GameObject BubbleBehavior::exploder
	GameObject_t1756533147 * ___exploder_9;
	// UnityEngine.GameObject BubbleBehavior::imploder
	GameObject_t1756533147 * ___imploder_10;
	// UnityEngine.GameObject BubbleBehavior::spawnPar
	GameObject_t1756533147 * ___spawnPar_11;
	// UnityEngine.Vector3 BubbleBehavior::shiftedPoint
	Vector3_t2243707580  ___shiftedPoint_12;
	// System.Int32 BubbleBehavior::randDir
	int32_t ___randDir_13;
	// UnityEngine.Camera BubbleBehavior::cam
	Camera_t189460977 * ___cam_14;
	// SoundManager BubbleBehavior::sound
	SoundManager_t654432262 * ___sound_15;
	// ScoreManager BubbleBehavior::score
	ScoreManager_t3573108141 * ___score_16;
	// UnityEngine.CircleCollider2D BubbleBehavior::collider
	CircleCollider2D_t13116344 * ___collider_17;
	// UnityEngine.Rigidbody2D BubbleBehavior::rb
	Rigidbody2D_t502193897 * ___rb_18;

public:
	inline static int32_t get_offset_of_radius_2() { return static_cast<int32_t>(offsetof(BubbleBehavior_t2953284492, ___radius_2)); }
	inline float get_radius_2() const { return ___radius_2; }
	inline float* get_address_of_radius_2() { return &___radius_2; }
	inline void set_radius_2(float value)
	{
		___radius_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(BubbleBehavior_t2953284492, ___color_3)); }
	inline Color_t2020392075  get_color_3() const { return ___color_3; }
	inline Color_t2020392075 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color_t2020392075  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_ring_4() { return static_cast<int32_t>(offsetof(BubbleBehavior_t2953284492, ___ring_4)); }
	inline GameObject_t1756533147 * get_ring_4() const { return ___ring_4; }
	inline GameObject_t1756533147 ** get_address_of_ring_4() { return &___ring_4; }
	inline void set_ring_4(GameObject_t1756533147 * value)
	{
		___ring_4 = value;
		Il2CppCodeGenWriteBarrier(&___ring_4, value);
	}

	inline static int32_t get_offset_of_sp_5() { return static_cast<int32_t>(offsetof(BubbleBehavior_t2953284492, ___sp_5)); }
	inline Sprite_t309593783 * get_sp_5() const { return ___sp_5; }
	inline Sprite_t309593783 ** get_address_of_sp_5() { return &___sp_5; }
	inline void set_sp_5(Sprite_t309593783 * value)
	{
		___sp_5 = value;
		Il2CppCodeGenWriteBarrier(&___sp_5, value);
	}

	inline static int32_t get_offset_of_immunityDelay_6() { return static_cast<int32_t>(offsetof(BubbleBehavior_t2953284492, ___immunityDelay_6)); }
	inline int32_t get_immunityDelay_6() const { return ___immunityDelay_6; }
	inline int32_t* get_address_of_immunityDelay_6() { return &___immunityDelay_6; }
	inline void set_immunityDelay_6(int32_t value)
	{
		___immunityDelay_6 = value;
	}

	inline static int32_t get_offset_of_shrinkDelay_7() { return static_cast<int32_t>(offsetof(BubbleBehavior_t2953284492, ___shrinkDelay_7)); }
	inline int32_t get_shrinkDelay_7() const { return ___shrinkDelay_7; }
	inline int32_t* get_address_of_shrinkDelay_7() { return &___shrinkDelay_7; }
	inline void set_shrinkDelay_7(int32_t value)
	{
		___shrinkDelay_7 = value;
	}

	inline static int32_t get_offset_of_history_8() { return static_cast<int32_t>(offsetof(BubbleBehavior_t2953284492, ___history_8)); }
	inline String_t* get_history_8() const { return ___history_8; }
	inline String_t** get_address_of_history_8() { return &___history_8; }
	inline void set_history_8(String_t* value)
	{
		___history_8 = value;
		Il2CppCodeGenWriteBarrier(&___history_8, value);
	}

	inline static int32_t get_offset_of_exploder_9() { return static_cast<int32_t>(offsetof(BubbleBehavior_t2953284492, ___exploder_9)); }
	inline GameObject_t1756533147 * get_exploder_9() const { return ___exploder_9; }
	inline GameObject_t1756533147 ** get_address_of_exploder_9() { return &___exploder_9; }
	inline void set_exploder_9(GameObject_t1756533147 * value)
	{
		___exploder_9 = value;
		Il2CppCodeGenWriteBarrier(&___exploder_9, value);
	}

	inline static int32_t get_offset_of_imploder_10() { return static_cast<int32_t>(offsetof(BubbleBehavior_t2953284492, ___imploder_10)); }
	inline GameObject_t1756533147 * get_imploder_10() const { return ___imploder_10; }
	inline GameObject_t1756533147 ** get_address_of_imploder_10() { return &___imploder_10; }
	inline void set_imploder_10(GameObject_t1756533147 * value)
	{
		___imploder_10 = value;
		Il2CppCodeGenWriteBarrier(&___imploder_10, value);
	}

	inline static int32_t get_offset_of_spawnPar_11() { return static_cast<int32_t>(offsetof(BubbleBehavior_t2953284492, ___spawnPar_11)); }
	inline GameObject_t1756533147 * get_spawnPar_11() const { return ___spawnPar_11; }
	inline GameObject_t1756533147 ** get_address_of_spawnPar_11() { return &___spawnPar_11; }
	inline void set_spawnPar_11(GameObject_t1756533147 * value)
	{
		___spawnPar_11 = value;
		Il2CppCodeGenWriteBarrier(&___spawnPar_11, value);
	}

	inline static int32_t get_offset_of_shiftedPoint_12() { return static_cast<int32_t>(offsetof(BubbleBehavior_t2953284492, ___shiftedPoint_12)); }
	inline Vector3_t2243707580  get_shiftedPoint_12() const { return ___shiftedPoint_12; }
	inline Vector3_t2243707580 * get_address_of_shiftedPoint_12() { return &___shiftedPoint_12; }
	inline void set_shiftedPoint_12(Vector3_t2243707580  value)
	{
		___shiftedPoint_12 = value;
	}

	inline static int32_t get_offset_of_randDir_13() { return static_cast<int32_t>(offsetof(BubbleBehavior_t2953284492, ___randDir_13)); }
	inline int32_t get_randDir_13() const { return ___randDir_13; }
	inline int32_t* get_address_of_randDir_13() { return &___randDir_13; }
	inline void set_randDir_13(int32_t value)
	{
		___randDir_13 = value;
	}

	inline static int32_t get_offset_of_cam_14() { return static_cast<int32_t>(offsetof(BubbleBehavior_t2953284492, ___cam_14)); }
	inline Camera_t189460977 * get_cam_14() const { return ___cam_14; }
	inline Camera_t189460977 ** get_address_of_cam_14() { return &___cam_14; }
	inline void set_cam_14(Camera_t189460977 * value)
	{
		___cam_14 = value;
		Il2CppCodeGenWriteBarrier(&___cam_14, value);
	}

	inline static int32_t get_offset_of_sound_15() { return static_cast<int32_t>(offsetof(BubbleBehavior_t2953284492, ___sound_15)); }
	inline SoundManager_t654432262 * get_sound_15() const { return ___sound_15; }
	inline SoundManager_t654432262 ** get_address_of_sound_15() { return &___sound_15; }
	inline void set_sound_15(SoundManager_t654432262 * value)
	{
		___sound_15 = value;
		Il2CppCodeGenWriteBarrier(&___sound_15, value);
	}

	inline static int32_t get_offset_of_score_16() { return static_cast<int32_t>(offsetof(BubbleBehavior_t2953284492, ___score_16)); }
	inline ScoreManager_t3573108141 * get_score_16() const { return ___score_16; }
	inline ScoreManager_t3573108141 ** get_address_of_score_16() { return &___score_16; }
	inline void set_score_16(ScoreManager_t3573108141 * value)
	{
		___score_16 = value;
		Il2CppCodeGenWriteBarrier(&___score_16, value);
	}

	inline static int32_t get_offset_of_collider_17() { return static_cast<int32_t>(offsetof(BubbleBehavior_t2953284492, ___collider_17)); }
	inline CircleCollider2D_t13116344 * get_collider_17() const { return ___collider_17; }
	inline CircleCollider2D_t13116344 ** get_address_of_collider_17() { return &___collider_17; }
	inline void set_collider_17(CircleCollider2D_t13116344 * value)
	{
		___collider_17 = value;
		Il2CppCodeGenWriteBarrier(&___collider_17, value);
	}

	inline static int32_t get_offset_of_rb_18() { return static_cast<int32_t>(offsetof(BubbleBehavior_t2953284492, ___rb_18)); }
	inline Rigidbody2D_t502193897 * get_rb_18() const { return ___rb_18; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb_18() { return &___rb_18; }
	inline void set_rb_18(Rigidbody2D_t502193897 * value)
	{
		___rb_18 = value;
		Il2CppCodeGenWriteBarrier(&___rb_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
