using UnrealBuildTool;
using System.Collections.Generic;

public class GingerBreadEditorTarget : TargetRules {
	public GingerBreadEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"GingerBread",
		});
	}
}
