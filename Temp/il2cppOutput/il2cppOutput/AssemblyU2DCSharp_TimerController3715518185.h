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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimerController
struct  TimerController_t3715518185  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TimerController::timeLeft
	float ___timeLeft_2;
	// UnityEngine.UI.Text TimerController::text
	Text_t356221433 * ___text_3;
	// System.Boolean TimerController::gameOver
	bool ___gameOver_4;
	// System.Int32 TimerController::gameOverDelay
	int32_t ___gameOverDelay_5;
	// System.Int32 TimerController::redCounter
	int32_t ___redCounter_6;
	// System.Boolean TimerController::goingUp
	bool ___goingUp_7;
	// System.Boolean TimerController::stopForReal
	bool ___stopForReal_8;

public:
	inline static int32_t get_offset_of_timeLeft_2() { return static_cast<int32_t>(offsetof(TimerController_t3715518185, ___timeLeft_2)); }
	inline float get_timeLeft_2() const { return ___timeLeft_2; }
	inline float* get_address_of_timeLeft_2() { return &___timeLeft_2; }
	inline void set_timeLeft_2(float value)
	{
		___timeLeft_2 = value;
	}

	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(TimerController_t3715518185, ___text_3)); }
	inline Text_t356221433 * get_text_3() const { return ___text_3; }
	inline Text_t356221433 ** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(Text_t356221433 * value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier(&___text_3, value);
	}

	inline static int32_t get_offset_of_gameOver_4() { return static_cast<int32_t>(offsetof(TimerController_t3715518185, ___gameOver_4)); }
	inline bool get_gameOver_4() const { return ___gameOver_4; }
	inline bool* get_address_of_gameOver_4() { return &___gameOver_4; }
	inline void set_gameOver_4(bool value)
	{
		___gameOver_4 = value;
	}

	inline static int32_t get_offset_of_gameOverDelay_5() { return static_cast<int32_t>(offsetof(TimerController_t3715518185, ___gameOverDelay_5)); }
	inline int32_t get_gameOverDelay_5() const { return ___gameOverDelay_5; }
	inline int32_t* get_address_of_gameOverDelay_5() { return &___gameOverDelay_5; }
	inline void set_gameOverDelay_5(int32_t value)
	{
		___gameOverDelay_5 = value;
	}

	inline static int32_t get_offset_of_redCounter_6() { return static_cast<int32_t>(offsetof(TimerController_t3715518185, ___redCounter_6)); }
	inline int32_t get_redCounter_6() const { return ___redCounter_6; }
	inline int32_t* get_address_of_redCounter_6() { return &___redCounter_6; }
	inline void set_redCounter_6(int32_t value)
	{
		___redCounter_6 = value;
	}

	inline static int32_t get_offset_of_goingUp_7() { return static_cast<int32_t>(offsetof(TimerController_t3715518185, ___goingUp_7)); }
	inline bool get_goingUp_7() const { return ___goingUp_7; }
	inline bool* get_address_of_goingUp_7() { return &___goingUp_7; }
	inline void set_goingUp_7(bool value)
	{
		___goingUp_7 = value;
	}

	inline static int32_t get_offset_of_stopForReal_8() { return static_cast<int32_t>(offsetof(TimerController_t3715518185, ___stopForReal_8)); }
	inline bool get_stopForReal_8() const { return ___stopForReal_8; }
	inline bool* get_address_of_stopForReal_8() { return &___stopForReal_8; }
	inline void set_stopForReal_8(bool value)
	{
		___stopForReal_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
