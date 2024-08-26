// Copyright 1998-2011 Epic Games, Inc. All Rights Reserved.
using UnrealBuildTool;
using System;
using System.IO;
using System.Collections.Generic;
using System.Reflection;

// Platform-specific files implement this interface, returning their particular dependencies, defines, etc.
public abstract class AkUEPlatform
{
	protected ReadOnlyTargetRules Target;
	protected string ThirdPartyFolder;
	
	public AkUEPlatform(ReadOnlyTargetRules in_Target, string in_ThirdPartyFolder)
	{
		Target = in_Target;
		ThirdPartyFolder = in_ThirdPartyFolder;
	}
	
	public static AkUEPlatform GetAkUEPlatformInstance(ReadOnlyTargetRules Target, string ThirdPartyFolder)
	{
		var AkUEPlatformType = System.Type.GetType("AkUEPlatform_" + Target.Platform.ToString());
		if(AkUEPlatformType == null)
		{
			throw new BuildException("Wwise does not support platform " + Target.Platform.ToString());
		}
		
		AkUEPlatform PlatformInstance = Activator.CreateInstance(AkUEPlatformType, Target, ThirdPartyFolder) as AkUEPlatform;
		if(PlatformInstance == null)
		{
			throw new BuildException("Wwise could not instanciate platform " + Target.Platform.ToString());
		}

		return PlatformInstance;
	}
	

	protected string akConfigurationDir
	{
		get
		{
			if (Target.Configuration == UnrealTargetConfiguration.Debug)
			{
				// change bDebugBuildsActuallyUseDebugCRT to true in BuildConfiguration.cs to actually link debug binaries
				if (!Target.bDebugBuildsActuallyUseDebugCRT)
				{
					return "Profile";
				}
				else
				{
					return "Debug";
				}
			}
			else if (Target.Configuration == UnrealTargetConfiguration.Development ||
					Target.Configuration == UnrealTargetConfiguration.Test ||
					Target.Configuration == UnrealTargetConfiguration.DebugGame)
			{
				return "Profile";
			}
			else // if (Target.Configuration == UnrealTargetConfiguration.Shipping)
			{
				return "Release";
			}
		}
	}
	
	public abstract string GetLibraryFullPath(string LibName, string LibPath);
	public abstract bool SupportsAkAutobahn { get; }
	public abstract bool SupportsCommunication { get; }
	
	public abstract List<string> GetPublicLibraryPaths();
	public abstract List<string> GetAdditionalWwiseLibs();
	public abstract List<string> GetPublicSystemLibraries();
	public abstract List<string> GetPublicDefinitions();
	public abstract List<string> GetPublicAdditionalFrameworks();
	
#if UE_4_24_OR_LATER
	public virtual List<string> GetSanitizedAkLibList(List<string> AkLibs)
	{
		List<string> SanitizedLibs = new List<string>();
		foreach(var lib in AkLibs)
		{
			foreach(var libPath in GetPublicLibraryPaths())
			{
				SanitizedLibs.Add(GetLibraryFullPath(lib, libPath));
			}
		}
		
		return SanitizedLibs;
	}
#else
	public abstract string SanitizeLibName(string in_libName);
	public virtual List<string> GetSanitizedAkLibList(List<string> AkLibs)
	{
		List<string> SanitizedLibs = new List<string>();
		foreach(var lib in AkLibs)
		{
			SanitizedLibs.Add(SanitizeLibName(lib));
		}
		
		return SanitizedLibs;
	}
#endif

}

public class AkAudio : ModuleRules
{
	private static AkUEPlatform AkUEPlatformInstance;
	private List<string> AkLibs = new List<string> 
	{
		"AkSoundEngine",
		"AkMemoryMgr",
		"AkStreamMgr",
		"AkMusicEngine",
		"AkSpatialAudio",
		"AkVorbisDecoder",
		"AkSilenceSource",
		"AkSineSource",
		"AkToneSource",
		"AkPeakLimiterFX",
		"AkMatrixReverbFX",
		"AkParametricEQFX",
		"AkDelayFX",
		"AkExpanderFX",
		"AkFlangerFX",
		"AkCompressorFX",
		"AkGainFX",
		"AkHarmonizerFX",
		"AkTimeStretchFX",
		"AkPitchShifterFX",
		"AkStereoDelayFX",
		"AkMeterFX",
		"AkGuitarDistortionFX",
		"AkTremoloFX",
		"AkRoomVerbFX",
		"AkAudioInputSource",
		"AkSynthOneSource",
		"AkRecorderFX",
		"AkOpusDecoder"
	};
	
	private List<string> AkPlugins = new List<string> 
	{
		"AkReflectFX",
		"AkConvolutionReverbFX",
		"AuroHeadphoneFX"
	};

