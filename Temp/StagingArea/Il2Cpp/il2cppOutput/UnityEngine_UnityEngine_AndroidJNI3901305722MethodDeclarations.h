﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.AndroidJNI
struct AndroidJNI_t3901305722;
// System.String
struct String_t;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t1723627146;
// System.Boolean[]
struct BooleanU5BU5D_t3456302923;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Int16[]
struct Int16U5BU5D_t801762735;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Int64[]
struct Int64U5BU5D_t2174042770;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// System.Double[]
struct DoubleU5BU5D_t2145413704;
// System.IntPtr[]
struct IntPtrU5BU5D_t3228729122;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.AndroidJNI::.ctor()
extern "C"  void AndroidJNI__ctor_m3167642871 (AndroidJNI_t3901305722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::AttachCurrentThread()
extern "C"  int32_t AndroidJNI_AttachCurrentThread_m3690043827 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::DetachCurrentThread()
extern "C"  int32_t AndroidJNI_DetachCurrentThread_m1866525349 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::GetVersion()
extern "C"  int32_t AndroidJNI_GetVersion_m4276188431 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::FindClass(System.String)
extern "C"  IntPtr_t AndroidJNI_FindClass_m1230259107 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_FindClass(System.String,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_FindClass_m734646449 (Il2CppObject * __this /* static, unused */, String_t* ___name0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::FromReflectedMethod(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_FromReflectedMethod_m352872801 (Il2CppObject * __this /* static, unused */, IntPtr_t ___refMethod0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_FromReflectedMethod(System.IntPtr,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_FromReflectedMethod_m915688371 (Il2CppObject * __this /* static, unused */, IntPtr_t ___refMethod0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::FromReflectedField(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_FromReflectedField_m576371562 (Il2CppObject * __this /* static, unused */, IntPtr_t ___refField0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_FromReflectedField(System.IntPtr,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_FromReflectedField_m3534047582 (Il2CppObject * __this /* static, unused */, IntPtr_t ___refField0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToReflectedMethod(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  IntPtr_t AndroidJNI_ToReflectedMethod_m4004809917 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, bool ___isStatic2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ToReflectedMethod(System.IntPtr,System.IntPtr,System.Boolean,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ToReflectedMethod_m818033835 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, bool ___isStatic2, IntPtr_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToReflectedField(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  IntPtr_t AndroidJNI_ToReflectedField_m1928696022 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, bool ___isStatic2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ToReflectedField(System.IntPtr,System.IntPtr,System.Boolean,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ToReflectedField_m1331131422 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, bool ___isStatic2, IntPtr_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetSuperclass(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_GetSuperclass_m566738529 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_GetSuperclass(System.IntPtr,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_GetSuperclass_m2891282227 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNI::IsAssignableFrom(System.IntPtr,System.IntPtr)
extern "C"  bool AndroidJNI_IsAssignableFrom_m1090960242 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz10, IntPtr_t ___clazz21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::Throw(System.IntPtr)
extern "C"  int32_t AndroidJNI_Throw_m1304429881 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::ThrowNew(System.IntPtr,System.String)
extern "C"  int32_t AndroidJNI_ThrowNew_m1965335273 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ExceptionOccurred()
extern "C"  IntPtr_t AndroidJNI_ExceptionOccurred_m3001920724 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ExceptionOccurred(System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ExceptionOccurred_m2049112834 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::ExceptionDescribe()
extern "C"  void AndroidJNI_ExceptionDescribe_m1265488335 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::ExceptionClear()
extern "C"  void AndroidJNI_ExceptionClear_m970305067 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::FatalError(System.String)
extern "C"  void AndroidJNI_FatalError_m237848529 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::PushLocalFrame(System.Int32)
extern "C"  int32_t AndroidJNI_PushLocalFrame_m940543802 (Il2CppObject * __this /* static, unused */, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::PopLocalFrame(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_PopLocalFrame_m2047680321 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_PopLocalFrame(System.IntPtr,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_PopLocalFrame_m877017683 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewGlobalRef(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_NewGlobalRef_m172051970 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_NewGlobalRef(System.IntPtr,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_NewGlobalRef_m3557360454 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::DeleteGlobalRef(System.IntPtr)
extern "C"  void AndroidJNI_DeleteGlobalRef_m3178615354 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewLocalRef(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_NewLocalRef_m129137132 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_NewLocalRef(System.IntPtr,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_NewLocalRef_m1215384008 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)
extern "C"  void AndroidJNI_DeleteLocalRef_m641765044 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNI::IsSameObject(System.IntPtr,System.IntPtr)
extern "C"  bool AndroidJNI_IsSameObject_m1984810368 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj10, IntPtr_t ___obj21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::EnsureLocalCapacity(System.Int32)
extern "C"  int32_t AndroidJNI_EnsureLocalCapacity_m2346920397 (Il2CppObject * __this /* static, unused */, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::AllocObject(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_AllocObject_m725713024 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_AllocObject(System.IntPtr,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_AllocObject_m2290731188 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  IntPtr_t AndroidJNI_NewObject_m2867608803 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_NewObject_m2891951685 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, IntPtr_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectClass(System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_GetObjectClass_m798139855 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_GetObjectClass(System.IntPtr,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_GetObjectClass_m1119829337 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNI::IsInstanceOf(System.IntPtr,System.IntPtr)
extern "C"  bool AndroidJNI_IsInstanceOf_m3477920985 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___clazz1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetMethodID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNI_GetMethodID_m2948332762 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_GetMethodID(System.IntPtr,System.String,System.String,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_GetMethodID_m2848489498 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, IntPtr_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetFieldID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNI_GetFieldID_m3253410731 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_GetFieldID(System.IntPtr,System.String,System.String,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_GetFieldID_m2767640061 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, IntPtr_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetStaticMethodID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNI_GetStaticMethodID_m2473492300 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_GetStaticMethodID(System.IntPtr,System.String,System.String,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_GetStaticMethodID_m3311471336 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, IntPtr_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetStaticFieldID(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t AndroidJNI_GetStaticFieldID_m3515187961 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_GetStaticFieldID(System.IntPtr,System.String,System.String,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_GetStaticFieldID_m2782574959 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, String_t* ___name1, String_t* ___sig2, IntPtr_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewStringUTF(System.String)
extern "C"  IntPtr_t AndroidJNI_NewStringUTF_m2984333834 (Il2CppObject * __this /* static, unused */, String_t* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_NewStringUTF(System.String,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_NewStringUTF_m1282371134 (Il2CppObject * __this /* static, unused */, String_t* ___bytes0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::GetStringUTFLength(System.IntPtr)
extern "C"  int32_t AndroidJNI_GetStringUTFLength_m4127803297 (Il2CppObject * __this /* static, unused */, IntPtr_t ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNI::GetStringUTFChars(System.IntPtr)
extern "C"  String_t* AndroidJNI_GetStringUTFChars_m2788209029 (Il2CppObject * __this /* static, unused */, IntPtr_t ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNI::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  String_t* AndroidJNI_CallStringMethod_m3969973572 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  IntPtr_t AndroidJNI_CallObjectMethod_m637661508 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_CallObjectMethod_m1771653488 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, IntPtr_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int32_t AndroidJNI_CallIntMethod_m2566231915 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNI::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  bool AndroidJNI_CallBooleanMethod_m2659085182 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNI::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int16_t AndroidJNI_CallShortMethod_m1918107582 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNI::CallByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  uint8_t AndroidJNI_CallByteMethod_m4179587108 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNI::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  Il2CppChar AndroidJNI_CallCharMethod_m1814770148 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNI::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  float AndroidJNI_CallFloatMethod_m4115747916 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNI::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  double AndroidJNI_CallDoubleMethod_m2741331268 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNI::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int64_t AndroidJNI_CallLongMethod_m4476813 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::CallVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  void AndroidJNI_CallVoidMethod_m3567923620 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNI::GetStringField(System.IntPtr,System.IntPtr)
extern "C"  String_t* AndroidJNI_GetStringField_m443868095 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectField(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_GetObjectField_m1399131355 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_GetObjectField(System.IntPtr,System.IntPtr,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_GetObjectField_m2292597581 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, IntPtr_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNI::GetBooleanField(System.IntPtr,System.IntPtr)
extern "C"  bool AndroidJNI_GetBooleanField_m3862375787 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNI::GetByteField(System.IntPtr,System.IntPtr)
extern "C"  uint8_t AndroidJNI_GetByteField_m3137655597 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNI::GetCharField(System.IntPtr,System.IntPtr)
extern "C"  Il2CppChar AndroidJNI_GetCharField_m631396553 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNI::GetShortField(System.IntPtr,System.IntPtr)
extern "C"  int16_t AndroidJNI_GetShortField_m3257591123 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::GetIntField(System.IntPtr,System.IntPtr)
extern "C"  int32_t AndroidJNI_GetIntField_m2557591308 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNI::GetLongField(System.IntPtr,System.IntPtr)
extern "C"  int64_t AndroidJNI_GetLongField_m2902181196 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNI::GetFloatField(System.IntPtr,System.IntPtr)
extern "C"  float AndroidJNI_GetFloatField_m3256131653 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNI::GetDoubleField(System.IntPtr,System.IntPtr)
extern "C"  double AndroidJNI_GetDoubleField_m2203077439 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStringField(System.IntPtr,System.IntPtr,System.String)
extern "C"  void AndroidJNI_SetStringField_m372505546 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, String_t* ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetObjectField(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void AndroidJNI_SetObjectField_m3208409162 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, IntPtr_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetBooleanField(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void AndroidJNI_SetBooleanField_m1392330852 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, bool ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetByteField(System.IntPtr,System.IntPtr,System.Byte)
extern "C"  void AndroidJNI_SetByteField_m2585488490 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, uint8_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetCharField(System.IntPtr,System.IntPtr,System.Char)
extern "C"  void AndroidJNI_SetCharField_m1087495594 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, Il2CppChar ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetShortField(System.IntPtr,System.IntPtr,System.Int16)
extern "C"  void AndroidJNI_SetShortField_m1369434916 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, int16_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetIntField(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void AndroidJNI_SetIntField_m2483905495 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, int32_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetLongField(System.IntPtr,System.IntPtr,System.Int64)
extern "C"  void AndroidJNI_SetLongField_m1574088639 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, int64_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetFloatField(System.IntPtr,System.IntPtr,System.Single)
extern "C"  void AndroidJNI_SetFloatField_m1773911506 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetDoubleField(System.IntPtr,System.IntPtr,System.Double)
extern "C"  void AndroidJNI_SetDoubleField_m2028532682 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___fieldID1, double ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNI::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  String_t* AndroidJNI_CallStaticStringMethod_m1017965970 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  IntPtr_t AndroidJNI_CallStaticObjectMethod_m3595893778 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_CallStaticObjectMethod_m630769762 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, IntPtr_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int32_t AndroidJNI_CallStaticIntMethod_m1635023773 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNI::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  bool AndroidJNI_CallStaticBooleanMethod_m4255357744 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNI::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int16_t AndroidJNI_CallStaticShortMethod_m751555312 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNI::CallStaticByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  uint8_t AndroidJNI_CallStaticByteMethod_m4090362162 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNI::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  Il2CppChar AndroidJNI_CallStaticCharMethod_m289365362 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNI::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  float AndroidJNI_CallStaticFloatMethod_m3389844734 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNI::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  double AndroidJNI_CallStaticDoubleMethod_m2003248530 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNI::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  int64_t AndroidJNI_CallStaticLongMethod_m3580480731 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::CallStaticVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
extern "C"  void AndroidJNI_CallStaticVoidMethod_m1116615602 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___methodID1, jvalueU5BU5D_t1723627146* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJNI::GetStaticStringField(System.IntPtr,System.IntPtr)
extern "C"  String_t* AndroidJNI_GetStaticStringField_m1861664525 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetStaticObjectField(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_GetStaticObjectField_m3723206057 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_GetStaticObjectField(System.IntPtr,System.IntPtr,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_GetStaticObjectField_m3073928511 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, IntPtr_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNI::GetStaticBooleanField(System.IntPtr,System.IntPtr)
extern "C"  bool AndroidJNI_GetStaticBooleanField_m4125732253 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNI::GetStaticByteField(System.IntPtr,System.IntPtr)
extern "C"  uint8_t AndroidJNI_GetStaticByteField_m1987720379 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNI::GetStaticCharField(System.IntPtr,System.IntPtr)
extern "C"  Il2CppChar AndroidJNI_GetStaticCharField_m448194519 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNI::GetStaticShortField(System.IntPtr,System.IntPtr)
extern "C"  int16_t AndroidJNI_GetStaticShortField_m3116124933 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::GetStaticIntField(System.IntPtr,System.IntPtr)
extern "C"  int32_t AndroidJNI_GetStaticIntField_m642583742 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNI::GetStaticLongField(System.IntPtr,System.IntPtr)
extern "C"  int64_t AndroidJNI_GetStaticLongField_m724040346 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNI::GetStaticFloatField(System.IntPtr,System.IntPtr)
extern "C"  float AndroidJNI_GetStaticFloatField_m2480042103 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNI::GetStaticDoubleField(System.IntPtr,System.IntPtr)
extern "C"  double AndroidJNI_GetStaticDoubleField_m2149996173 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStaticStringField(System.IntPtr,System.IntPtr,System.String)
extern "C"  void AndroidJNI_SetStaticStringField_m1775955800 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, String_t* ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStaticObjectField(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void AndroidJNI_SetStaticObjectField_m316892120 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, IntPtr_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStaticBooleanField(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void AndroidJNI_SetStaticBooleanField_m1488294002 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, bool ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStaticByteField(System.IntPtr,System.IntPtr,System.Byte)
extern "C"  void AndroidJNI_SetStaticByteField_m1098274552 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, uint8_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStaticCharField(System.IntPtr,System.IntPtr,System.Char)
extern "C"  void AndroidJNI_SetStaticCharField_m3895248952 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, Il2CppChar ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStaticShortField(System.IntPtr,System.IntPtr,System.Int16)
extern "C"  void AndroidJNI_SetStaticShortField_m2380950066 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, int16_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStaticIntField(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void AndroidJNI_SetStaticIntField_m996691557 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, int32_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStaticLongField(System.IntPtr,System.IntPtr,System.Int64)
extern "C"  void AndroidJNI_SetStaticLongField_m2715096817 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, int64_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStaticFloatField(System.IntPtr,System.IntPtr,System.Single)
extern "C"  void AndroidJNI_SetStaticFloatField_m3066110084 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetStaticDoubleField(System.IntPtr,System.IntPtr,System.Double)
extern "C"  void AndroidJNI_SetStaticDoubleField_m3431982936 (Il2CppObject * __this /* static, unused */, IntPtr_t ___clazz0, IntPtr_t ___fieldID1, double ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToBooleanArray(System.Boolean[])
extern "C"  IntPtr_t AndroidJNI_ToBooleanArray_m442048547 (Il2CppObject * __this /* static, unused */, BooleanU5BU5D_t3456302923* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ToBooleanArray(System.Boolean[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ToBooleanArray_m2210221617 (Il2CppObject * __this /* static, unused */, BooleanU5BU5D_t3456302923* ___array0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToByteArray(System.Byte[])
extern "C"  IntPtr_t AndroidJNI_ToByteArray_m1620048019 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ToByteArray(System.Byte[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ToByteArray_m1800390721 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___array0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToCharArray(System.Char[])
extern "C"  IntPtr_t AndroidJNI_ToCharArray_m771488467 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ToCharArray(System.Char[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ToCharArray_m546766337 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___array0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToShortArray(System.Int16[])
extern "C"  IntPtr_t AndroidJNI_ToShortArray_m2820620963 (Il2CppObject * __this /* static, unused */, Int16U5BU5D_t801762735* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ToShortArray(System.Int16[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ToShortArray_m723560113 (Il2CppObject * __this /* static, unused */, Int16U5BU5D_t801762735* ___array0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToIntArray(System.Int32[])
extern "C"  IntPtr_t AndroidJNI_ToIntArray_m1134096790 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3230847821* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ToIntArray(System.Int32[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ToIntArray_m2630568158 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3230847821* ___array0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToLongArray(System.Int64[])
extern "C"  IntPtr_t AndroidJNI_ToLongArray_m3787458290 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t2174042770* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ToLongArray(System.Int64[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ToLongArray_m2701347926 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t2174042770* ___array0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToFloatArray(System.Single[])
extern "C"  IntPtr_t AndroidJNI_ToFloatArray_m2734312239 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t2316563989* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ToFloatArray(System.Single[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ToFloatArray_m1328294905 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t2316563989* ___array0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToDoubleArray(System.Double[])
extern "C"  IntPtr_t AndroidJNI_ToDoubleArray_m1106831155 (Il2CppObject * __this /* static, unused */, DoubleU5BU5D_t2145413704* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ToDoubleArray(System.Double[],System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ToDoubleArray_m2325625505 (Il2CppObject * __this /* static, unused */, DoubleU5BU5D_t2145413704* ___array0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToObjectArray(System.IntPtr[],System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_ToObjectArray_m3438267649 (Il2CppObject * __this /* static, unused */, IntPtrU5BU5D_t3228729122* ___array0, IntPtr_t ___arrayClass1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_ToObjectArray(System.IntPtr[],System.IntPtr,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_ToObjectArray_m178268307 (Il2CppObject * __this /* static, unused */, IntPtrU5BU5D_t3228729122* ___array0, IntPtr_t ___arrayClass1, IntPtr_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::ToObjectArray(System.IntPtr[])
extern "C"  IntPtr_t AndroidJNI_ToObjectArray_m3510162611 (Il2CppObject * __this /* static, unused */, IntPtrU5BU5D_t3228729122* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean[] UnityEngine.AndroidJNI::FromBooleanArray(System.IntPtr)
extern "C"  BooleanU5BU5D_t3456302923* AndroidJNI_FromBooleanArray_m3435863496 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.AndroidJNI::FromByteArray(System.IntPtr)
extern "C"  ByteU5BU5D_t4260760469* AndroidJNI_FromByteArray_m1645613058 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] UnityEngine.AndroidJNI::FromCharArray(System.IntPtr)
extern "C"  CharU5BU5D_t3324145743* AndroidJNI_FromCharArray_m325115202 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16[] UnityEngine.AndroidJNI::FromShortArray(System.IntPtr)
extern "C"  Int16U5BU5D_t801762735* AndroidJNI_FromShortArray_m2832106632 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.AndroidJNI::FromIntArray(System.IntPtr)
extern "C"  Int32U5BU5D_t3230847821* AndroidJNI_FromIntArray_m2891457973 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64[] UnityEngine.AndroidJNI::FromLongArray(System.IntPtr)
extern "C"  Int64U5BU5D_t2174042770* AndroidJNI_FromLongArray_m2965481131 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] UnityEngine.AndroidJNI::FromFloatArray(System.IntPtr)
extern "C"  SingleU5BU5D_t2316563989* AndroidJNI_FromFloatArray_m1756058774 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] UnityEngine.AndroidJNI::FromDoubleArray(System.IntPtr)
extern "C"  DoubleU5BU5D_t2145413704* AndroidJNI_FromDoubleArray_m2441308386 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr[] UnityEngine.AndroidJNI::FromObjectArray(System.IntPtr)
extern "C"  IntPtrU5BU5D_t3228729122* AndroidJNI_FromObjectArray_m2965002338 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::GetArrayLength(System.IntPtr)
extern "C"  int32_t AndroidJNI_GetArrayLength_m2368966142 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewBooleanArray(System.Int32)
extern "C"  IntPtr_t AndroidJNI_NewBooleanArray_m74093410 (Il2CppObject * __this /* static, unused */, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_NewBooleanArray(System.Int32,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_NewBooleanArray_m3593607014 (Il2CppObject * __this /* static, unused */, int32_t ___size0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewByteArray(System.Int32)
extern "C"  IntPtr_t AndroidJNI_NewByteArray_m2851186788 (Il2CppObject * __this /* static, unused */, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_NewByteArray(System.Int32,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_NewByteArray_m4069547088 (Il2CppObject * __this /* static, unused */, int32_t ___size0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewCharArray(System.Int32)
extern "C"  IntPtr_t AndroidJNI_NewCharArray_m3642722134 (Il2CppObject * __this /* static, unused */, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_NewCharArray(System.Int32,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_NewCharArray_m2651749150 (Il2CppObject * __this /* static, unused */, int32_t ___size0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewShortArray(System.Int32)
extern "C"  IntPtr_t AndroidJNI_NewShortArray_m2120619598 (Il2CppObject * __this /* static, unused */, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_NewShortArray(System.Int32,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_NewShortArray_m596346 (Il2CppObject * __this /* static, unused */, int32_t ___size0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewIntArray(System.Int32)
extern "C"  IntPtr_t AndroidJNI_NewIntArray_m4210467771 (Il2CppObject * __this /* static, unused */, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_NewIntArray(System.Int32,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_NewIntArray_m3542302445 (Il2CppObject * __this /* static, unused */, int32_t ___size0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewLongArray(System.Int32)
extern "C"  IntPtr_t AndroidJNI_NewLongArray_m3528869488 (Il2CppObject * __this /* static, unused */, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_NewLongArray(System.Int32,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_NewLongArray_m259155140 (Il2CppObject * __this /* static, unused */, int32_t ___size0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewFloatArray(System.Int32)
extern "C"  IntPtr_t AndroidJNI_NewFloatArray_m82832494 (Il2CppObject * __this /* static, unused */, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_NewFloatArray(System.Int32,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_NewFloatArray_m2551463770 (Il2CppObject * __this /* static, unused */, int32_t ___size0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewDoubleArray(System.Int32)
extern "C"  IntPtr_t AndroidJNI_NewDoubleArray_m3913898683 (Il2CppObject * __this /* static, unused */, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_NewDoubleArray(System.Int32,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_NewDoubleArray_m53500825 (Il2CppObject * __this /* static, unused */, int32_t ___size0, IntPtr_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t AndroidJNI_NewObjectArray_m2427147689 (Il2CppObject * __this /* static, unused */, int32_t ___size0, IntPtr_t ___clazz1, IntPtr_t ___obj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_NewObjectArray(System.Int32,System.IntPtr,System.IntPtr,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_NewObjectArray_m4275001835 (Il2CppObject * __this /* static, unused */, int32_t ___size0, IntPtr_t ___clazz1, IntPtr_t ___obj2, IntPtr_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AndroidJNI::GetBooleanArrayElement(System.IntPtr,System.Int32)
extern "C"  bool AndroidJNI_GetBooleanArrayElement_m4061354635 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.AndroidJNI::GetByteArrayElement(System.IntPtr,System.Int32)
extern "C"  uint8_t AndroidJNI_GetByteArrayElement_m3016369869 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.AndroidJNI::GetCharArrayElement(System.IntPtr,System.Int32)
extern "C"  Il2CppChar AndroidJNI_GetCharArrayElement_m3451651945 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.AndroidJNI::GetShortArrayElement(System.IntPtr,System.Int32)
extern "C"  int16_t AndroidJNI_GetShortArrayElement_m1355252851 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AndroidJNI::GetIntArrayElement(System.IntPtr,System.Int32)
extern "C"  int32_t AndroidJNI_GetIntArrayElement_m1026060140 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.AndroidJNI::GetLongArrayElement(System.IntPtr,System.Int32)
extern "C"  int64_t AndroidJNI_GetLongArrayElement_m3777283500 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AndroidJNI::GetFloatArrayElement(System.IntPtr,System.Int32)
extern "C"  float AndroidJNI_GetFloatArrayElement_m1185006053 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.AndroidJNI::GetDoubleArrayElement(System.IntPtr,System.Int32)
extern "C"  double AndroidJNI_GetDoubleArrayElement_m2076952927 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
extern "C"  IntPtr_t AndroidJNI_GetObjectArrayElement_m3151488507 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::INTERNAL_CALL_GetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr&)
extern "C"  void AndroidJNI_INTERNAL_CALL_GetObjectArrayElement_m183252653 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, IntPtr_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetBooleanArrayElement(System.IntPtr,System.Int32,System.Byte)
extern "C"  void AndroidJNI_SetBooleanArrayElement_m1470996030 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, uint8_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetByteArrayElement(System.IntPtr,System.Int32,System.SByte)
extern "C"  void AndroidJNI_SetByteArrayElement_m2895371941 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, int8_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetCharArrayElement(System.IntPtr,System.Int32,System.Char)
extern "C"  void AndroidJNI_SetCharArrayElement_m540351690 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, Il2CppChar ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetShortArrayElement(System.IntPtr,System.Int32,System.Int16)
extern "C"  void AndroidJNI_SetShortArrayElement_m1878029188 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, int16_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetIntArrayElement(System.IntPtr,System.Int32,System.Int32)
extern "C"  void AndroidJNI_SetIntArrayElement_m3428529783 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, int32_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetLongArrayElement(System.IntPtr,System.Int32,System.Int64)
extern "C"  void AndroidJNI_SetLongArrayElement_m1171413279 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, int64_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetFloatArrayElement(System.IntPtr,System.Int32,System.Single)
extern "C"  void AndroidJNI_SetFloatArrayElement_m3694549362 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, float ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetDoubleArrayElement(System.IntPtr,System.Int32,System.Double)
extern "C"  void AndroidJNI_SetDoubleArrayElement_m1858273962 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, double ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  void AndroidJNI_SetObjectArrayElement_m2717496490 (Il2CppObject * __this /* static, unused */, IntPtr_t ___array0, int32_t ___index1, IntPtr_t ___obj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;