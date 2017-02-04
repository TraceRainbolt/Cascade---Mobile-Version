#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// SoundManager
struct SoundManager_t654432262;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreManager
struct  ScoreManager_t3573108141  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text ScoreManager::text
	Text_t356221433 * ___text_2;
	// UnityEngine.GameObject ScoreManager::praiseParticle
	GameObject_t1756533147 * ___praiseParticle_3;
	// System.Int32 ScoreManager::delayFrames
	int32_t ___delayFrames_4;
	// System.Int32 ScoreManager::delayCounter
	int32_t ___delayCounter_5;
	// System.Int32 ScoreManager::scoreDisplayed
	int32_t ___scoreDisplayed_6;
	// System.Int32 ScoreManager::totalScore
	int32_t ___totalScore_7;
	// SoundManager ScoreManager::sound
	SoundManager_t654432262 * ___sound_8;
	// System.Int32 ScoreManager::goodShown
	int32_t ___goodShown_9;

public:
	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___text_2)); }
	inline Text_t356221433 * get_text_2() const { return ___text_2; }
	inline Text_t356221433 ** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(Text_t356221433 * value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}

	inline static int32_t get_offset_of_praiseParticle_3() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___praiseParticle_3)); }
	inline GameObject_t1756533147 * get_praiseParticle_3() const { return ___praiseParticle_3; }
	inline GameObject_t1756533147 ** get_address_of_praiseParticle_3() { return &___praiseParticle_3; }
	inline void set_praiseParticle_3(GameObject_t1756533147 * value)
	{
		___praiseParticle_3 = value;
		Il2CppCodeGenWriteBarrier(&___praiseParticle_3, value);
	}

	inline static int32_t get_offset_of_delayFrames_4() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___delayFrames_4)); }
	inline int32_t get_delayFrames_4() const { return ___delayFrames_4; }
	inline int32_t* get_address_of_delayFrames_4() { return &___delayFrames_4; }
	inline void set_delayFrames_4(int32_t value)
	{
		___delayFrames_4 = value;
	}

	inline static int32_t get_offset_of_delayCounter_5() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___delayCounter_5)); }
	inline int32_t get_delayCounter_5() const { return ___delayCounter_5; }
	inline int32_t* get_address_of_delayCounter_5() { return &___delayCounter_5; }
	inline void set_delayCounter_5(int32_t value)
	{
		___delayCounter_5 = value;
	}

	inline static int32_t get_offset_of_scoreDisplayed_6() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___scoreDisplayed_6)); }
	inline int32_t get_scoreDisplayed_6() const { return ___scoreDisplayed_6; }
	inline int32_t* get_address_of_scoreDisplayed_6() { return &___scoreDisplayed_6; }
	inline void set_scoreDisplayed_6(int32_t value)
	{
		___scoreDisplayed_6 = value;
	}

	inline static int32_t get_offset_of_totalScore_7() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___totalScore_7)); }
	inline int32_t get_totalScore_7() const { return ___totalScore_7; }
	inline int32_t* get_address_of_totalScore_7() { return &___totalScore_7; }
	inline void set_totalScore_7(int32_t value)
	{
		___totalScore_7 = value;
	}

	inline static int32_t get_offset_of_sound_8() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___sound_8)); }
	inline SoundManager_t654432262 * get_sound_8() const { return ___sound_8; }
	inline SoundManager_t654432262 ** get_address_of_sound_8() { return &___sound_8; }
	inline void set_sound_8(SoundManager_t654432262 * value)
	{
		___sound_8 = value;
		Il2CppCodeGenWriteBarrier(&___sound_8, value);
	}

	inline static int32_t get_offset_of_goodShown_9() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___goodShown_9)); }
	inline int32_t get_goodShown_9() const { return ___goodShown_9; }
	inline int32_t* get_address_of_goodShown_9() { return &___goodShown_9; }
	inline void set_goodShown_9(int32_t value)
	{
		___goodShown_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
