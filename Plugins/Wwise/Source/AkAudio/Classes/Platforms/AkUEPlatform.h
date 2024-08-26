#pragma once

#include "AkInclude.h"

#if PLATFORM_ANDROID && !PLATFORM_LUMIN
#include "AkPlatform_Android/AkAndroidPlatform.h"
#elif PLATFORM_IOS
#include "AkPlatform_iOS/AkIOSPlatform.h"
#elif PLATFORM_LINUX
#include "AkPlatform_Linux/AkLinuxPlatform.h"
#elif PLATFORM_LUMIN
#include "AkPlatform_Lumin/AkLuminPlatform.h"
#elif PLATFORM_MAC
#include "AkPlatform_Mac/AkMacPlatform.h"
#elif PLATFORM_PS4
#include "AkPlatform_PS4/AkPS4Platform.h"
#elif defined(AK_GGP)
#include "AkPlatform_Stadia/AkStadiaPlatform.h"
#elif PLATFORM_SWITCH
#include "AkPlatform_Switch/AkSwitchPlatform.h"
#elif defined(AK_GDX)
#include "AkPlatform_GDX/AkGDXPlatform.h"
#elif PLATFORM_WINDOWS
#include "AkPlatform_Windows/AkWindowsPlatform.h"
#elif defined(AK_GX)
#include "AkPlatform_GX/AkGXPlatform.h"
#elif PLATFORM_XBOXONE
#include "AkPlatform_XboxOne/AkXboxOnePlatform.h"
#elif defined(AK_PELLEGRINO)
#include "AkPlatform_Pellegrino/AkPellegrinoPlatform.h"
#elif defined(AK_CHINOOK)
#include "AkPlatform_Chinook/AkChinookPlatform.h"
#else
#error "The Wwise plug-in does not support the current build platform."
#endif

namespace AkUnrealPlatformHelper
{
	AKAUDIO_API TSet<FString> GetAllSupportedUnrealPlatforms();
	AKAUDIO_API TSet<FString> GetAllSupportedUnrealPlatformsForProject();
	AKAUDIO_API TArray<TSharedPtr<FString> > GetAllSupportedWwisePlatforms(bool ProjectScope = false);
}