#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// ScoreSaverBehavior
struct ScoreSaverBehavior_t395301953;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundManager
struct  SoundManager_t654432262  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip SoundManager::counterSound
	AudioClip_t1932558630 * ___counterSound_2;
	// UnityEngine.AudioClip SoundManager::popSound
	AudioClip_t1932558630 * ___popSound_3;
	// UnityEngine.AudioClip SoundManager::flipSound
	AudioClip_t1932558630 * ___flipSound_4;
	// UnityEngine.AudioClip SoundManager::bigPopSound
	AudioClip_t1932558630 * ___bigPopSound_5;
	// UnityEngine.AudioClip SoundManager::comboSound
	AudioClip_t1932558630 * ___comboSound_6;
	// UnityEngine.AudioClip SoundManager::multSound
	AudioClip_t1932558630 * ___multSound_7;
	// UnityEngine.AudioClip SoundManager::cheerSound
	AudioClip_t1932558630 * ___cheerSound_8;
	// UnityEngine.AudioClip SoundManager::timerSound
	AudioClip_t1932558630 * ___timerSound_9;
	// System.Boolean SoundManager::playMusic
	bool ___playMusic_10;
	// UnityEngine.AudioSource SoundManager::sourcePop
	AudioSource_t1135106623 * ___sourcePop_11;
	// UnityEngine.AudioSource SoundManager::sourceCounterDing
	AudioSource_t1135106623 * ___sourceCounterDing_12;
	// UnityEngine.AudioSource SoundManager::sourceFlip
	AudioSource_t1135106623 * ___sourceFlip_13;
	// UnityEngine.AudioSource SoundManager::sourceAdrenaline
	AudioSource_t1135106623 * ___sourceAdrenaline_14;
	// UnityEngine.AudioSource SoundManager::sourceBigPop
	AudioSource_t1135106623 * ___sourceBigPop_15;
	// UnityEngine.AudioSource SoundManager::sourceCombo
	AudioSource_t1135106623 * ___sourceCombo_16;
	// UnityEngine.AudioSource SoundManager::sourceMult
	AudioSource_t1135106623 * ___sourceMult_17;
	// UnityEngine.AudioSource SoundManager::sourceCheer
	AudioSource_t1135106623 * ___sourceCheer_18;
	// ScoreSaverBehavior SoundManager::info
	ScoreSaverBehavior_t395301953 * ___info_19;
	// System.Int32 SoundManager::cheerCooldown
	int32_t ___cheerCooldown_20;
	// System.Int32 SoundManager::beepCooldown
	int32_t ___beepCooldown_21;

