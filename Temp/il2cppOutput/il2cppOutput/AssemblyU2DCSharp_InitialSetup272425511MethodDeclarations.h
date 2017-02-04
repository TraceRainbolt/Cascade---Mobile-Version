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

// InitialSetup
struct InitialSetup_t272425511;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void InitialSetup::.ctor()
extern "C"  void InitialSetup__ctor_m3065655428 (InitialSetup_t272425511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InitialSetup::Start()
extern "C"  void InitialSetup_Start_m2948874824 (InitialSetup_t272425511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InitialSetup::StartGen()
extern "C"  void InitialSetup_StartGen_m810424324 (InitialSetup_t272425511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InitialSetup::createBubbles()
extern "C"  void InitialSetup_createBubbles_m853633415 (InitialSetup_t272425511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InitialSetup::SpawnBubble(System.Single,UnityEngine.Sprite,UnityEngine.Color,UnityEngine.Vector3)
extern "C"  void InitialSetup_SpawnBubble_m735120447 (InitialSetup_t272425511 * __this, float ___radius0, Sprite_t309593783 * ___sp1, Color_t2020392075  ___color2, Vector3_t2243707580  ___pos3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InitialSetup::SpawnBubble(System.Single,UnityEngine.Sprite,UnityEngine.Color,UnityEngine.Vector3,System.Int32)
extern "C"  void InitialSetup_SpawnBubble_m4020644230 (InitialSetup_t272425511 * __this, float ___radius0, Sprite_t309593783 * ___sp1, Color_t2020392075  ___color2, Vector3_t2243707580  ___pos3, int32_t ___numberOfBubbles4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] InitialSetup::getColorArray()
extern "C"  ColorU5BU5D_t672350442* InitialSetup_getColorArray_m3547418315 (InitialSetup_t272425511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite[] InitialSetup::getSpriteArray()
extern "C"  SpriteU5BU5D_t3359083662* InitialSetup_getSpriteArray_m1932718819 (InitialSetup_t272425511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InitialSetup::FixedUpdate()
extern "C"  void InitialSetup_FixedUpdate_m544923405 (InitialSetup_t272425511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
