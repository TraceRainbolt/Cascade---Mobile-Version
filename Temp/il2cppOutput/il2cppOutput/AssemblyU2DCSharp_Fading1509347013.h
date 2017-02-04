#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fading
struct  Fading_t1509347013  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Texture2D Fading::fadeOutTexture
	Texture2D_t3542995729 * ___fadeOutTexture_2;
	// System.Single Fading::fadeSpeed
	float ___fadeSpeed_3;
	// System.Boolean Fading::fade
	bool ___fade_4;
	// System.Int32 Fading::drawDepth
	int32_t ___drawDepth_5;
	// System.Single Fading::alpha
	float ___alpha_6;
	// System.Int32 Fading::fadeDir
	int32_t ___fadeDir_7;

public:
	inline static int32_t get_offset_of_fadeOutTexture_2() { return static_cast<int32_t>(offsetof(Fading_t1509347013, ___fadeOutTexture_2)); }
	inline Texture2D_t3542995729 * get_fadeOutTexture_2() const { return ___fadeOutTexture_2; }
	inline Texture2D_t3542995729 ** get_address_of_fadeOutTexture_2() { return &___fadeOutTexture_2; }
	inline void set_fadeOutTexture_2(Texture2D_t3542995729 * value)
	{
		___fadeOutTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___fadeOutTexture_2, value);
	}

	inline static int32_t get_offset_of_fadeSpeed_3() { return static_cast<int32_t>(offsetof(Fading_t1509347013, ___fadeSpeed_3)); }
	inline float get_fadeSpeed_3() const { return ___fadeSpeed_3; }
	inline float* get_address_of_fadeSpeed_3() { return &___fadeSpeed_3; }
	inline void set_fadeSpeed_3(float value)
	{
		___fadeSpeed_3 = value;
	}

	inline static int32_t get_offset_of_fade_4() { return static_cast<int32_t>(offsetof(Fading_t1509347013, ___fade_4)); }
	inline bool get_fade_4() const { return ___fade_4; }
	inline bool* get_address_of_fade_4() { return &___fade_4; }
	inline void set_fade_4(bool value)
	{
		___fade_4 = value;
	}

	inline static int32_t get_offset_of_drawDepth_5() { return static_cast<int32_t>(offsetof(Fading_t1509347013, ___drawDepth_5)); }
	inline int32_t get_drawDepth_5() const { return ___drawDepth_5; }
	inline int32_t* get_address_of_drawDepth_5() { return &___drawDepth_5; }
	inline void set_drawDepth_5(int32_t value)
	{
		___drawDepth_5 = value;
	}

	inline static int32_t get_offset_of_alpha_6() { return static_cast<int32_t>(offsetof(Fading_t1509347013, ___alpha_6)); }
	inline float get_alpha_6() const { return ___alpha_6; }
	inline float* get_address_of_alpha_6() { return &___alpha_6; }
	inline void set_alpha_6(float value)
	{
		___alpha_6 = value;
	}

	inline static int32_t get_offset_of_fadeDir_7() { return static_cast<int32_t>(offsetof(Fading_t1509347013, ___fadeDir_7)); }
	inline int32_t get_fadeDir_7() const { return ___fadeDir_7; }
	inline int32_t* get_address_of_fadeDir_7() { return &___fadeDir_7; }
	inline void set_fadeDir_7(int32_t value)
	{
		___fadeDir_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