public:
	inline static int32_t get_offset_of_counterSound_2() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___counterSound_2)); }
	inline AudioClip_t1932558630 * get_counterSound_2() const { return ___counterSound_2; }
	inline AudioClip_t1932558630 ** get_address_of_counterSound_2() { return &___counterSound_2; }
	inline void set_counterSound_2(AudioClip_t1932558630 * value)
	{
		___counterSound_2 = value;
		Il2CppCodeGenWriteBarrier(&___counterSound_2, value);
	}

	inline static int32_t get_offset_of_popSound_3() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___popSound_3)); }
	inline AudioClip_t1932558630 * get_popSound_3() const { return ___popSound_3; }
	inline AudioClip_t1932558630 ** get_address_of_popSound_3() { return &___popSound_3; }
	inline void set_popSound_3(AudioClip_t1932558630 * value)
	{
		___popSound_3 = value;
		Il2CppCodeGenWriteBarrier(&___popSound_3, value);
	}

	inline static int32_t get_offset_of_flipSound_4() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___flipSound_4)); }
	inline AudioClip_t1932558630 * get_flipSound_4() const { return ___flipSound_4; }
	inline AudioClip_t1932558630 ** get_address_of_flipSound_4() { return &___flipSound_4; }
	inline void set_flipSound_4(AudioClip_t1932558630 * value)
	{
		___flipSound_4 = value;
		Il2CppCodeGenWriteBarrier(&___flipSound_4, value);
	}

	inline static int32_t get_offset_of_bigPopSound_5() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___bigPopSound_5)); }
	inline AudioClip_t1932558630 * get_bigPopSound_5() const { return ___bigPopSound_5; }
	inline AudioClip_t1932558630 ** get_address_of_bigPopSound_5() { return &___bigPopSound_5; }
	inline void set_bigPopSound_5(AudioClip_t1932558630 * value)
	{
		___bigPopSound_5 = value;
		Il2CppCodeGenWriteBarrier(&___bigPopSound_5, value);
	}

	inline static int32_t get_offset_of_comboSound_6() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___comboSound_6)); }
	inline AudioClip_t1932558630 * get_comboSound_6() const { return ___comboSound_6; }
	inline AudioClip_t1932558630 ** get_address_of_comboSound_6() { return &___comboSound_6; }
	inline void set_comboSound_6(AudioClip_t1932558630 * value)
	{
		___comboSound_6 = value;
		Il2CppCodeGenWriteBarrier(&___comboSound_6, value);
	}

	inline static int32_t get_offset_of_multSound_7() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___multSound_7)); }
	inline AudioClip_t1932558630 * get_multSound_7() const { return ___multSound_7; }
	inline AudioClip_t1932558630 ** get_address_of_multSound_7() { return &___multSound_7; }
	inline void set_multSound_7(AudioClip_t1932558630 * value)
	{
		___multSound_7 = value;
		Il2CppCodeGenWriteBarrier(&___multSound_7, value);
	}

	inline static int32_t get_offset_of_cheerSound_8() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___cheerSound_8)); }
	inline AudioClip_t1932558630 * get_cheerSound_8() const { return ___cheerSound_8; }
	inline AudioClip_t1932558630 ** get_address_of_cheerSound_8() { return &___cheerSound_8; }
	inline void set_cheerSound_8(AudioClip_t1932558630 * value)
	{
		___cheerSound_8 = value;
		Il2CppCodeGenWriteBarrier(&___cheerSound_8, value);
	}

	inline static int32_t get_offset_of_timerSound_9() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___timerSound_9)); }
	inline AudioClip_t1932558630 * get_timerSound_9() const { return ___timerSound_9; }
	inline AudioClip_t1932558630 ** get_address_of_timerSound_9() { return &___timerSound_9; }
	inline void set_timerSound_9(AudioClip_t1932558630 * value)
	{
		___timerSound_9 = value;
		Il2CppCodeGenWriteBarrier(&___timerSound_9, value);
	}

	inline static int32_t get_offset_of_playMusic_10() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___playMusic_10)); }
	inline bool get_playMusic_10() const { return ___playMusic_10; }
	inline bool* get_address_of_playMusic_10() { return &___playMusic_10; }
	inline void set_playMusic_10(bool value)
	{
		___playMusic_10 = value;
	}

	inline static int32_t get_offset_of_sourcePop_11() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___sourcePop_11)); }
	inline AudioSource_t1135106623 * get_sourcePop_11() const { return ___sourcePop_11; }
	inline AudioSource_t1135106623 ** get_address_of_sourcePop_11() { return &___sourcePop_11; }
	inline void set_sourcePop_11(AudioSource_t1135106623 * value)
	{
		___sourcePop_11 = value;
		Il2CppCodeGenWriteBarrier(&___sourcePop_11, value);
	}

	inline static int32_t get_offset_of_sourceCounterDing_12() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___sourceCounterDing_12)); }
	inline AudioSource_t1135106623 * get_sourceCounterDing_12() const { return ___sourceCounterDing_12; }
	inline AudioSource_t1135106623 ** get_address_of_sourceCounterDing_12() { return &___sourceCounterDing_12; }
	inline void set_sourceCounterDing_12(AudioSource_t1135106623 * value)
	{
		___sourceCounterDing_12 = value;
		Il2CppCodeGenWriteBarrier(&___sourceCounterDing_12, value);
	}

	inline static int32_t get_offset_of_sourceFlip_13() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___sourceFlip_13)); }
	inline AudioSource_t1135106623 * get_sourceFlip_13() const { return ___sourceFlip_13; }
	inline AudioSource_t1135106623 ** get_address_of_sourceFlip_13() { return &___sourceFlip_13; }
	inline void set_sourceFlip_13(AudioSource_t1135106623 * value)
	{
		___sourceFlip_13 = value;
		Il2CppCodeGenWriteBarrier(&___sourceFlip_13, value);
	}

	inline static int32_t get_offset_of_sourceAdrenaline_14() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___sourceAdrenaline_14)); }
	inline AudioSource_t1135106623 * get_sourceAdrenaline_14() const { return ___sourceAdrenaline_14; }
	inline AudioSource_t1135106623 ** get_address_of_sourceAdrenaline_14() { return &___sourceAdrenaline_14; }
	inline void set_sourceAdrenaline_14(AudioSource_t1135106623 * value)
	{
		___sourceAdrenaline_14 = value;
		Il2CppCodeGenWriteBarrier(&___sourceAdrenaline_14, value);
	}

	inline static int32_t get_offset_of_sourceBigPop_15() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___sourceBigPop_15)); }
	inline AudioSource_t1135106623 * get_sourceBigPop_15() const { return ___sourceBigPop_15; }
	inline AudioSource_t1135106623 ** get_address_of_sourceBigPop_15() { return &___sourceBigPop_15; }
	inline void set_sourceBigPop_15(AudioSource_t1135106623 * value)
	{
		___sourceBigPop_15 = value;
		Il2CppCodeGenWriteBarrier(&___sourceBigPop_15, value);
	}

	inline static int32_t get_offset_of_sourceCombo_16() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___sourceCombo_16)); }
	inline AudioSource_t1135106623 * get_sourceCombo_16() const { return ___sourceCombo_16; }
	inline AudioSource_t1135106623 ** get_address_of_sourceCombo_16() { return &___sourceCombo_16; }
	inline void set_sourceCombo_16(AudioSource_t1135106623 * value)
	{
		___sourceCombo_16 = value;
		Il2CppCodeGenWriteBarrier(&___sourceCombo_16, value);
	}

	inline static int32_t get_offset_of_sourceMult_17() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___sourceMult_17)); }
	inline AudioSource_t1135106623 * get_sourceMult_17() const { return ___sourceMult_17; }
	inline AudioSource_t1135106623 ** get_address_of_sourceMult_17() { return &___sourceMult_17; }
	inline void set_sourceMult_17(AudioSource_t1135106623 * value)
	{
		___sourceMult_17 = value;
		Il2CppCodeGenWriteBarrier(&___sourceMult_17, value);
	}

	inline static int32_t get_offset_of_sourceCheer_18() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___sourceCheer_18)); }
	inline AudioSource_t1135106623 * get_sourceCheer_18() const { return ___sourceCheer_18; }
	inline AudioSource_t1135106623 ** get_address_of_sourceCheer_18() { return &___sourceCheer_18; }
	inline void set_sourceCheer_18(AudioSource_t1135106623 * value)
	{
		___sourceCheer_18 = value;
		Il2CppCodeGenWriteBarrier(&___sourceCheer_18, value);
	}

	inline static int32_t get_offset_of_info_19() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___info_19)); }
	inline ScoreSaverBehavior_t395301953 * get_info_19() const { return ___info_19; }
	inline ScoreSaverBehavior_t395301953 ** get_address_of_info_19() { return &___info_19; }
	inline void set_info_19(ScoreSaverBehavior_t395301953 * value)
	{
		___info_19 = value;
		Il2CppCodeGenWriteBarrier(&___info_19, value);
	}

	inline static int32_t get_offset_of_cheerCooldown_20() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___cheerCooldown_20)); }
	inline int32_t get_cheerCooldown_20() const { return ___cheerCooldown_20; }
	inline int32_t* get_address_of_cheerCooldown_20() { return &___cheerCooldown_20; }
	inline void set_cheerCooldown_20(int32_t value)
	{
		___cheerCooldown_20 = value;
	}

	inline static int32_t get_offset_of_beepCooldown_21() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___beepCooldown_21)); }
	inline int32_t get_beepCooldown_21() const { return ___beepCooldown_21; }
	inline int32_t* get_address_of_beepCooldown_21() { return &___beepCooldown_21; }
	inline void set_beepCooldown_21(int32_t value)
	{
		___beepCooldown_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
