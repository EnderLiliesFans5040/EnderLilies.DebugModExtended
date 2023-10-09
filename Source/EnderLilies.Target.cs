using UnrealBuildTool;

public class EnderLiliesTarget : TargetRules {
	public EnderLiliesTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"OnlineSubsystemSteam",
			"Zenith",
		});
	}
}