	public AkAudio(ReadOnlyTargetRules Target) : base(Target)
	{
		string ThirdPartyFolder = Path.Combine(ModuleDirectory, "../../ThirdParty");
		AkUEPlatformInstance = AkUEPlatform.GetAkUEPlatformInstance(Target, ThirdPartyFolder);
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PrivateIncludePathModuleNames.AddRange(new string[] { "Settings", "UMG"});
		PublicDependencyModuleNames.Add("UMG");
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"SlateCore",
				"NetworkReplayStreaming",
				"MovieScene",
				"MovieSceneTracks",
				"Projects",
				"Json",
				"Slate",
				"InputCore",
				"Projects"
			});

		if (Target.bBuildEditor)
		{
			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"UnrealEd",
					"DesktopPlatform"
				});
			
			foreach (var Platform in GetAvailablePlatforms(ModuleDirectory))
			{
				PublicDefinitions.Add("AK_PLATFORM_" + Platform.ToUpper());
			}
		}

		PrivateIncludePaths.Add("AkAudio/Private");
		PublicIncludePaths.Add(Path.Combine(ThirdPartyFolder, "include"));
		
		PublicDefinitions.Add("AK_UNREAL_MAX_CONCURRENT_IO=32");
		PublicDefinitions.Add("AK_UNREAL_IO_GRANULARITY=32768");
		if (Target.Configuration == UnrealTargetConfiguration.Shipping)
		{
			PublicDefinitions.Add("AK_OPTIMIZED");
		}
		
		if (Target.Configuration != UnrealTargetConfiguration.Shipping && AkUEPlatformInstance.SupportsCommunication)
		{
			AkLibs.Add("CommunicationCentral");
			PublicDefinitions.Add("AK_ENABLE_COMMUNICATION=1");
		}
		else
		{
			PublicDefinitions.Add("AK_ENABLE_COMMUNICATION=0");
		}
		
		if (AkUEPlatformInstance.SupportsAkAutobahn)
		{
			PublicDefinitions.Add("AK_SUPPORT_WAAPI=1");
			AkLibs.Add("AkAutobahn");
		}
		else
		{
			PublicDefinitions.Add("AK_SUPPORT_WAAPI=0");
		}
		
		AddWwisePlugins(AkPlugins, ref AkLibs);
		
		// Platform-specific dependencies
#if UE_4_24_OR_LATER
		PublicSystemLibraries.AddRange(AkUEPlatformInstance.GetPublicSystemLibraries());
#else
		PublicLibraryPaths.AddRange(AkUEPlatformInstance.GetPublicLibraryPaths());
		PublicAdditionalLibraries.AddRange(AkUEPlatformInstance.GetPublicSystemLibraries());
#endif
		AkLibs.AddRange(AkUEPlatformInstance.GetAdditionalWwiseLibs());
		PublicDefinitions.AddRange(AkUEPlatformInstance.GetPublicDefinitions());
		
		var Frameworks = AkUEPlatformInstance.GetPublicAdditionalFrameworks();
		foreach(var fw in Frameworks)
		{
#if UE_4_22_OR_LATER
			PublicAdditionalFrameworks.Add(new ModuleRules.Framework(fw));
#else
			PublicAdditionalFrameworks.Add(new UEBuildFramework(fw));
#endif
		}

		PublicAdditionalLibraries.AddRange(AkUEPlatformInstance.GetSanitizedAkLibList(AkLibs));
	}
	
	private bool IsPluginInstalled(string PluginName)
	{
		foreach (string LibPath in AkUEPlatformInstance.GetPublicLibraryPaths())
		{
			if (File.Exists(AkUEPlatformInstance.GetLibraryFullPath(PluginName, LibPath)))
			{
				return true;
			}
		}

		return false;
	}

	private void AddWwisePlugins(List<string> AkPlugins, ref List<string> AkLibs)
	{
		foreach(var plugin in AkPlugins)
		{
			if (IsPluginInstalled(plugin))
			{
				AkLibs.Add(plugin);
				PublicDefinitions.Add("AK_WITH_" + plugin.ToUpper() + "=1");
			}
			else
			{
				PublicDefinitions.Add("AK_WITH_" + plugin.ToUpper() + "=0");
			}
		}
	}

	private static List<string> GetAvailablePlatforms(string ModuleDir)
	{
		List<string> FoundPlatforms = new List<string>();
		const string StartPattern = "AkAudio_";
		const string EndPattern = ".Build.cs";
		foreach (var BuildCsFile in System.IO.Directory.GetFiles(ModuleDir, "*" + EndPattern))
		{
			if (BuildCsFile.Contains("AkAudio_"))
			{
				int StartIndex = BuildCsFile.IndexOf(StartPattern) + StartPattern.Length;
				int StopIndex = BuildCsFile.IndexOf(EndPattern);
				FoundPlatforms.Add(BuildCsFile.Substring(StartIndex, StopIndex - StartIndex));
			}
		}

		return FoundPlatforms;
	}
}
