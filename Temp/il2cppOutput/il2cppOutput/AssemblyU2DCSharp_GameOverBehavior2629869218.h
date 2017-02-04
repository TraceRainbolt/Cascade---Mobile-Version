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
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.InputField
struct InputField_t1631627530;
// UnityEngine.UI.Button
struct Button_t2872111280;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameOverBehavior
struct  GameOverBehavior_t2629869218  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GameOverBehavior::wave
	GameObject_t1756533147 * ___wave_2;
	// UnityEngine.UI.Text GameOverBehavior::text
	Text_t356221433 * ___text_3;
	// UnityEngine.UI.InputField GameOverBehavior::name
	InputField_t1631627530 * ___name_4;
	// UnityEngine.UI.Button GameOverBehavior::continueBut
	Button_t2872111280 * ___continueBut_5;
	// System.Int32 GameOverBehavior::score
	int32_t ___score_6;

public:
	inline static int32_t get_offset_of_wave_2() { return static_cast<int32_t>(offsetof(GameOverBehavior_t2629869218, ___wave_2)); }
	inline GameObject_t1756533147 * get_wave_2() const { return ___wave_2; }
	inline GameObject_t1756533147 ** get_address_of_wave_2() { return &___wave_2; }
	inline void set_wave_2(GameObject_t1756533147 * value)
	{
		___wave_2 = value;
		Il2CppCodeGenWriteBarrier(&___wave_2, value);
	}

	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(GameOverBehavior_t2629869218, ___text_3)); }
	inline Text_t356221433 * get_text_3() const { return ___text_3; }
	inline Text_t356221433 ** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(Text_t356221433 * value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier(&___text_3, value);
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(GameOverBehavior_t2629869218, ___name_4)); }
	inline InputField_t1631627530 * get_name_4() const { return ___name_4; }
	inline InputField_t1631627530 ** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(InputField_t1631627530 * value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier(&___name_4, value);
	}

	inline static int32_t get_offset_of_continueBut_5() { return static_cast<int32_t>(offsetof(GameOverBehavior_t2629869218, ___continueBut_5)); }
	inline Button_t2872111280 * get_continueBut_5() const { return ___continueBut_5; }
	inline Button_t2872111280 ** get_address_of_continueBut_5() { return &___continueBut_5; }
	inline void set_continueBut_5(Button_t2872111280 * value)
	{
		___continueBut_5 = value;
		Il2CppCodeGenWriteBarrier(&___continueBut_5, value);
	}

	inline static int32_t get_offset_of_score_6() { return static_cast<int32_t>(offsetof(GameOverBehavior_t2629869218, ___score_6)); }
	inline int32_t get_score_6() const { return ___score_6; }
	inline int32_t* get_address_of_score_6() { return &___score_6; }
	inline void set_score_6(int32_t value)
	{
		___score_6 = value;
	}
};

struct GameOverBehavior_t2629869218_StaticFields
{
public:
	// System.String GameOverBehavior::defaultName
	String_t* ___defaultName_7;

public:
	inline static int32_t get_offset_of_defaultName_7() { return static_cast<int32_t>(offsetof(GameOverBehavior_t2629869218_StaticFields, ___defaultName_7)); }
	inline String_t* get_defaultName_7() const { return ___defaultName_7; }
	inline String_t** get_address_of_defaultName_7() { return &___defaultName_7; }
	inline void set_defaultName_7(String_t* value)
	{
		___defaultName_7 = value;
		Il2CppCodeGenWriteBarrier(&___defaultName_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
