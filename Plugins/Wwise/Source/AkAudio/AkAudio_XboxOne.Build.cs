// Copyright (c) 2006-2019 Audiokinetic Inc. / All Rights Reserved
using UnrealBuildTool;
using System;
using System.IO;
using System.Collections.Generic;

public class AkUEPlatform_XboxOne : AkUEPlatform
{
	public AkUEPlatform_XboxOne(ReadOnlyTargetRules in_TargetRules, string in_ThirdPartyFolder) : base(in_TargetRules, in_ThirdPartyFolder) {}

#if !UE_4_24_OR_LATER
	public override string SanitizeLibName(string in_libName)
	{
		return in_libName + ".lib";
	}
#endif

	public override string GetLibraryFullPath(string LibName, string LibPath)
	{
		return Path.Combine(LibPath, LibName + ".lib");
	}

	public override bool SupportsAkAutobahn { get { return false; } }
	
	public override bool SupportsCommunication { get { return true; } }

	public override List<string> GetPublicLibraryPaths()
	{
		string akPlatformLibDir = "XboxOne_" + GetVisualStudioVersion();
		
		return new List<string>
		{
			Path.Combine(ThirdPartyFolder, akPlatformLibDir, akConfigurationDir, "lib")
		};
	}
	
	public override List<string> GetAdditionalWwiseLibs()
	{
		return new List<string>();
	}
	
	public override List<string> GetPublicSystemLibraries()
	{
		return new List<string>
		{
			"AcpHal.lib",
			"MMDevApi.lib"
		};
	}
	
	public override List<string> GetPublicDefinitions()
	{
		var Defines = new List<string>
		{
			"_XBOX_ONE",
			"AK_XBOXONE_INIT_COMMS_MANIFEST=1",
			"AK_XBOXONE_NEED_APU_ALLOC",
		};
        
#if UE_4_25_OR_LATER
        Defines.Add("AK_NEED_XBOX_MINAPI=0");
#else
        Defines.Add("AK_NEED_XBOX_MINAPI=1");
#endif

		return Defines;
	}
	
	public override List<string> GetPublicAdditionalFrameworks()
	{
		return new List<string>();
	}

	private string GetVisualStudioVersion()
	{
		string VSVersion = "vc140";

		// Use reflection because the GitHub version of UE is missing things.
		var XboxOnePlatformType = System.Type.GetType("XboxOnePlatform", false);
		if (XboxOnePlatformType != null)
		{
			var XboxOneCompilerField = XboxOnePlatformType.GetField("Compiler");
			if (XboxOneCompilerField != null)
			{
				var XboxOneCompilerValue = XboxOneCompilerField.GetValue(null);
				if (XboxOneCompilerValue.ToString() == "VisualStudio2012")
				{
					VSVersion = "vc110";
				}
				else if(XboxOneCompilerValue.ToString() == "VisualStudio2015")
				{
					VSVersion = "vc140";
				}
				else if(XboxOneCompilerValue.ToString() == "VisualStudio2017")
				{
					VSVersion = "vc150";
				}
			}
		}
		
		return VSVersion;
	}
}
