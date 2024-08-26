using UnrealBuildTool;

public class GingerBread : ModuleRules {
    public GingerBread(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "CableComponent",
            "Core",
            "CoreUObject",
            "Engine",
            "GameAnalytics",
            "GameplayTags",
            "GingerShaders",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "NavigationSystem",
            "OnlineSubsystemUtils",
            "ProceduralMeshComponent",
            "Slate",
            "SlateCore",
            "SumoHairRuntime",
            "UMG",
            "UniversalDataSystem",
            "GameplayTasks",
        });
    }
}
