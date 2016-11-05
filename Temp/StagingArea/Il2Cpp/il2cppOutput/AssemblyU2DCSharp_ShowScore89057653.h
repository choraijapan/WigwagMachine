#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2761310900;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShowScore
struct  ShowScore_t89057653  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Sprite[] ShowScore::numSprites
	SpriteU5BU5D_t2761310900* ___numSprites_2;
	// System.String ShowScore::name
	String_t* ___name_3;

public:
	inline static int32_t get_offset_of_numSprites_2() { return static_cast<int32_t>(offsetof(ShowScore_t89057653, ___numSprites_2)); }
	inline SpriteU5BU5D_t2761310900* get_numSprites_2() const { return ___numSprites_2; }
	inline SpriteU5BU5D_t2761310900** get_address_of_numSprites_2() { return &___numSprites_2; }
	inline void set_numSprites_2(SpriteU5BU5D_t2761310900* value)
	{
		___numSprites_2 = value;
		Il2CppCodeGenWriteBarrier(&___numSprites_2, value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(ShowScore_t89057653, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier(&___name_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
