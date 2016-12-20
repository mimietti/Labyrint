#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.Sprite
struct Sprite_t4006040370;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnitySocialEntryPointCo3384800.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitySocialEntryPointController
struct  UnitySocialEntryPointController_t496731324  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 UnitySocialEntryPointController::profileImageSize
	int32_t ___profileImageSize_2;
	// UnitySocialEntryPointController/NotificationLocation UnitySocialEntryPointController::notificationLocation
	int32_t ___notificationLocation_3;
	// System.Int32 UnitySocialEntryPointController::notificationOffset
	int32_t ___notificationOffset_4;
	// UnityEngine.UI.Image UnitySocialEntryPointController::entryPointIconImage
	Image_t3354615620 * ___entryPointIconImage_5;
	// UnityEngine.GameObject UnitySocialEntryPointController::notificationBadge
	GameObject_t4012695102 * ___notificationBadge_6;
	// UnityEngine.UI.Text UnitySocialEntryPointController::notificationBadgeCountText
	Text_t3286458198 * ___notificationBadgeCountText_7;
	// UnityEngine.Color UnitySocialEntryPointController::m_EntryPointDefaultColor
	Color_t1588175760  ___m_EntryPointDefaultColor_8;
	// UnityEngine.Sprite UnitySocialEntryPointController::m_EntryPointDefaultSprite
	Sprite_t4006040370 * ___m_EntryPointDefaultSprite_9;

public:
	inline static int32_t get_offset_of_profileImageSize_2() { return static_cast<int32_t>(offsetof(UnitySocialEntryPointController_t496731324, ___profileImageSize_2)); }
	inline int32_t get_profileImageSize_2() const { return ___profileImageSize_2; }
	inline int32_t* get_address_of_profileImageSize_2() { return &___profileImageSize_2; }
	inline void set_profileImageSize_2(int32_t value)
	{
		___profileImageSize_2 = value;
	}

	inline static int32_t get_offset_of_notificationLocation_3() { return static_cast<int32_t>(offsetof(UnitySocialEntryPointController_t496731324, ___notificationLocation_3)); }
	inline int32_t get_notificationLocation_3() const { return ___notificationLocation_3; }
	inline int32_t* get_address_of_notificationLocation_3() { return &___notificationLocation_3; }
	inline void set_notificationLocation_3(int32_t value)
	{
		___notificationLocation_3 = value;
	}

	inline static int32_t get_offset_of_notificationOffset_4() { return static_cast<int32_t>(offsetof(UnitySocialEntryPointController_t496731324, ___notificationOffset_4)); }
	inline int32_t get_notificationOffset_4() const { return ___notificationOffset_4; }
	inline int32_t* get_address_of_notificationOffset_4() { return &___notificationOffset_4; }
	inline void set_notificationOffset_4(int32_t value)
	{
		___notificationOffset_4 = value;
	}

	inline static int32_t get_offset_of_entryPointIconImage_5() { return static_cast<int32_t>(offsetof(UnitySocialEntryPointController_t496731324, ___entryPointIconImage_5)); }
	inline Image_t3354615620 * get_entryPointIconImage_5() const { return ___entryPointIconImage_5; }
	inline Image_t3354615620 ** get_address_of_entryPointIconImage_5() { return &___entryPointIconImage_5; }
	inline void set_entryPointIconImage_5(Image_t3354615620 * value)
	{
		___entryPointIconImage_5 = value;
		Il2CppCodeGenWriteBarrier(&___entryPointIconImage_5, value);
	}

	inline static int32_t get_offset_of_notificationBadge_6() { return static_cast<int32_t>(offsetof(UnitySocialEntryPointController_t496731324, ___notificationBadge_6)); }
	inline GameObject_t4012695102 * get_notificationBadge_6() const { return ___notificationBadge_6; }
	inline GameObject_t4012695102 ** get_address_of_notificationBadge_6() { return &___notificationBadge_6; }
	inline void set_notificationBadge_6(GameObject_t4012695102 * value)
	{
		___notificationBadge_6 = value;
		Il2CppCodeGenWriteBarrier(&___notificationBadge_6, value);
	}

	inline static int32_t get_offset_of_notificationBadgeCountText_7() { return static_cast<int32_t>(offsetof(UnitySocialEntryPointController_t496731324, ___notificationBadgeCountText_7)); }
	inline Text_t3286458198 * get_notificationBadgeCountText_7() const { return ___notificationBadgeCountText_7; }
	inline Text_t3286458198 ** get_address_of_notificationBadgeCountText_7() { return &___notificationBadgeCountText_7; }
	inline void set_notificationBadgeCountText_7(Text_t3286458198 * value)
	{
		___notificationBadgeCountText_7 = value;
		Il2CppCodeGenWriteBarrier(&___notificationBadgeCountText_7, value);
	}

	inline static int32_t get_offset_of_m_EntryPointDefaultColor_8() { return static_cast<int32_t>(offsetof(UnitySocialEntryPointController_t496731324, ___m_EntryPointDefaultColor_8)); }
	inline Color_t1588175760  get_m_EntryPointDefaultColor_8() const { return ___m_EntryPointDefaultColor_8; }
	inline Color_t1588175760 * get_address_of_m_EntryPointDefaultColor_8() { return &___m_EntryPointDefaultColor_8; }
	inline void set_m_EntryPointDefaultColor_8(Color_t1588175760  value)
	{
		___m_EntryPointDefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_m_EntryPointDefaultSprite_9() { return static_cast<int32_t>(offsetof(UnitySocialEntryPointController_t496731324, ___m_EntryPointDefaultSprite_9)); }
	inline Sprite_t4006040370 * get_m_EntryPointDefaultSprite_9() const { return ___m_EntryPointDefaultSprite_9; }
	inline Sprite_t4006040370 ** get_address_of_m_EntryPointDefaultSprite_9() { return &___m_EntryPointDefaultSprite_9; }
	inline void set_m_EntryPointDefaultSprite_9(Sprite_t4006040370 * value)
	{
		___m_EntryPointDefaultSprite_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_EntryPointDefaultSprite_9, value);
	}
};

struct UnitySocialEntryPointController_t496731324_StaticFields
{
public:
	// System.Int32 UnitySocialEntryPointController::m_NotificationCount
	int32_t ___m_NotificationCount_10;
	// UnityEngine.Sprite UnitySocialEntryPointController::m_CurrentProfileSprite
	Sprite_t4006040370 * ___m_CurrentProfileSprite_11;

public:
	inline static int32_t get_offset_of_m_NotificationCount_10() { return static_cast<int32_t>(offsetof(UnitySocialEntryPointController_t496731324_StaticFields, ___m_NotificationCount_10)); }
	inline int32_t get_m_NotificationCount_10() const { return ___m_NotificationCount_10; }
	inline int32_t* get_address_of_m_NotificationCount_10() { return &___m_NotificationCount_10; }
	inline void set_m_NotificationCount_10(int32_t value)
	{
		___m_NotificationCount_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentProfileSprite_11() { return static_cast<int32_t>(offsetof(UnitySocialEntryPointController_t496731324_StaticFields, ___m_CurrentProfileSprite_11)); }
	inline Sprite_t4006040370 * get_m_CurrentProfileSprite_11() const { return ___m_CurrentProfileSprite_11; }
	inline Sprite_t4006040370 ** get_address_of_m_CurrentProfileSprite_11() { return &___m_CurrentProfileSprite_11; }
	inline void set_m_CurrentProfileSprite_11(Sprite_t4006040370 * value)
	{
		___m_CurrentProfileSprite_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurrentProfileSprite_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
