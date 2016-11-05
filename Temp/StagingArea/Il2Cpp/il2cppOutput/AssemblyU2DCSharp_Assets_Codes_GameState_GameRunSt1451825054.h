#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameManager
struct GameManager_t2369589051;
// ScrollManager
struct ScrollManager_t2092769280;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// PlayerManager
struct PlayerManager_t4287196524;
// Assets.Codes.GameState.GameRunState
struct GameRunState_t1451825054;

#include "AssemblyU2DCSharp_IGameState1533448566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Codes.GameState.GameRunState
struct  GameRunState_t1451825054  : public IGameState_t1533448566
{
public:
	// GameManager Assets.Codes.GameState.GameRunState::_manager
	GameManager_t2369589051 * ____manager_0;
	// System.Int32 Assets.Codes.GameState.GameRunState::_stateInt
	int32_t ____stateInt_1;
	// System.Int32 Assets.Codes.GameState.GameRunState::layerInt
	int32_t ___layerInt_2;
	// ScrollManager Assets.Codes.GameState.GameRunState::_scrollManager
	ScrollManager_t2092769280 * ____scrollManager_3;
	// UnityEngine.GameObject Assets.Codes.GameState.GameRunState::player
	GameObject_t3674682005 * ___player_4;
	// PlayerManager Assets.Codes.GameState.GameRunState::_playerManager
	PlayerManager_t4287196524 * ____playerManager_5;
	// System.Single Assets.Codes.GameState.GameRunState::backDistance
	float ___backDistance_6;

public:
	inline static int32_t get_offset_of__manager_0() { return static_cast<int32_t>(offsetof(GameRunState_t1451825054, ____manager_0)); }
	inline GameManager_t2369589051 * get__manager_0() const { return ____manager_0; }
	inline GameManager_t2369589051 ** get_address_of__manager_0() { return &____manager_0; }
	inline void set__manager_0(GameManager_t2369589051 * value)
	{
		____manager_0 = value;
		Il2CppCodeGenWriteBarrier(&____manager_0, value);
	}

	inline static int32_t get_offset_of__stateInt_1() { return static_cast<int32_t>(offsetof(GameRunState_t1451825054, ____stateInt_1)); }
	inline int32_t get__stateInt_1() const { return ____stateInt_1; }
	inline int32_t* get_address_of__stateInt_1() { return &____stateInt_1; }
	inline void set__stateInt_1(int32_t value)
	{
		____stateInt_1 = value;
	}

	inline static int32_t get_offset_of_layerInt_2() { return static_cast<int32_t>(offsetof(GameRunState_t1451825054, ___layerInt_2)); }
	inline int32_t get_layerInt_2() const { return ___layerInt_2; }
	inline int32_t* get_address_of_layerInt_2() { return &___layerInt_2; }
	inline void set_layerInt_2(int32_t value)
	{
		___layerInt_2 = value;
	}

	inline static int32_t get_offset_of__scrollManager_3() { return static_cast<int32_t>(offsetof(GameRunState_t1451825054, ____scrollManager_3)); }
	inline ScrollManager_t2092769280 * get__scrollManager_3() const { return ____scrollManager_3; }
	inline ScrollManager_t2092769280 ** get_address_of__scrollManager_3() { return &____scrollManager_3; }
	inline void set__scrollManager_3(ScrollManager_t2092769280 * value)
	{
		____scrollManager_3 = value;
		Il2CppCodeGenWriteBarrier(&____scrollManager_3, value);
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(GameRunState_t1451825054, ___player_4)); }
	inline GameObject_t3674682005 * get_player_4() const { return ___player_4; }
	inline GameObject_t3674682005 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t3674682005 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}

	inline static int32_t get_offset_of__playerManager_5() { return static_cast<int32_t>(offsetof(GameRunState_t1451825054, ____playerManager_5)); }
	inline PlayerManager_t4287196524 * get__playerManager_5() const { return ____playerManager_5; }
	inline PlayerManager_t4287196524 ** get_address_of__playerManager_5() { return &____playerManager_5; }
	inline void set__playerManager_5(PlayerManager_t4287196524 * value)
	{
		____playerManager_5 = value;
		Il2CppCodeGenWriteBarrier(&____playerManager_5, value);
	}

	inline static int32_t get_offset_of_backDistance_6() { return static_cast<int32_t>(offsetof(GameRunState_t1451825054, ___backDistance_6)); }
	inline float get_backDistance_6() const { return ___backDistance_6; }
	inline float* get_address_of_backDistance_6() { return &___backDistance_6; }
	inline void set_backDistance_6(float value)
	{
		___backDistance_6 = value;
	}
};

struct GameRunState_t1451825054_StaticFields
{
public:
	// Assets.Codes.GameState.GameRunState Assets.Codes.GameState.GameRunState::_instance
	GameRunState_t1451825054 * ____instance_7;

public:
	inline static int32_t get_offset_of__instance_7() { return static_cast<int32_t>(offsetof(GameRunState_t1451825054_StaticFields, ____instance_7)); }
	inline GameRunState_t1451825054 * get__instance_7() const { return ____instance_7; }
	inline GameRunState_t1451825054 ** get_address_of__instance_7() { return &____instance_7; }
	inline void set__instance_7(GameRunState_t1451825054 * value)
	{
		____instance_7 = value;
		Il2CppCodeGenWriteBarrier(&____instance_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
