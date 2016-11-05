#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BackgroundMananger[]
struct BackgroundManangerU5BU5D_t1577982426;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollManager
struct  ScrollManager_t2092769280  : public MonoBehaviour_t667441552
{
public:
	// BackgroundMananger[] ScrollManager::_backgroundManangers
	BackgroundManangerU5BU5D_t1577982426* ____backgroundManangers_2;
	// UnityEngine.Transform ScrollManager::_landGround
	Transform_t1659122786 * ____landGround_3;
	// UnityEngine.Vector3 ScrollManager::_startpos
	Vector3_t4282066566  ____startpos_4;

public:
	inline static int32_t get_offset_of__backgroundManangers_2() { return static_cast<int32_t>(offsetof(ScrollManager_t2092769280, ____backgroundManangers_2)); }
	inline BackgroundManangerU5BU5D_t1577982426* get__backgroundManangers_2() const { return ____backgroundManangers_2; }
	inline BackgroundManangerU5BU5D_t1577982426** get_address_of__backgroundManangers_2() { return &____backgroundManangers_2; }
	inline void set__backgroundManangers_2(BackgroundManangerU5BU5D_t1577982426* value)
	{
		____backgroundManangers_2 = value;
		Il2CppCodeGenWriteBarrier(&____backgroundManangers_2, value);
	}

	inline static int32_t get_offset_of__landGround_3() { return static_cast<int32_t>(offsetof(ScrollManager_t2092769280, ____landGround_3)); }
	inline Transform_t1659122786 * get__landGround_3() const { return ____landGround_3; }
	inline Transform_t1659122786 ** get_address_of__landGround_3() { return &____landGround_3; }
	inline void set__landGround_3(Transform_t1659122786 * value)
	{
		____landGround_3 = value;
		Il2CppCodeGenWriteBarrier(&____landGround_3, value);
	}

	inline static int32_t get_offset_of__startpos_4() { return static_cast<int32_t>(offsetof(ScrollManager_t2092769280, ____startpos_4)); }
	inline Vector3_t4282066566  get__startpos_4() const { return ____startpos_4; }
	inline Vector3_t4282066566 * get_address_of__startpos_4() { return &____startpos_4; }
	inline void set__startpos_4(Vector3_t4282066566  value)
	{
		____startpos_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
