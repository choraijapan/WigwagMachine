#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IGameState
struct IGameState_t1533448566;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// ScoreManager
struct ScoreManager_t2519962843;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2369589051  : public MonoBehaviour_t667441552
{
public:
	// IGameState GameManager::_CurrentState
	IGameState_t1533448566 * ____CurrentState_2;
	// UnityEngine.Transform GameManager::_btnGroup
	Transform_t1659122786 * ____btnGroup_3;
	// UnityEngine.Transform GameManager::_board
	Transform_t1659122786 * ____board_4;
	// UnityEngine.Transform GameManager::_Obstacles_Group
	Transform_t1659122786 * ____Obstacles_Group_5;
	// UnityEngine.Transform GameManager::_gesture
	Transform_t1659122786 * ____gesture_6;
	// UnityEngine.GameObject GameManager::_Obstacles_GroupPrefab
	GameObject_t3674682005 * ____Obstacles_GroupPrefab_7;
	// UnityEngine.GameObject GameManager::_playerInstance
	GameObject_t3674682005 * ____playerInstance_8;
	// UnityEngine.GameObject GameManager::_playerPrefab
	GameObject_t3674682005 * ____playerPrefab_9;
	// UnityEngine.GameObject GameManager::_result
	GameObject_t3674682005 * ____result_10;
	// System.Boolean GameManager::didInit
	bool ___didInit_11;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameManager::_ObstaclesList
	List_1_t747900261 * ____ObstaclesList_12;
	// ScoreManager GameManager::_ScoreManager
	ScoreManager_t2519962843 * ____ScoreManager_13;

public:
	inline static int32_t get_offset_of__CurrentState_2() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ____CurrentState_2)); }
	inline IGameState_t1533448566 * get__CurrentState_2() const { return ____CurrentState_2; }
	inline IGameState_t1533448566 ** get_address_of__CurrentState_2() { return &____CurrentState_2; }
	inline void set__CurrentState_2(IGameState_t1533448566 * value)
	{
		____CurrentState_2 = value;
		Il2CppCodeGenWriteBarrier(&____CurrentState_2, value);
	}

	inline static int32_t get_offset_of__btnGroup_3() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ____btnGroup_3)); }
	inline Transform_t1659122786 * get__btnGroup_3() const { return ____btnGroup_3; }
	inline Transform_t1659122786 ** get_address_of__btnGroup_3() { return &____btnGroup_3; }
	inline void set__btnGroup_3(Transform_t1659122786 * value)
	{
		____btnGroup_3 = value;
		Il2CppCodeGenWriteBarrier(&____btnGroup_3, value);
	}

	inline static int32_t get_offset_of__board_4() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ____board_4)); }
	inline Transform_t1659122786 * get__board_4() const { return ____board_4; }
	inline Transform_t1659122786 ** get_address_of__board_4() { return &____board_4; }
	inline void set__board_4(Transform_t1659122786 * value)
	{
		____board_4 = value;
		Il2CppCodeGenWriteBarrier(&____board_4, value);
	}

	inline static int32_t get_offset_of__Obstacles_Group_5() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ____Obstacles_Group_5)); }
	inline Transform_t1659122786 * get__Obstacles_Group_5() const { return ____Obstacles_Group_5; }
	inline Transform_t1659122786 ** get_address_of__Obstacles_Group_5() { return &____Obstacles_Group_5; }
	inline void set__Obstacles_Group_5(Transform_t1659122786 * value)
	{
		____Obstacles_Group_5 = value;
		Il2CppCodeGenWriteBarrier(&____Obstacles_Group_5, value);
	}

	inline static int32_t get_offset_of__gesture_6() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ____gesture_6)); }
	inline Transform_t1659122786 * get__gesture_6() const { return ____gesture_6; }
	inline Transform_t1659122786 ** get_address_of__gesture_6() { return &____gesture_6; }
	inline void set__gesture_6(Transform_t1659122786 * value)
	{
		____gesture_6 = value;
		Il2CppCodeGenWriteBarrier(&____gesture_6, value);
	}

	inline static int32_t get_offset_of__Obstacles_GroupPrefab_7() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ____Obstacles_GroupPrefab_7)); }
	inline GameObject_t3674682005 * get__Obstacles_GroupPrefab_7() const { return ____Obstacles_GroupPrefab_7; }
	inline GameObject_t3674682005 ** get_address_of__Obstacles_GroupPrefab_7() { return &____Obstacles_GroupPrefab_7; }
	inline void set__Obstacles_GroupPrefab_7(GameObject_t3674682005 * value)
	{
		____Obstacles_GroupPrefab_7 = value;
		Il2CppCodeGenWriteBarrier(&____Obstacles_GroupPrefab_7, value);
	}

	inline static int32_t get_offset_of__playerInstance_8() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ____playerInstance_8)); }
	inline GameObject_t3674682005 * get__playerInstance_8() const { return ____playerInstance_8; }
	inline GameObject_t3674682005 ** get_address_of__playerInstance_8() { return &____playerInstance_8; }
	inline void set__playerInstance_8(GameObject_t3674682005 * value)
	{
		____playerInstance_8 = value;
		Il2CppCodeGenWriteBarrier(&____playerInstance_8, value);
	}

	inline static int32_t get_offset_of__playerPrefab_9() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ____playerPrefab_9)); }
	inline GameObject_t3674682005 * get__playerPrefab_9() const { return ____playerPrefab_9; }
	inline GameObject_t3674682005 ** get_address_of__playerPrefab_9() { return &____playerPrefab_9; }
	inline void set__playerPrefab_9(GameObject_t3674682005 * value)
	{
		____playerPrefab_9 = value;
		Il2CppCodeGenWriteBarrier(&____playerPrefab_9, value);
	}

	inline static int32_t get_offset_of__result_10() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ____result_10)); }
	inline GameObject_t3674682005 * get__result_10() const { return ____result_10; }
	inline GameObject_t3674682005 ** get_address_of__result_10() { return &____result_10; }
	inline void set__result_10(GameObject_t3674682005 * value)
	{
		____result_10 = value;
		Il2CppCodeGenWriteBarrier(&____result_10, value);
	}

	inline static int32_t get_offset_of_didInit_11() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___didInit_11)); }
	inline bool get_didInit_11() const { return ___didInit_11; }
	inline bool* get_address_of_didInit_11() { return &___didInit_11; }
	inline void set_didInit_11(bool value)
	{
		___didInit_11 = value;
	}

	inline static int32_t get_offset_of__ObstaclesList_12() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ____ObstaclesList_12)); }
	inline List_1_t747900261 * get__ObstaclesList_12() const { return ____ObstaclesList_12; }
	inline List_1_t747900261 ** get_address_of__ObstaclesList_12() { return &____ObstaclesList_12; }
	inline void set__ObstaclesList_12(List_1_t747900261 * value)
	{
		____ObstaclesList_12 = value;
		Il2CppCodeGenWriteBarrier(&____ObstaclesList_12, value);
	}

	inline static int32_t get_offset_of__ScoreManager_13() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ____ScoreManager_13)); }
	inline ScoreManager_t2519962843 * get__ScoreManager_13() const { return ____ScoreManager_13; }
	inline ScoreManager_t2519962843 ** get_address_of__ScoreManager_13() { return &____ScoreManager_13; }
	inline void set__ScoreManager_13(ScoreManager_t2519962843 * value)
	{
		____ScoreManager_13 = value;
		Il2CppCodeGenWriteBarrier(&____ScoreManager_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
