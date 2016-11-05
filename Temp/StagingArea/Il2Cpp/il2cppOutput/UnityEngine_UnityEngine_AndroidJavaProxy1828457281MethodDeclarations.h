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

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_t1828457281;
// System.String
struct String_t;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t1816259147;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t2362096582;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_t3281907299;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_AndroidJavaClass1816259147.h"

// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
extern "C"  void AndroidJavaProxy__ctor_m2087176370 (AndroidJavaProxy_t1828457281 * __this, String_t* ___javaInterface0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(UnityEngine.AndroidJavaClass)
extern "C"  void AndroidJavaProxy__ctor_m3193168274 (AndroidJavaProxy_t1828457281 * __this, AndroidJavaClass_t1816259147 * ___javaInterface0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::Invoke(System.String,System.Object[])
extern "C"  AndroidJavaObject_t2362096582 * AndroidJavaProxy_Invoke_m3558058824 (AndroidJavaProxy_t1828457281 * __this, String_t* ___methodName0, ObjectU5BU5D_t1108656482* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::Invoke(System.String,UnityEngine.AndroidJavaObject[])
extern "C"  AndroidJavaObject_t2362096582 * AndroidJavaProxy_Invoke_m1329445837 (AndroidJavaProxy_t1828457281 * __this, String_t* ___methodName0, AndroidJavaObjectU5BU5D_t3281907299* ___javaArgs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
