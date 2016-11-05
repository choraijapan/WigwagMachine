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

// System.String
struct String_t;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t1723627146;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Double[]
struct DoubleU5BU5D_t2145413704;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// System.Int64[]
struct Int64U5BU5D_t2174042770;
// System.Int16[]
struct Int16U5BU5D_t801762735;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Boolean[]
struct BooleanU5BU5D_t3456302923;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.IntPtr[]
struct IntPtrU5BU5D_t3228729122;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.AndroidJNISafe::CheckException()
extern "C"  void AndroidJNISafe_CheckException_m43129153 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::DeleteGlobalRef(System.IntPtr)
extern "C"  void AndroidJNISafe_DeleteGlobalRef_m3119229927 (Il2CppObject * __this /* static, unused */, IntPtr_t ___globalref0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
extern "C"  void AndroidJNISafe_DeleteLocalRef_m2718059367 (Il2CppObject * __this /* static, unused */, IntPtr_t ___localref0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::NewStringUTF(System.String)
extern "C"  IntPtr_t AndroidJNISafe_NewStringUTF_m1650627069 (Il2CppObject * __this /* static, unused */, String_t* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNISafe::GetStringUTFChars(System.IntPtr)
extern "C"  String_t* AndroidJNISafe_GetStringUTFChars_m1288727154 (Il2CppObject * __this /* static, unused */, IntPtr_t ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::GetObjectClass(System.IntPtr)
extern "C"  IntPtr_t AndroidJNISafe_GetObjectClass_m3301160194 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::GetStaticMethodID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNISafe_GetStaticMethodID_m2373470649 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::GetMethodID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNISafe_GetMethodID_m3184876807 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, String_t* ___name1, String_t* ___sig2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::GetFieldID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNISafe_GetFieldID_m1044283870 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::GetStaticFieldID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNISafe_GetStaticFieldID_m3373414124 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::FromReflectedMethod(System.IntPtr)
extern "C"  IntPtr_t AndroidJNISafe_FromReflectedMethod_m103801358 (Il2CppObject * __this /* static, unused */, IntPtr_t ___refMethod0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::FromReflectedField(System.IntPtr)
extern "C"  IntPtr_t AndroidJNISafe_FromReflectedField_m2369452317 (Il2CppObject * __this /* static, unused */, IntPtr_t ___refField0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::FindClass(System.String)
extern "C"  IntPtr_t AndroidJNISafe_FindClass_m952975504 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  IntPtr_t AndroidJNISafe_NewObject_m2725834966 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::SetStaticObjectField(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void AndroidJNISafe_SetStaticObjectField_m1959015371 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, IntPtr_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::SetStaticStringField(System.IntPtr,System.IntPtr,System.String)
extern "C"  void AndroidJNISafe_SetStaticStringField_m3418079051 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, String_t* ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::SetStaticCharField(System.IntPtr,System.IntPtr,System.Char)
extern "C"  void AndroidJNISafe_SetStaticCharField_m2919336363 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, Il2CppChar ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::SetStaticDoubleField(System.IntPtr,System.IntPtr,System.Double)
extern "C"  void AndroidJNISafe_SetStaticDoubleField_m779138891 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, double ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::SetStaticFloatField(System.IntPtr,System.IntPtr,System.Single)
extern "C"  void AndroidJNISafe_SetStaticFloatField_m2287797809 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::SetStaticLongField(System.IntPtr,System.IntPtr,System.Int64)
extern "C"  void AndroidJNISafe_SetStaticLongField_m2526577630 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, int64_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::SetStaticShortField(System.IntPtr,System.IntPtr,System.Int16)
extern "C"  void AndroidJNISafe_SetStaticShortField_m831822565 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, int16_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::SetStaticByteField(System.IntPtr,System.IntPtr,System.Byte)
extern "C"  void AndroidJNISafe_SetStaticByteField_m122361963 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, uint8_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::SetStaticBooleanField(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void AndroidJNISafe_SetStaticBooleanField_m3315740581 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, bool ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::SetStaticIntField(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void AndroidJNISafe_SetStaticIntField_m20778968 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, int32_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::GetStaticObjectField(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t AndroidJNISafe_GetStaticObjectField_m1769477468 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNISafe::GetStaticStringField(System.IntPtr,System.IntPtr)
extern "C"  String_t* AndroidJNISafe_GetStaticStringField_m3486277056 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNISafe::GetStaticCharField(System.IntPtr,System.IntPtr)
extern "C"  Il2CppChar AndroidJNISafe_GetStaticCharField_m1351765194 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNISafe::GetStaticDoubleField(System.IntPtr,System.IntPtr)
extern "C"  double AndroidJNISafe_GetStaticDoubleField_m3445626176 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNISafe::GetStaticFloatField(System.IntPtr,System.IntPtr)
extern "C"  float AndroidJNISafe_GetStaticFloatField_m2553918180 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNISafe::GetStaticLongField(System.IntPtr,System.IntPtr)
extern "C"  int64_t AndroidJNISafe_GetStaticLongField_m1440712973 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNISafe::GetStaticShortField(System.IntPtr,System.IntPtr)
extern "C"  int16_t AndroidJNISafe_GetStaticShortField_m3249645170 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNISafe::GetStaticByteField(System.IntPtr,System.IntPtr)
extern "C"  uint8_t AndroidJNISafe_GetStaticByteField_m292843694 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNISafe::GetStaticBooleanField(System.IntPtr,System.IntPtr)
extern "C"  bool AndroidJNISafe_GetStaticBooleanField_m3886861258 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNISafe::GetStaticIntField(System.IntPtr,System.IntPtr)
extern "C"  int32_t AndroidJNISafe_GetStaticIntField_m1159703659 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::CallStaticVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  void AndroidJNISafe_CallStaticVoidMethod_m2998148191 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  IntPtr_t AndroidJNISafe_CallStaticObjectMethod_m4224289535 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNISafe::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  String_t* AndroidJNISafe_CallStaticStringMethod_m3883693439 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNISafe::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  Il2CppChar AndroidJNISafe_CallStaticCharMethod_m1179522847 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNISafe::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  double AndroidJNISafe_CallStaticDoubleMethod_m3073281407 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNISafe::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  float AndroidJNISafe_CallStaticFloatMethod_m1967472625 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNISafe::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int64_t AndroidJNISafe_CallStaticLongMethod_m2663755016 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNISafe::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int16_t AndroidJNISafe_CallStaticShortMethod_m3685346531 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNISafe::CallStaticByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  uint8_t AndroidJNISafe_CallStaticByteMethod_m821820383 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNISafe::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  bool AndroidJNISafe_CallStaticBooleanMethod_m998562403 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNISafe::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int32_t AndroidJNISafe_CallStaticIntMethod_m4213999952 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::SetObjectField(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void AndroidJNISafe_SetObjectField_m2385048189 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, IntPtr_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::SetStringField(System.IntPtr,System.IntPtr,System.String)
extern "C"  void AndroidJNISafe_SetStringField_m3844111869 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, String_t* ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::SetCharField(System.IntPtr,System.IntPtr,System.Char)
extern "C"  void AndroidJNISafe_SetCharField_m2951049565 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, Il2CppChar ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::SetDoubleField(System.IntPtr,System.IntPtr,System.Double)
extern "C"  void AndroidJNISafe_SetDoubleField_m1205171709 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, double ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::SetFloatField(System.IntPtr,System.IntPtr,System.Single)
extern "C"  void AndroidJNISafe_SetFloatField_m2162993471 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::SetLongField(System.IntPtr,System.IntPtr,System.Int64)
extern "C"  void AndroidJNISafe_SetLongField_m3509686892 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, int64_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::SetShortField(System.IntPtr,System.IntPtr,System.Int16)
extern "C"  void AndroidJNISafe_SetShortField_m1243438615 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, int16_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::SetByteField(System.IntPtr,System.IntPtr,System.Byte)
extern "C"  void AndroidJNISafe_SetByteField_m154075165 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, uint8_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::SetBooleanField(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void AndroidJNISafe_SetBooleanField_m416418263 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, bool ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::SetIntField(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void AndroidJNISafe_SetIntField_m52492170 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, int32_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::GetObjectField(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t AndroidJNISafe_GetObjectField_m1086719694 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNISafe::GetStringField(System.IntPtr,System.IntPtr)
extern "C"  String_t* AndroidJNISafe_GetStringField_m952648882 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNISafe::GetCharField(System.IntPtr,System.IntPtr)
extern "C"  Il2CppChar AndroidJNISafe_GetCharField_m2841456636 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNISafe::GetDoubleField(System.IntPtr,System.IntPtr)
extern "C"  double AndroidJNISafe_GetDoubleField_m866110514 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNISafe::GetFloatField(System.IntPtr,System.IntPtr)
extern "C"  float AndroidJNISafe_GetFloatField_m1812297842 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNISafe::GetLongField(System.IntPtr,System.IntPtr)
extern "C"  int64_t AndroidJNISafe_GetLongField_m1649403391 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNISafe::GetShortField(System.IntPtr,System.IntPtr)
extern "C"  int16_t AndroidJNISafe_GetShortField_m1450219136 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNISafe::GetByteField(System.IntPtr,System.IntPtr)
extern "C"  uint8_t AndroidJNISafe_GetByteField_m1032569184 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNISafe::GetBooleanField(System.IntPtr,System.IntPtr)
extern "C"  bool AndroidJNISafe_GetBooleanField_m931377496 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNISafe::GetIntField(System.IntPtr,System.IntPtr)
extern "C"  int32_t AndroidJNISafe_GetIntField_m4075611257 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNISafe::CallVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  void AndroidJNISafe_CallVoidMethod_m2934136849 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  IntPtr_t AndroidJNISafe_CallObjectMethod_m3860035057 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNISafe::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  String_t* AndroidJNISafe_CallStringMethod_m737950449 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNISafe::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  Il2CppChar AndroidJNISafe_CallCharMethod_m3665686865 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNISafe::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  double AndroidJNISafe_CallDoubleMethod_m119571185 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNISafe::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  float AndroidJNISafe_CallFloatMethod_m3123943807 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNISafe::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int64_t AndroidJNISafe_CallLongMethod_m4083357050 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNISafe::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int16_t AndroidJNISafe_CallShortMethod_m1081953265 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNISafe::CallByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  uint8_t AndroidJNISafe_CallByteMethod_m2801547409 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNISafe::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  bool AndroidJNISafe_CallBooleanMethod_m2973748465 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNISafe::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int32_t AndroidJNISafe_CallIntMethod_m711632734 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] UnityEngine.AndroidJNISafe::FromCharArray(System.IntPtr)
extern "C"  CharU5BU5D_t3324145743* AndroidJNISafe_FromCharArray_m2296041519 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] UnityEngine.AndroidJNISafe::FromDoubleArray(System.IntPtr)
extern "C"  DoubleU5BU5D_t2145413704* AndroidJNISafe_FromDoubleArray_m1010842127 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] UnityEngine.AndroidJNISafe::FromFloatArray(System.IntPtr)
extern "C"  SingleU5BU5D_t2316563989* AndroidJNISafe_FromFloatArray_m2529334857 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64[] UnityEngine.AndroidJNISafe::FromLongArray(System.IntPtr)
extern "C"  Int64U5BU5D_t2174042770* AndroidJNISafe_FromLongArray_m1200701464 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16[] UnityEngine.AndroidJNISafe::FromShortArray(System.IntPtr)
extern "C"  Int16U5BU5D_t801762735* AndroidJNISafe_FromShortArray_m4045311291 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.AndroidJNISafe::FromByteArray(System.IntPtr)
extern "C"  ByteU5BU5D_t4260760469* AndroidJNISafe_FromByteArray_m1064061935 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean[] UnityEngine.AndroidJNISafe::FromBooleanArray(System.IntPtr)
extern "C"  BooleanU5BU5D_t3456302923* AndroidJNISafe_FromBooleanArray_m1181457339 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.AndroidJNISafe::FromIntArray(System.IntPtr)
extern "C"  Int32U5BU5D_t3230847821* AndroidJNISafe_FromIntArray_m2726154792 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::ToObjectArray(System.IntPtr[],System.IntPtr)
extern "C"  IntPtr_t AndroidJNISafe_ToObjectArray_m2343440750 (Il2CppObject * __this /* static, unused */, IntPtrU5BU5D_t3228729122* ___array0, IntPtr_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::ToCharArray(System.Char[])
extern "C"  IntPtr_t AndroidJNISafe_ToCharArray_m589918336 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::ToDoubleArray(System.Double[])
extern "C"  IntPtr_t AndroidJNISafe_ToDoubleArray_m1391050336 (Il2CppObject * __this /* static, unused */, DoubleU5BU5D_t2145413704* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::ToFloatArray(System.Single[])
extern "C"  IntPtr_t AndroidJNISafe_ToFloatArray_m942365282 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t2316563989* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::ToLongArray(System.Int64[])
extern "C"  IntPtr_t AndroidJNISafe_ToLongArray_m2453751525 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t2174042770* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::ToShortArray(System.Int16[])
extern "C"  IntPtr_t AndroidJNISafe_ToShortArray_m130416912 (Il2CppObject * __this /* static, unused */, Int16U5BU5D_t801762735* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::ToByteArray(System.Byte[])
extern "C"  IntPtr_t AndroidJNISafe_ToByteArray_m1438477888 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::ToBooleanArray(System.Boolean[])
extern "C"  IntPtr_t AndroidJNISafe_ToBooleanArray_m2993741840 (Il2CppObject * __this /* static, unused */, BooleanU5BU5D_t3456302923* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::ToIntArray(System.Int32[])
extern "C"  IntPtr_t AndroidJNISafe_ToIntArray_m952526659 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3230847821* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNISafe::GetObjectArrayElement(System.IntPtr,System.Int32)
extern "C"  IntPtr_t AndroidJNISafe_GetObjectArrayElement_m1197759918 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
extern "C"  int32_t AndroidJNISafe_GetArrayLength_m832146097 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
