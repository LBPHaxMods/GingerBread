// Copyright 1998-2011 Epic Games, Inc. All Rights Reserved.
using UnrealBuildTool;
using System;
using System.IO;
using System.Collections.Generic;

public abstract class AkUEPlatform_Windows : AkUEPlatform
{
	public AkUEPlatform_Windows(ReadOnlyTargetRules in_TargetRules, string in_ThirdPartyFolder) : base(in_TargetRules, in_ThirdPartyFolder) {}

	public abstract string PlatformPrefix { get; }

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

	public override bool SupportsAkAutobahn { get { return Target.Configuration != UnrealTargetConfiguration.Shipping; } }
	
	public override bool SupportsCommunication { get { return true; } }

	public override List<string> GetPublicLibraryPaths()
	{
		string akPlatformLibDir = PlatformPrefix + "_" + GetVisualStudioVersion();
		return new List<string> { Path.Combine(ThirdPartyFolder, akPlatformLibDir, akConfigurationDir, "lib") };
	}

	public override List<string> GetAdditionalWwiseLibs()
	{
		return new List<string>
		{
			"SFLib"
		};
	}
	
	public override List<string> GetPublicSystemLibraries()
	{
		var Dependencies = new List<string> 
		{
			"dsound.lib",
			"dxguid.lib",
			"Msacm32.lib",
			"XInput.lib",
			"dinput8.lib"
		};
		
		return Dependencies;
	}
	
	public override List<string> GetPublicDefinitions()
	{
		var Definitions = new List<string>();
		if(Target.bBuildEditor)
		{
			Definitions.Add("AK_SOUNDFRAME");
		}
		return Definitions;
	}

	public override List<string> GetPublicAdditionalFrameworks()
	{
		return new List<string>();
	}

	private static void CheckCompilerVersion(ref string Version, WindowsCompiler Compiler, string LongVersionName, string ShortVersionName)
	{
		try
		{
			if (Compiler == (WindowsCompiler)Enum.Parse(typeof(WindowsCompiler), LongVersionName))
				Version = ShortVersionName;
		}
		catch
		{
		}
	}

	private string GetVisualStudioVersion()
	{
		string VSVersion = "vc150";
		var Compiler = Target.WindowsPlatform.Compiler;
		CheckCompilerVersion(ref VSVersion, Compiler, "VisualStudio2019", "vc160");
		CheckCompilerVersion(ref VSVersion, Compiler, "VisualStudio2017", "vc150");
		CheckCompilerVersion(ref VSVersion, Compiler, "VisualStudio2015", "vc140");
		CheckCompilerVersion(ref VSVersion, Compiler, "VisualStudio2013", "vc120");
		return VSVersion;
	}
}

public class AkUEPlatform_Win32 : AkUEPlatform_Windows
{
	public AkUEPlatform_Win32(ReadOnlyTargetRules in_TargetRules, string in_ThirdPartyFolder) : base(in_TargetRules, in_ThirdPartyFolder) {}
	public override string PlatformPrefix { get { return "Win32"; } }
}

public class AkUEPlatform_Win64 : AkUEPlatform_Windows
{
	public AkUEPlatform_Win64(ReadOnlyTargetRules in_TargetRules, string in_ThirdPartyFolder) : base(in_TargetRules, in_ThirdPartyFolder) {}
	public override string PlatformPrefix { get { return "x64"; } }
}
