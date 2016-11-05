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

// UnityEngine.AndroidJNIHelper
struct AndroidJNIHelper_t1095326088;
// System.String
struct String_t;
// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_t1289602340;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_t1828457281;
// System.Array
struct Il2CppArray;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t1723627146;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_AndroidJavaRunnable1289602340.h"
#include "UnityEngine_UnityEngine_AndroidJavaProxy1828457281.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void UnityEngine.AndroidJNIHelper::.ctor()
extern "C"  void AndroidJNIHelper__ctor_m535865833 (AndroidJNIHelper_t1095326088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNIHelper::get_debug()
extern "C"  bool AndroidJNIHelper_get_debug_m3161638315 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNIHelper::set_debug(System.Boolean)
extern "C"  void AndroidJNIHelper_set_debug_m464785812 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetConstructorID(System.IntPtr)
extern "C"  IntPtr_t AndroidJNIHelper_GetConstructorID_m144105125 (Il2CppObject * __this /* static, unused */, IntPtr_t ___javaClass0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetConstructorID(System.IntPtr,System.String)
extern "C"  IntPtr_t AndroidJNIHelper_GetConstructorID_m2334065185 (Il2CppObject * __this /* static, unused */, IntPtr_t ___javaClass0, String_t* ___signature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNIHelper_GetMethodID_m2407133672 (Il2CppObject * __this /* static, unused */, IntPtr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String)
extern "C"  IntPtr_t AndroidJNIHelper_GetMethodID_m2422204076 (Il2CppObject * __this /* static, unused */, IntPtr_t ___javaClass0, String_t* ___methodName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
extern "C"  IntPtr_t AndroidJNIHelper_GetMethodID_m951538837 (Il2CppObject * __this /* static, unused */, IntPtr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNIHelper_GetFieldID_m187911389 (Il2CppObject * __this /* static, unused */, IntPtr_t ___javaClass0, String_t* ___fieldName1, String_t* ___signature2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String)
extern "C"  IntPtr_t AndroidJNIHelper_GetFieldID_m2976539233 (Il2CppObject * __this /* static, unused */, IntPtr_t ___javaClass0, String_t* ___fieldName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
extern "C"  IntPtr_t AndroidJNIHelper_GetFieldID_m3698856192 (Il2CppObject * __this /* static, unused */, IntPtr_t ___javaClass0, String_t* ___fieldName1, String_t* ___signature2, bool ___isStatic3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
extern "C"  IntPtr_t AndroidJNIHelper_CreateJavaRunnable_m1606930224 (Il2CppObject * __this /* static, unused */, AndroidJavaRunnable_t1289602340 * ___jrunnable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaProxy(UnityEngine.AndroidJavaProxy)
extern "C"  IntPtr_t AndroidJNIHelper_CreateJavaProxy_m1509148942 (Il2CppObject * __this /* static, unused */, AndroidJavaProxy_t1828457281 * ___proxy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNIHelper::INTERNAL_CALL_CreateJavaProxy(UnityEngine.AndroidJavaProxy,System.IntPtr&)
extern "C"  void AndroidJNIHelper_INTERNAL_CALL_CreateJavaProxy_m2036620154 (Il2CppObject * __this /* static, unused */, AndroidJavaProxy_t1828457281 * ___proxy0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::ConvertToJNIArray(System.Array)
extern "C"  IntPtr_t AndroidJNIHelper_ConvertToJNIArray_m3044692154 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.jvalue[] UnityEngine.AndroidJNIHelper::CreateJNIArgArray(System.Object[])
extern "C"  jvalueU5BU5D_t1723627146* AndroidJNIHelper_CreateJNIArgArray_m3777113646 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t1108656482* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
extern "C"  void AndroidJNIHelper_DeleteJNIArgArray_m4114677528 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t1108656482* ___args0, jvalueU5BU5D_t1723627146* ___jniArgs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetConstructorID(System.IntPtr,System.Object[])
extern "C"  IntPtr_t AndroidJNIHelper_GetConstructorID_m4058417937 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass0, ObjectU5BU5D_t1108656482* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.Object[],System.Boolean)
extern "C"  IntPtr_t AndroidJNIHelper_GetMethodID_m2032786277 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t1108656482* ___args2, bool ___isStatic3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNIHelper::GetSignature(System.Object)
extern "C"  String_t* AndroidJNIHelper_GetSignature_m829574132 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNIHelper::GetSignature(System.Object[])
extern "C"  String_t* AndroidJNIHelper_GetSignature_m2651842066 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t1108656482* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
