#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreManager
struct  ScoreManager_t2519962843  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject ScoreManager::ScorePrefab
	GameObject_t3674682005 * ___ScorePrefab_2;
	// System.Int32 ScoreManager::score
	int32_t ___score_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ScoreManager::sList
	List_1_t747900261 * ___sList_4;
	// UnityEngine.Vector3 ScoreManager::startpos
	Vector3_t4282066566  ___startpos_5;

public:
	inline static int32_t get_offset_of_ScorePrefab_2() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___ScorePrefab_2)); }
	inline GameObject_t3674682005 * get_ScorePrefab_2() const { return ___ScorePrefab_2; }
	inline GameObject_t3674682005 ** get_address_of_ScorePrefab_2() { return &___ScorePrefab_2; }
	inline void set_ScorePrefab_2(GameObject_t3674682005 * value)
	{
		___ScorePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___ScorePrefab_2, value);
	}

	inline static int32_t get_offset_of_score_3() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___score_3)); }
	inline int32_t get_score_3() const { return ___score_3; }
	inline int32_t* get_address_of_score_3() { return &___score_3; }
	inline void set_score_3(int32_t value)
	{
		___score_3 = value;
	}

	inline static int32_t get_offset_of_sList_4() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___sList_4)); }
	inline List_1_t747900261 * get_sList_4() const { return ___sList_4; }
	inline List_1_t747900261 ** get_address_of_sList_4() { return &___sList_4; }
	inline void set_sList_4(List_1_t747900261 * value)
	{
		___sList_4 = value;
		Il2CppCodeGenWriteBarrier(&___sList_4, value);
	}

	inline static int32_t get_offset_of_startpos_5() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___startpos_5)); }
	inline Vector3_t4282066566  get_startpos_5() const { return ___startpos_5; }
	inline Vector3_t4282066566 * get_address_of_startpos_5() { return &___startpos_5; }
	inline void set_startpos_5(Vector3_t4282066566  value)
	{
		___startpos_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
