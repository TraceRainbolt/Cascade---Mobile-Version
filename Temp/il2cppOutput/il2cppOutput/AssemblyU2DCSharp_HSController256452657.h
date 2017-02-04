#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HSController
struct  HSController_t256452657  : public MonoBehaviour_t1158329972
{
public:
	// System.String HSController::secretKey
	String_t* ___secretKey_2;
	// System.String HSController::addScoreURL
	String_t* ___addScoreURL_3;
	// System.String HSController::highscoreURL
	String_t* ___highscoreURL_4;
	// UnityEngine.UI.Text HSController::scores
	Text_t356221433 * ___scores_5;

public:
	inline static int32_t get_offset_of_secretKey_2() { return static_cast<int32_t>(offsetof(HSController_t256452657, ___secretKey_2)); }
	inline String_t* get_secretKey_2() const { return ___secretKey_2; }
	inline String_t** get_address_of_secretKey_2() { return &___secretKey_2; }
	inline void set_secretKey_2(String_t* value)
	{
		___secretKey_2 = value;
		Il2CppCodeGenWriteBarrier(&___secretKey_2, value);
	}

	inline static int32_t get_offset_of_addScoreURL_3() { return static_cast<int32_t>(offsetof(HSController_t256452657, ___addScoreURL_3)); }
	inline String_t* get_addScoreURL_3() const { return ___addScoreURL_3; }
	inline String_t** get_address_of_addScoreURL_3() { return &___addScoreURL_3; }
	inline void set_addScoreURL_3(String_t* value)
	{
		___addScoreURL_3 = value;
		Il2CppCodeGenWriteBarrier(&___addScoreURL_3, value);
	}

	inline static int32_t get_offset_of_highscoreURL_4() { return static_cast<int32_t>(offsetof(HSController_t256452657, ___highscoreURL_4)); }
	inline String_t* get_highscoreURL_4() const { return ___highscoreURL_4; }
	inline String_t** get_address_of_highscoreURL_4() { return &___highscoreURL_4; }
	inline void set_highscoreURL_4(String_t* value)
	{
		___highscoreURL_4 = value;
		Il2CppCodeGenWriteBarrier(&___highscoreURL_4, value);
	}

	inline static int32_t get_offset_of_scores_5() { return static_cast<int32_t>(offsetof(HSController_t256452657, ___scores_5)); }
	inline Text_t356221433 * get_scores_5() const { return ___scores_5; }
	inline Text_t356221433 ** get_address_of_scores_5() { return &___scores_5; }
	inline void set_scores_5(Text_t356221433 * value)
	{
		___scores_5 = value;
		Il2CppCodeGenWriteBarrier(&___scores_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
