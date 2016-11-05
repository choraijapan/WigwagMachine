#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t2162326540;
// SoundManange
struct SoundManange_t2444348982;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundManange
struct  SoundManange_t2444348982  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> SoundManange::_SoundClips
	List_1_t2162326540 * ____SoundClips_2;

public:
	inline static int32_t get_offset_of__SoundClips_2() { return static_cast<int32_t>(offsetof(SoundManange_t2444348982, ____SoundClips_2)); }
	inline List_1_t2162326540 * get__SoundClips_2() const { return ____SoundClips_2; }
	inline List_1_t2162326540 ** get_address_of__SoundClips_2() { return &____SoundClips_2; }
	inline void set__SoundClips_2(List_1_t2162326540 * value)
	{
		____SoundClips_2 = value;
		Il2CppCodeGenWriteBarrier(&____SoundClips_2, value);
	}
};

struct SoundManange_t2444348982_StaticFields
{
public:
	// SoundManange SoundManange::instance
	SoundManange_t2444348982 * ___instance_3;

public:
	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(SoundManange_t2444348982_StaticFields, ___instance_3)); }
	inline SoundManange_t2444348982 * get_instance_3() const { return ___instance_3; }
	inline SoundManange_t2444348982 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(SoundManange_t2444348982 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
