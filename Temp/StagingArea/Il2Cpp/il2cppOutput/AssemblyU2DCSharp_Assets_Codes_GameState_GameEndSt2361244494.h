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
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "AssemblyU2DCSharp_IGameState1533448566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Codes.GameState.GameEndState
struct  GameEndState_t2361244494  : public IGameState_t1533448566
{
public:
	// GameManager Assets.Codes.GameState.GameEndState::_manager
	GameManager_t2369589051 * ____manager_0;
	// System.Int32 Assets.Codes.GameState.GameEndState::layerInt
	int32_t ___layerInt_1;

public:
	inline static int32_t get_offset_of__manager_0() { return static_cast<int32_t>(offsetof(GameEndState_t2361244494, ____manager_0)); }
	inline GameManager_t2369589051 * get__manager_0() const { return ____manager_0; }
	inline GameManager_t2369589051 ** get_address_of__manager_0() { return &____manager_0; }
	inline void set__manager_0(GameManager_t2369589051 * value)
	{
		____manager_0 = value;
		Il2CppCodeGenWriteBarrier(&____manager_0, value);
	}

	inline static int32_t get_offset_of_layerInt_1() { return static_cast<int32_t>(offsetof(GameEndState_t2361244494, ___layerInt_1)); }
	inline int32_t get_layerInt_1() const { return ___layerInt_1; }
	inline int32_t* get_address_of_layerInt_1() { return &___layerInt_1; }
	inline void set_layerInt_1(int32_t value)
	{
		___layerInt_1 = value;
	}
};

struct GameEndState_t2361244494_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Assets.Codes.GameState.GameEndState::<>f__switch$mapD
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24mapD_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapD_2() { return static_cast<int32_t>(offsetof(GameEndState_t2361244494_StaticFields, ___U3CU3Ef__switchU24mapD_2)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24mapD_2() const { return ___U3CU3Ef__switchU24mapD_2; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24mapD_2() { return &___U3CU3Ef__switchU24mapD_2; }
	inline void set_U3CU3Ef__switchU24mapD_2(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24mapD_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapD_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
