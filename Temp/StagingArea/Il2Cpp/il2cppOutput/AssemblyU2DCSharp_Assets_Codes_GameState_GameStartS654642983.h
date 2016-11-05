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
// IGameState
struct IGameState_t1533448566;
// UnityEngine.Transform
struct Transform_t1659122786;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "AssemblyU2DCSharp_IGameState1533448566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Codes.GameState.GameStartState
struct  GameStartState_t654642983  : public IGameState_t1533448566
{
public:
	// GameManager Assets.Codes.GameState.GameStartState::_manager
	GameManager_t2369589051 * ____manager_0;
	// IGameState Assets.Codes.GameState.GameStartState::_CurrentState
	IGameState_t1533448566 * ____CurrentState_1;
	// UnityEngine.Transform Assets.Codes.GameState.GameStartState::_btnGroup
	Transform_t1659122786 * ____btnGroup_2;
	// UnityEngine.Transform Assets.Codes.GameState.GameStartState::_board
	Transform_t1659122786 * ____board_3;
	// UnityEngine.Transform Assets.Codes.GameState.GameStartState::_Obstacles_Group
	Transform_t1659122786 * ____Obstacles_Group_4;
	// System.Int32 Assets.Codes.GameState.GameStartState::layerInt
	int32_t ___layerInt_5;

public:
	inline static int32_t get_offset_of__manager_0() { return static_cast<int32_t>(offsetof(GameStartState_t654642983, ____manager_0)); }
	inline GameManager_t2369589051 * get__manager_0() const { return ____manager_0; }
	inline GameManager_t2369589051 ** get_address_of__manager_0() { return &____manager_0; }
	inline void set__manager_0(GameManager_t2369589051 * value)
	{
		____manager_0 = value;
		Il2CppCodeGenWriteBarrier(&____manager_0, value);
	}

	inline static int32_t get_offset_of__CurrentState_1() { return static_cast<int32_t>(offsetof(GameStartState_t654642983, ____CurrentState_1)); }
	inline IGameState_t1533448566 * get__CurrentState_1() const { return ____CurrentState_1; }
	inline IGameState_t1533448566 ** get_address_of__CurrentState_1() { return &____CurrentState_1; }
	inline void set__CurrentState_1(IGameState_t1533448566 * value)
	{
		____CurrentState_1 = value;
		Il2CppCodeGenWriteBarrier(&____CurrentState_1, value);
	}

	inline static int32_t get_offset_of__btnGroup_2() { return static_cast<int32_t>(offsetof(GameStartState_t654642983, ____btnGroup_2)); }
	inline Transform_t1659122786 * get__btnGroup_2() const { return ____btnGroup_2; }
	inline Transform_t1659122786 ** get_address_of__btnGroup_2() { return &____btnGroup_2; }
	inline void set__btnGroup_2(Transform_t1659122786 * value)
	{
		____btnGroup_2 = value;
		Il2CppCodeGenWriteBarrier(&____btnGroup_2, value);
	}

	inline static int32_t get_offset_of__board_3() { return static_cast<int32_t>(offsetof(GameStartState_t654642983, ____board_3)); }
	inline Transform_t1659122786 * get__board_3() const { return ____board_3; }
	inline Transform_t1659122786 ** get_address_of__board_3() { return &____board_3; }
	inline void set__board_3(Transform_t1659122786 * value)
	{
		____board_3 = value;
		Il2CppCodeGenWriteBarrier(&____board_3, value);
	}

	inline static int32_t get_offset_of__Obstacles_Group_4() { return static_cast<int32_t>(offsetof(GameStartState_t654642983, ____Obstacles_Group_4)); }
	inline Transform_t1659122786 * get__Obstacles_Group_4() const { return ____Obstacles_Group_4; }
	inline Transform_t1659122786 ** get_address_of__Obstacles_Group_4() { return &____Obstacles_Group_4; }
	inline void set__Obstacles_Group_4(Transform_t1659122786 * value)
	{
		____Obstacles_Group_4 = value;
		Il2CppCodeGenWriteBarrier(&____Obstacles_Group_4, value);
	}

	inline static int32_t get_offset_of_layerInt_5() { return static_cast<int32_t>(offsetof(GameStartState_t654642983, ___layerInt_5)); }
	inline int32_t get_layerInt_5() const { return ___layerInt_5; }
	inline int32_t* get_address_of_layerInt_5() { return &___layerInt_5; }
	inline void set_layerInt_5(int32_t value)
	{
		___layerInt_5 = value;
	}
};

struct GameStartState_t654642983_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Assets.Codes.GameState.GameStartState::<>f__switch$mapE
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24mapE_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapE_6() { return static_cast<int32_t>(offsetof(GameStartState_t654642983_StaticFields, ___U3CU3Ef__switchU24mapE_6)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24mapE_6() const { return ___U3CU3Ef__switchU24mapE_6; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24mapE_6() { return &___U3CU3Ef__switchU24mapE_6; }
	inline void set_U3CU3Ef__switchU24mapE_6(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24mapE_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapE_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
