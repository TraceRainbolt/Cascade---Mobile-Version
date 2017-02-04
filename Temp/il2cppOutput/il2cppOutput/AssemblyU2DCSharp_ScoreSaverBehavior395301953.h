#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreSaverBehavior
struct  ScoreSaverBehavior_t395301953  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ScoreSaverBehavior::finalScore
	int32_t ___finalScore_2;
	// System.Boolean ScoreSaverBehavior::playSoundEffects
	bool ___playSoundEffects_3;
	// System.Boolean ScoreSaverBehavior::playMusic
	bool ___playMusic_4;

public:
	inline static int32_t get_offset_of_finalScore_2() { return static_cast<int32_t>(offsetof(ScoreSaverBehavior_t395301953, ___finalScore_2)); }
	inline int32_t get_finalScore_2() const { return ___finalScore_2; }
	inline int32_t* get_address_of_finalScore_2() { return &___finalScore_2; }
	inline void set_finalScore_2(int32_t value)
	{
		___finalScore_2 = value;
	}

	inline static int32_t get_offset_of_playSoundEffects_3() { return static_cast<int32_t>(offsetof(ScoreSaverBehavior_t395301953, ___playSoundEffects_3)); }
	inline bool get_playSoundEffects_3() const { return ___playSoundEffects_3; }
	inline bool* get_address_of_playSoundEffects_3() { return &___playSoundEffects_3; }
	inline void set_playSoundEffects_3(bool value)
	{
		___playSoundEffects_3 = value;
	}

	inline static int32_t get_offset_of_playMusic_4() { return static_cast<int32_t>(offsetof(ScoreSaverBehavior_t395301953, ___playMusic_4)); }
	inline bool get_playMusic_4() const { return ___playMusic_4; }
	inline bool* get_address_of_playMusic_4() { return &___playMusic_4; }
	inline void set_playMusic_4(bool value)
	{
		___playMusic_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
