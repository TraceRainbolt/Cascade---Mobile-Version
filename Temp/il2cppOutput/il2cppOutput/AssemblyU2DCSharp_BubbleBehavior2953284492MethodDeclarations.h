#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// BubbleBehavior
struct BubbleBehavior_t2953284492;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Collider2D
struct Collider2D_t646061738;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void BubbleBehavior::.ctor()
extern "C"  void BubbleBehavior__ctor_m3678830741 (BubbleBehavior_t2953284492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BubbleBehavior::SetColor(UnityEngine.Color)
extern "C"  void BubbleBehavior_SetColor_m2770161608 (BubbleBehavior_t2953284492 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BubbleBehavior::SetSprite(UnityEngine.Sprite)
extern "C"  void BubbleBehavior_SetSprite_m3026764236 (BubbleBehavior_t2953284492 * __this, Sprite_t309593783 * ___sp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BubbleBehavior::Update()
extern "C"  void BubbleBehavior_Update_m1744993430 (BubbleBehavior_t2953284492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BubbleBehavior::SetRadius(System.Single)
extern "C"  void BubbleBehavior_SetRadius_m2523507778 (BubbleBehavior_t2953284492 * __this, float ___radius0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BubbleBehavior::Start()
extern "C"  void BubbleBehavior_Start_m2232678829 (BubbleBehavior_t2953284492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BubbleBehavior::GetNumBubbles()
extern "C"  int32_t BubbleBehavior_GetNumBubbles_m2828653274 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BubbleBehavior::FixedUpdate()
extern "C"  void BubbleBehavior_FixedUpdate_m2787155084 (BubbleBehavior_t2953284492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BubbleBehavior::Pop(System.Int32)
extern "C"  void BubbleBehavior_Pop_m3650822823 (BubbleBehavior_t2953284492 * __this, int32_t ___prevCombo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BubbleBehavior::SpawnNewBubbles()
extern "C"  void BubbleBehavior_SpawnNewBubbles_m812178171 (BubbleBehavior_t2953284492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BubbleBehavior::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void BubbleBehavior_OnTriggerEnter2D_m1928791477 (BubbleBehavior_t2953284492 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BubbleBehavior::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C"  void BubbleBehavior_OnTriggerStay2D_m2097449388 (BubbleBehavior_t2953284492 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BubbleBehavior::MakeRandomMovement(UnityEngine.Vector3)
extern "C"  void BubbleBehavior_MakeRandomMovement_m2207363700 (BubbleBehavior_t2953284492 * __this, Vector3_t2243707580  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BubbleBehavior::mergeBubbles(UnityEngine.Collider2D)
extern "C"  void BubbleBehavior_mergeBubbles_m2600433531 (BubbleBehavior_t2953284492 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
