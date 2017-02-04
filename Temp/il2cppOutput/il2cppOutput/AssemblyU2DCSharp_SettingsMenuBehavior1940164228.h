#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ScoreSaverBehavior
struct ScoreSaverBehavior_t395301953;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SettingsMenuBehavior
struct  SettingsMenuBehavior_t1940164228  : public MonoBehaviour_t1158329972
{
public:
	// ScoreSaverBehavior SettingsMenuBehavior::save
	ScoreSaverBehavior_t395301953 * ___save_2;
	// UnityEngine.UI.Toggle SettingsMenuBehavior::musicbut
	Toggle_t3976754468 * ___musicbut_3;
	// UnityEngine.UI.Toggle SettingsMenuBehavior::soundbut
	Toggle_t3976754468 * ___soundbut_4;

public:
	inline static int32_t get_offset_of_save_2() { return static_cast<int32_t>(offsetof(SettingsMenuBehavior_t1940164228, ___save_2)); }
	inline ScoreSaverBehavior_t395301953 * get_save_2() const { return ___save_2; }
	inline ScoreSaverBehavior_t395301953 ** get_address_of_save_2() { return &___save_2; }
	inline void set_save_2(ScoreSaverBehavior_t395301953 * value)
	{
		___save_2 = value;
		Il2CppCodeGenWriteBarrier(&___save_2, value);
	}

	inline static int32_t get_offset_of_musicbut_3() { return static_cast<int32_t>(offsetof(SettingsMenuBehavior_t1940164228, ___musicbut_3)); }
	inline Toggle_t3976754468 * get_musicbut_3() const { return ___musicbut_3; }
	inline Toggle_t3976754468 ** get_address_of_musicbut_3() { return &___musicbut_3; }
	inline void set_musicbut_3(Toggle_t3976754468 * value)
	{
		___musicbut_3 = value;
		Il2CppCodeGenWriteBarrier(&___musicbut_3, value);
	}

	inline static int32_t get_offset_of_soundbut_4() { return static_cast<int32_t>(offsetof(SettingsMenuBehavior_t1940164228, ___soundbut_4)); }
	inline Toggle_t3976754468 * get_soundbut_4() const { return ___soundbut_4; }
	inline Toggle_t3976754468 ** get_address_of_soundbut_4() { return &___soundbut_4; }
	inline void set_soundbut_4(Toggle_t3976754468 * value)
	{
		___soundbut_4 = value;
		Il2CppCodeGenWriteBarrier(&___soundbut_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
