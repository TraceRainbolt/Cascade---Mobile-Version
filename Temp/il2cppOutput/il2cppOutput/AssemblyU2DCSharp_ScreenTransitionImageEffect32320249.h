#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenTransitionImageEffect
struct  ScreenTransitionImageEffect_t32320249  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Shader ScreenTransitionImageEffect::shader
	Shader_t2430389951 * ___shader_2;
	// System.Single ScreenTransitionImageEffect::maskValue
	float ___maskValue_3;
	// UnityEngine.Color ScreenTransitionImageEffect::maskColor
	Color_t2020392075  ___maskColor_4;
	// UnityEngine.Texture2D ScreenTransitionImageEffect::maskTexture
	Texture2D_t3542995729 * ___maskTexture_5;
	// System.Boolean ScreenTransitionImageEffect::maskInvert
	bool ___maskInvert_6;
	// System.Boolean ScreenTransitionImageEffect::activated
	bool ___activated_7;
	// UnityEngine.GameObject ScreenTransitionImageEffect::button
	GameObject_t1756533147 * ___button_8;
	// UnityEngine.GameObject ScreenTransitionImageEffect::logo
	GameObject_t1756533147 * ___logo_9;
	// UnityEngine.GameObject ScreenTransitionImageEffect::settingsbut
	GameObject_t1756533147 * ___settingsbut_10;
	// System.Boolean ScreenTransitionImageEffect::isFading
	bool ___isFading_11;
	// UnityEngine.Material ScreenTransitionImageEffect::m_Material
	Material_t193706927 * ___m_Material_12;
	// System.Boolean ScreenTransitionImageEffect::m_maskInvert
	bool ___m_maskInvert_13;

public:
	inline static int32_t get_offset_of_shader_2() { return static_cast<int32_t>(offsetof(ScreenTransitionImageEffect_t32320249, ___shader_2)); }
	inline Shader_t2430389951 * get_shader_2() const { return ___shader_2; }
	inline Shader_t2430389951 ** get_address_of_shader_2() { return &___shader_2; }
	inline void set_shader_2(Shader_t2430389951 * value)
	{
		___shader_2 = value;
		Il2CppCodeGenWriteBarrier(&___shader_2, value);
	}

	inline static int32_t get_offset_of_maskValue_3() { return static_cast<int32_t>(offsetof(ScreenTransitionImageEffect_t32320249, ___maskValue_3)); }
	inline float get_maskValue_3() const { return ___maskValue_3; }
	inline float* get_address_of_maskValue_3() { return &___maskValue_3; }
	inline void set_maskValue_3(float value)
	{
		___maskValue_3 = value;
	}

	inline static int32_t get_offset_of_maskColor_4() { return static_cast<int32_t>(offsetof(ScreenTransitionImageEffect_t32320249, ___maskColor_4)); }
	inline Color_t2020392075  get_maskColor_4() const { return ___maskColor_4; }
	inline Color_t2020392075 * get_address_of_maskColor_4() { return &___maskColor_4; }
	inline void set_maskColor_4(Color_t2020392075  value)
	{
		___maskColor_4 = value;
	}

	inline static int32_t get_offset_of_maskTexture_5() { return static_cast<int32_t>(offsetof(ScreenTransitionImageEffect_t32320249, ___maskTexture_5)); }
	inline Texture2D_t3542995729 * get_maskTexture_5() const { return ___maskTexture_5; }
	inline Texture2D_t3542995729 ** get_address_of_maskTexture_5() { return &___maskTexture_5; }
	inline void set_maskTexture_5(Texture2D_t3542995729 * value)
	{
		___maskTexture_5 = value;
		Il2CppCodeGenWriteBarrier(&___maskTexture_5, value);
	}

	inline static int32_t get_offset_of_maskInvert_6() { return static_cast<int32_t>(offsetof(ScreenTransitionImageEffect_t32320249, ___maskInvert_6)); }
	inline bool get_maskInvert_6() const { return ___maskInvert_6; }
	inline bool* get_address_of_maskInvert_6() { return &___maskInvert_6; }
	inline void set_maskInvert_6(bool value)
	{
		___maskInvert_6 = value;
	}

	inline static int32_t get_offset_of_activated_7() { return static_cast<int32_t>(offsetof(ScreenTransitionImageEffect_t32320249, ___activated_7)); }
	inline bool get_activated_7() const { return ___activated_7; }
	inline bool* get_address_of_activated_7() { return &___activated_7; }
	inline void set_activated_7(bool value)
	{
		___activated_7 = value;
	}

	inline static int32_t get_offset_of_button_8() { return static_cast<int32_t>(offsetof(ScreenTransitionImageEffect_t32320249, ___button_8)); }
	inline GameObject_t1756533147 * get_button_8() const { return ___button_8; }
	inline GameObject_t1756533147 ** get_address_of_button_8() { return &___button_8; }
	inline void set_button_8(GameObject_t1756533147 * value)
	{
		___button_8 = value;
		Il2CppCodeGenWriteBarrier(&___button_8, value);
	}

	inline static int32_t get_offset_of_logo_9() { return static_cast<int32_t>(offsetof(ScreenTransitionImageEffect_t32320249, ___logo_9)); }
	inline GameObject_t1756533147 * get_logo_9() const { return ___logo_9; }
	inline GameObject_t1756533147 ** get_address_of_logo_9() { return &___logo_9; }
	inline void set_logo_9(GameObject_t1756533147 * value)
	{
		___logo_9 = value;
		Il2CppCodeGenWriteBarrier(&___logo_9, value);
	}

	inline static int32_t get_offset_of_settingsbut_10() { return static_cast<int32_t>(offsetof(ScreenTransitionImageEffect_t32320249, ___settingsbut_10)); }
	inline GameObject_t1756533147 * get_settingsbut_10() const { return ___settingsbut_10; }
	inline GameObject_t1756533147 ** get_address_of_settingsbut_10() { return &___settingsbut_10; }
	inline void set_settingsbut_10(GameObject_t1756533147 * value)
	{
		___settingsbut_10 = value;
		Il2CppCodeGenWriteBarrier(&___settingsbut_10, value);
	}

	inline static int32_t get_offset_of_isFading_11() { return static_cast<int32_t>(offsetof(ScreenTransitionImageEffect_t32320249, ___isFading_11)); }
	inline bool get_isFading_11() const { return ___isFading_11; }
	inline bool* get_address_of_isFading_11() { return &___isFading_11; }
	inline void set_isFading_11(bool value)
	{
		___isFading_11 = value;
	}

	inline static int32_t get_offset_of_m_Material_12() { return static_cast<int32_t>(offsetof(ScreenTransitionImageEffect_t32320249, ___m_Material_12)); }
	inline Material_t193706927 * get_m_Material_12() const { return ___m_Material_12; }
	inline Material_t193706927 ** get_address_of_m_Material_12() { return &___m_Material_12; }
	inline void set_m_Material_12(Material_t193706927 * value)
	{
		___m_Material_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_Material_12, value);
	}

	inline static int32_t get_offset_of_m_maskInvert_13() { return static_cast<int32_t>(offsetof(ScreenTransitionImageEffect_t32320249, ___m_maskInvert_13)); }
	inline bool get_m_maskInvert_13() const { return ___m_maskInvert_13; }
	inline bool* get_address_of_m_maskInvert_13() { return &___m_maskInvert_13; }
	inline void set_m_maskInvert_13(bool value)
	{
		___m_maskInvert_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
