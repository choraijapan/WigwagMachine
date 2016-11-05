#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t2776330603;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerManager
struct  PlayerManager_t4287196524  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Animator PlayerManager::_bodyAnimator
	Animator_t2776330603 * ____bodyAnimator_2;
	// UnityEngine.Animator PlayerManager::_wheelAnimator
	Animator_t2776330603 * ____wheelAnimator_3;
	// System.Int32 PlayerManager::_faceRight
	int32_t ____faceRight_4;

public:
	inline static int32_t get_offset_of__bodyAnimator_2() { return static_cast<int32_t>(offsetof(PlayerManager_t4287196524, ____bodyAnimator_2)); }
	inline Animator_t2776330603 * get__bodyAnimator_2() const { return ____bodyAnimator_2; }
	inline Animator_t2776330603 ** get_address_of__bodyAnimator_2() { return &____bodyAnimator_2; }
	inline void set__bodyAnimator_2(Animator_t2776330603 * value)
	{
		____bodyAnimator_2 = value;
		Il2CppCodeGenWriteBarrier(&____bodyAnimator_2, value);
	}

	inline static int32_t get_offset_of__wheelAnimator_3() { return static_cast<int32_t>(offsetof(PlayerManager_t4287196524, ____wheelAnimator_3)); }
	inline Animator_t2776330603 * get__wheelAnimator_3() const { return ____wheelAnimator_3; }
	inline Animator_t2776330603 ** get_address_of__wheelAnimator_3() { return &____wheelAnimator_3; }
	inline void set__wheelAnimator_3(Animator_t2776330603 * value)
	{
		____wheelAnimator_3 = value;
		Il2CppCodeGenWriteBarrier(&____wheelAnimator_3, value);
	}

	inline static int32_t get_offset_of__faceRight_4() { return static_cast<int32_t>(offsetof(PlayerManager_t4287196524, ____faceRight_4)); }
	inline int32_t get__faceRight_4() const { return ____faceRight_4; }
	inline int32_t* get_address_of__faceRight_4() { return &____faceRight_4; }
	inline void set__faceRight_4(int32_t value)
	{
		____faceRight_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
