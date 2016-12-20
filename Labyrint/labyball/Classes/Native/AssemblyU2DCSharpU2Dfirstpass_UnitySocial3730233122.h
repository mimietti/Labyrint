#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnitySocial
struct UnitySocial_t3730233122;
// System.Action
struct Action_t437523947;
// System.Action`1<UnitySocial/EntryPointState>
struct Action_1_t4034847796;
// System.Action`1<System.Boolean>
struct Action_1_t359458046;
// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Action_1_t2623257029;
// System.Action`2<System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Action_2_t1471698190;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnitySocial_Notificatio3384800.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySocial
struct  UnitySocial_t3730233122  : public MonoBehaviour_t3012272455
{
public:

public:
};

struct UnitySocial_t3730233122_StaticFields
{
public:
	// UnitySocial UnitySocial::s_UnitySocialInstance
	UnitySocial_t3730233122 * ___s_UnitySocialInstance_2;
	// System.Boolean UnitySocial::s_AppIsClosing
	bool ___s_AppIsClosing_3;
	// System.Boolean UnitySocial::s_UnityPauseEngineAutomatically
	bool ___s_UnityPauseEngineAutomatically_4;
	// System.Boolean UnitySocial::s_EntryPointUpdatesEnabled
	bool ___s_EntryPointUpdatesEnabled_5;
	// System.Int32 UnitySocial::s_EntryPointImageSize
	int32_t ___s_EntryPointImageSize_6;
	// UnitySocial/NotificationLocation UnitySocial::s_NotificationLocation
	int32_t ___s_NotificationLocation_7;
	// System.Int32 UnitySocial::s_NotificationOffset
	int32_t ___s_NotificationOffset_8;
	// System.Boolean UnitySocial::s_UpdatingEntryPointSettings
	bool ___s_UpdatingEntryPointSettings_9;
	// System.Boolean UnitySocial::s_UpdatingNotificationSettings
	bool ___s_UpdatingNotificationSettings_10;
	// System.Action UnitySocial::GameShouldPause
	Action_t437523947 * ___GameShouldPause_11;
	// System.Action UnitySocial::GameShouldResume
	Action_t437523947 * ___GameShouldResume_12;
	// System.Action`1<UnitySocial/EntryPointState> UnitySocial::EntryPointStateUpdated
	Action_1_t4034847796 * ___EntryPointStateUpdated_13;
	// System.Action`1<System.Boolean> UnitySocial::Initialized
	Action_1_t359458046 * ___Initialized_14;
	// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> UnitySocial::RewardClaimed
	Action_1_t2623257029 * ___RewardClaimed_15;
	// System.Action`2<System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Collections.Generic.Dictionary`2<System.String,System.Object>> UnitySocial::ChallengeStarted
	Action_2_t1471698190 * ___ChallengeStarted_16;

public:
	inline static int32_t get_offset_of_s_UnitySocialInstance_2() { return static_cast<int32_t>(offsetof(UnitySocial_t3730233122_StaticFields, ___s_UnitySocialInstance_2)); }
	inline UnitySocial_t3730233122 * get_s_UnitySocialInstance_2() const { return ___s_UnitySocialInstance_2; }
	inline UnitySocial_t3730233122 ** get_address_of_s_UnitySocialInstance_2() { return &___s_UnitySocialInstance_2; }
	inline void set_s_UnitySocialInstance_2(UnitySocial_t3730233122 * value)
	{
		___s_UnitySocialInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_UnitySocialInstance_2, value);
	}

	inline static int32_t get_offset_of_s_AppIsClosing_3() { return static_cast<int32_t>(offsetof(UnitySocial_t3730233122_StaticFields, ___s_AppIsClosing_3)); }
	inline bool get_s_AppIsClosing_3() const { return ___s_AppIsClosing_3; }
	inline bool* get_address_of_s_AppIsClosing_3() { return &___s_AppIsClosing_3; }
	inline void set_s_AppIsClosing_3(bool value)
	{
		___s_AppIsClosing_3 = value;
	}

	inline static int32_t get_offset_of_s_UnityPauseEngineAutomatically_4() { return static_cast<int32_t>(offsetof(UnitySocial_t3730233122_StaticFields, ___s_UnityPauseEngineAutomatically_4)); }
	inline bool get_s_UnityPauseEngineAutomatically_4() const { return ___s_UnityPauseEngineAutomatically_4; }
	inline bool* get_address_of_s_UnityPauseEngineAutomatically_4() { return &___s_UnityPauseEngineAutomatically_4; }
	inline void set_s_UnityPauseEngineAutomatically_4(bool value)
	{
		___s_UnityPauseEngineAutomatically_4 = value;
	}

	inline static int32_t get_offset_of_s_EntryPointUpdatesEnabled_5() { return static_cast<int32_t>(offsetof(UnitySocial_t3730233122_StaticFields, ___s_EntryPointUpdatesEnabled_5)); }
	inline bool get_s_EntryPointUpdatesEnabled_5() const { return ___s_EntryPointUpdatesEnabled_5; }
	inline bool* get_address_of_s_EntryPointUpdatesEnabled_5() { return &___s_EntryPointUpdatesEnabled_5; }
	inline void set_s_EntryPointUpdatesEnabled_5(bool value)
	{
		___s_EntryPointUpdatesEnabled_5 = value;
	}

	inline static int32_t get_offset_of_s_EntryPointImageSize_6() { return static_cast<int32_t>(offsetof(UnitySocial_t3730233122_StaticFields, ___s_EntryPointImageSize_6)); }
	inline int32_t get_s_EntryPointImageSize_6() const { return ___s_EntryPointImageSize_6; }
	inline int32_t* get_address_of_s_EntryPointImageSize_6() { return &___s_EntryPointImageSize_6; }
	inline void set_s_EntryPointImageSize_6(int32_t value)
	{
		___s_EntryPointImageSize_6 = value;
	}

	inline static int32_t get_offset_of_s_NotificationLocation_7() { return static_cast<int32_t>(offsetof(UnitySocial_t3730233122_StaticFields, ___s_NotificationLocation_7)); }
	inline int32_t get_s_NotificationLocation_7() const { return ___s_NotificationLocation_7; }
	inline int32_t* get_address_of_s_NotificationLocation_7() { return &___s_NotificationLocation_7; }
	inline void set_s_NotificationLocation_7(int32_t value)
	{
		___s_NotificationLocation_7 = value;
	}

	inline static int32_t get_offset_of_s_NotificationOffset_8() { return static_cast<int32_t>(offsetof(UnitySocial_t3730233122_StaticFields, ___s_NotificationOffset_8)); }
	inline int32_t get_s_NotificationOffset_8() const { return ___s_NotificationOffset_8; }
	inline int32_t* get_address_of_s_NotificationOffset_8() { return &___s_NotificationOffset_8; }
	inline void set_s_NotificationOffset_8(int32_t value)
	{
		___s_NotificationOffset_8 = value;
	}

	inline static int32_t get_offset_of_s_UpdatingEntryPointSettings_9() { return static_cast<int32_t>(offsetof(UnitySocial_t3730233122_StaticFields, ___s_UpdatingEntryPointSettings_9)); }
	inline bool get_s_UpdatingEntryPointSettings_9() const { return ___s_UpdatingEntryPointSettings_9; }
	inline bool* get_address_of_s_UpdatingEntryPointSettings_9() { return &___s_UpdatingEntryPointSettings_9; }
	inline void set_s_UpdatingEntryPointSettings_9(bool value)
	{
		___s_UpdatingEntryPointSettings_9 = value;
	}

	inline static int32_t get_offset_of_s_UpdatingNotificationSettings_10() { return static_cast<int32_t>(offsetof(UnitySocial_t3730233122_StaticFields, ___s_UpdatingNotificationSettings_10)); }
	inline bool get_s_UpdatingNotificationSettings_10() const { return ___s_UpdatingNotificationSettings_10; }
	inline bool* get_address_of_s_UpdatingNotificationSettings_10() { return &___s_UpdatingNotificationSettings_10; }
	inline void set_s_UpdatingNotificationSettings_10(bool value)
	{
		___s_UpdatingNotificationSettings_10 = value;
	}

	inline static int32_t get_offset_of_GameShouldPause_11() { return static_cast<int32_t>(offsetof(UnitySocial_t3730233122_StaticFields, ___GameShouldPause_11)); }
	inline Action_t437523947 * get_GameShouldPause_11() const { return ___GameShouldPause_11; }
	inline Action_t437523947 ** get_address_of_GameShouldPause_11() { return &___GameShouldPause_11; }
	inline void set_GameShouldPause_11(Action_t437523947 * value)
	{
		___GameShouldPause_11 = value;
		Il2CppCodeGenWriteBarrier(&___GameShouldPause_11, value);
	}

	inline static int32_t get_offset_of_GameShouldResume_12() { return static_cast<int32_t>(offsetof(UnitySocial_t3730233122_StaticFields, ___GameShouldResume_12)); }
	inline Action_t437523947 * get_GameShouldResume_12() const { return ___GameShouldResume_12; }
	inline Action_t437523947 ** get_address_of_GameShouldResume_12() { return &___GameShouldResume_12; }
	inline void set_GameShouldResume_12(Action_t437523947 * value)
	{
		___GameShouldResume_12 = value;
		Il2CppCodeGenWriteBarrier(&___GameShouldResume_12, value);
	}

	inline static int32_t get_offset_of_EntryPointStateUpdated_13() { return static_cast<int32_t>(offsetof(UnitySocial_t3730233122_StaticFields, ___EntryPointStateUpdated_13)); }
	inline Action_1_t4034847796 * get_EntryPointStateUpdated_13() const { return ___EntryPointStateUpdated_13; }
	inline Action_1_t4034847796 ** get_address_of_EntryPointStateUpdated_13() { return &___EntryPointStateUpdated_13; }
	inline void set_EntryPointStateUpdated_13(Action_1_t4034847796 * value)
	{
		___EntryPointStateUpdated_13 = value;
		Il2CppCodeGenWriteBarrier(&___EntryPointStateUpdated_13, value);
	}

	inline static int32_t get_offset_of_Initialized_14() { return static_cast<int32_t>(offsetof(UnitySocial_t3730233122_StaticFields, ___Initialized_14)); }
	inline Action_1_t359458046 * get_Initialized_14() const { return ___Initialized_14; }
	inline Action_1_t359458046 ** get_address_of_Initialized_14() { return &___Initialized_14; }
	inline void set_Initialized_14(Action_1_t359458046 * value)
	{
		___Initialized_14 = value;
		Il2CppCodeGenWriteBarrier(&___Initialized_14, value);
	}

	inline static int32_t get_offset_of_RewardClaimed_15() { return static_cast<int32_t>(offsetof(UnitySocial_t3730233122_StaticFields, ___RewardClaimed_15)); }
	inline Action_1_t2623257029 * get_RewardClaimed_15() const { return ___RewardClaimed_15; }
	inline Action_1_t2623257029 ** get_address_of_RewardClaimed_15() { return &___RewardClaimed_15; }
	inline void set_RewardClaimed_15(Action_1_t2623257029 * value)
	{
		___RewardClaimed_15 = value;
		Il2CppCodeGenWriteBarrier(&___RewardClaimed_15, value);
	}

	inline static int32_t get_offset_of_ChallengeStarted_16() { return static_cast<int32_t>(offsetof(UnitySocial_t3730233122_StaticFields, ___ChallengeStarted_16)); }
	inline Action_2_t1471698190 * get_ChallengeStarted_16() const { return ___ChallengeStarted_16; }
	inline Action_2_t1471698190 ** get_address_of_ChallengeStarted_16() { return &___ChallengeStarted_16; }
	inline void set_ChallengeStarted_16(Action_2_t1471698190 * value)
	{
		___ChallengeStarted_16 = value;
		Il2CppCodeGenWriteBarrier(&___ChallengeStarted_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
