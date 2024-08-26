using UnrealBuildTool;

public class GingerBreadGameTarget : TargetRules {
	public GingerBreadGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"GingerBread",
		});
	}
}
