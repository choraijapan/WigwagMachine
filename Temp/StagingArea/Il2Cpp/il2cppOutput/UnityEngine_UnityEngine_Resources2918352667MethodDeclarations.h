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

// UnityEngine.Object
struct Object_t3071478659;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1015136018;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"

// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C"  Object_t3071478659 * Resources_Load_m3601699608 (Il2CppObject * __this /* static, unused */, String_t* ___path0, Type_t * ___systemTypeInstance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Resources::LoadAll(System.String,System.Type)
extern "C"  ObjectU5BU5D_t1015136018* Resources_LoadAll_m2472905169 (Il2CppObject * __this /* static, unused */, String_t* ___path0, Type_t * ___systemTypeInstance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
