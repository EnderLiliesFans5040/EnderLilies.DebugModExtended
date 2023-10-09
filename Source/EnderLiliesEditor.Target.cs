using UnrealBuildTool;

public class EnderLiliesEditorTarget : TargetRules {
	public EnderLiliesEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"OnlineSubsystemSteam",
			"Zenith",
		});
	}
}
