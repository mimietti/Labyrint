#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySocial/EntryPointState
struct  EntryPointState_t3886395091 
{
public:
	// System.String UnitySocial/EntryPointState::imageURL
	String_t* ___imageURL_0;
	// System.Int32 UnitySocial/EntryPointState::notificationCount
	int32_t ___notificationCount_1;

public:
	inline static int32_t get_offset_of_imageURL_0() { return static_cast<int32_t>(offsetof(EntryPointState_t3886395091, ___imageURL_0)); }
	inline String_t* get_imageURL_0() const { return ___imageURL_0; }
	inline String_t** get_address_of_imageURL_0() { return &___imageURL_0; }
	inline void set_imageURL_0(String_t* value)
	{
		___imageURL_0 = value;
		Il2CppCodeGenWriteBarrier(&___imageURL_0, value);
	}

	inline static int32_t get_offset_of_notificationCount_1() { return static_cast<int32_t>(offsetof(EntryPointState_t3886395091, ___notificationCount_1)); }
	inline int32_t get_notificationCount_1() const { return ___notificationCount_1; }
	inline int32_t* get_address_of_notificationCount_1() { return &___notificationCount_1; }
	inline void set_notificationCount_1(int32_t value)
	{
		___notificationCount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnitySocial/EntryPointState
struct EntryPointState_t3886395091_marshaled_pinvoke
{
	char* ___imageURL_0;
	int32_t ___notificationCount_1;
};
// Native definition for marshalling of: UnitySocial/EntryPointState
struct EntryPointState_t3886395091_marshaled_com
{
	uint16_t* ___imageURL_0;
	int32_t ___notificationCount_1;
};
