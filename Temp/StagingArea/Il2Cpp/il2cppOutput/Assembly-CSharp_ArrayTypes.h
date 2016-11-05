#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// ScoreManager
struct ScoreManager_t2519962843;
// BackgroundMananger
struct BackgroundMananger_t1857651291;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_ScoreManager2519962843.h"
#include "AssemblyU2DCSharp_BackgroundMananger1857651291.h"

#pragma once
// ScoreManager[]
struct ScoreManagerU5BU5D_t1949363546  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ScoreManager_t2519962843 * m_Items[1];

public:
	inline ScoreManager_t2519962843 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ScoreManager_t2519962843 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ScoreManager_t2519962843 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// BackgroundMananger[]
struct BackgroundManangerU5BU5D_t1577982426  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) BackgroundMananger_t1857651291 * m_Items[1];

public:
	inline BackgroundMananger_t1857651291 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline BackgroundMananger_t1857651291 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, BackgroundMananger_t1857651291 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
