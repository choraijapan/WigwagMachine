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

// UnityEngine.Material
struct Material_t3870600107;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"

// UnityEngine.Color UnityEngine.Material::get_color()
extern "C"  Color_t4194546905  Material_get_color_m2268945527 (Material_t3870600107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C"  void Material_set_color_m3296857020 (Material_t3870600107 * __this, Color_t4194546905  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C"  void Material_SetColor_m1918430019 (Material_t3870600107 * __this, String_t* ___propertyName0, Color_t4194546905  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C"  void Material_SetColor_m54957808 (Material_t3870600107 * __this, int32_t ___nameID0, Color_t4194546905  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C"  void Material_INTERNAL_CALL_SetColor_m3209011477 (Il2CppObject * __this /* static, unused */, Material_t3870600107 * ___self0, int32_t ___nameID1, Color_t4194546905 * ___color2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
extern "C"  Color_t4194546905  Material_GetColor_m1709543664 (Material_t3870600107 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.Int32)
extern "C"  Color_t4194546905  Material_GetColor_m317509027 (Material_t3870600107 * __this, int32_t ___nameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_GetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C"  void Material_INTERNAL_CALL_GetColor_m3428345249 (Il2CppObject * __this /* static, unused */, Material_t3870600107 * ___self0, int32_t ___nameID1, Color_t4194546905 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
