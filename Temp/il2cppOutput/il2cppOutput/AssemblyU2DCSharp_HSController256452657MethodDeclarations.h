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

// HSController
struct HSController_t256452657;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void HSController::.ctor()
extern "C"  void HSController__ctor_m3487745240 (HSController_t256452657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HSController::Start()
extern "C"  void HSController_Start_m2776023600 (HSController_t256452657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HSController::SendScore(System.String,System.Int32)
extern "C"  void HSController_SendScore_m326332211 (HSController_t256452657 * __this, String_t* ___name0, int32_t ___score1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator HSController::PostScores(System.String,System.Int32)
extern "C"  Il2CppObject * HSController_PostScores_m1751567918 (HSController_t256452657 * __this, String_t* ___name0, int32_t ___score1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator HSController::GetScores()
extern "C"  Il2CppObject * HSController_GetScores_m1097086139 (HSController_t256452657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
