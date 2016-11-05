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

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_t2775494809;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_t1828457281;
// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_t1289602340;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t1723627146;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Object
struct Il2CppObject;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t2362096582;
// System.Array
struct Il2CppArray;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_AndroidJavaProxy1828457281.h"
#include "UnityEngine_UnityEngine_AndroidJavaRunnable1289602340.h"
#include "UnityEngine_UnityEngine_AndroidJavaObject2362096582.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine._AndroidJNIHelper::.ctor()
extern "C"  void _AndroidJNIHelper__ctor_m1006073238 (_AndroidJNIHelper_t2775494809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::CreateJavaProxy(System.Int32,UnityEngine.AndroidJavaProxy)
extern "C"  IntPtr_t _AndroidJNIHelper_CreateJavaProxy_m2127916168 (Il2CppObject * __this /* static, unused */, int32_t ___delegateHandle0, AndroidJavaProxy_t1828457281 * ___proxy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
extern "C"  IntPtr_t _AndroidJNIHelper_CreateJavaRunnable_m2949886695 (Il2CppObject * __this /* static, unused */, AndroidJavaRunnable_t1289602340 * ___jrunnable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::InvokeJavaProxyMethod(UnityEngine.AndroidJavaProxy,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t _AndroidJNIHelper_InvokeJavaProxyMethod_m3948690150 (Il2CppObject * __this /* static, unused */, AndroidJavaProxy_t1828457281 * ___proxy0, IntPtr_t ___jmethodName1, IntPtr_t ___jargs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.jvalue[] UnityEngine._AndroidJNIHelper::CreateJNIArgArray(System.Object[])
extern "C"  jvalueU5BU5D_t1723627146* _AndroidJNIHelper_CreateJNIArgArray_m3400436963 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t1108656482* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine._AndroidJNIHelper::UnboxArray(UnityEngine.AndroidJavaObject)
extern "C"  Il2CppObject * _AndroidJNIHelper_UnboxArray_m2892536601 (Il2CppObject * __this /* static, unused */, AndroidJavaObject_t2362096582 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine._AndroidJNIHelper::Unbox(UnityEngine.AndroidJavaObject)
extern "C"  Il2CppObject * _AndroidJNIHelper_Unbox_m1336965950 (Il2CppObject * __this /* static, unused */, AndroidJavaObject_t2362096582 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AndroidJavaObject UnityEngine._AndroidJNIHelper::Box(System.Object)
extern "C"  AndroidJavaObject_t2362096582 * _AndroidJNIHelper_Box_m2598782459 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine._AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
extern "C"  void _AndroidJNIHelper_DeleteJNIArgArray_m2053299397 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t1108656482* ___args0, jvalueU5BU5D_t1723627146* ___jniArgs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::ConvertToJNIArray(System.Array)
extern "C"  IntPtr_t _AndroidJNIHelper_ConvertToJNIArray_m1911420401 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetConstructorID(System.IntPtr,System.Object[])
extern "C"  IntPtr_t _AndroidJNIHelper_GetConstructorID_m955179592 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass0, ObjectU5BU5D_t1108656482* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.Object[],System.Boolean)
extern "C"  IntPtr_t _AndroidJNIHelper_GetMethodID_m4173184412 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t1108656482* ___args2, bool ___isStatic3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetConstructorID(System.IntPtr,System.String)
extern "C"  IntPtr_t _AndroidJNIHelper_GetConstructorID_m3153181464 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass0, String_t* ___signature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
extern "C"  IntPtr_t _AndroidJNIHelper_GetMethodID_m3581696140 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodIDFallback(System.IntPtr,System.String,System.String,System.Boolean)
extern "C"  IntPtr_t _AndroidJNIHelper_GetMethodIDFallback_m2222932750 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
extern "C"  IntPtr_t _AndroidJNIHelper_GetFieldID_m597111337 (Il2CppObject * __this /* static, unused */, IntPtr_t ___jclass0, String_t* ___fieldName1, String_t* ___signature2, bool ___isStatic3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
extern "C"  String_t* _AndroidJNIHelper_GetSignature_m1099812039 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object[])
extern "C"  String_t* _AndroidJNIHelper_GetSignature_m357465637 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t1108656482* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
