using UnrealBuildTool;

public class SpineExtensionPlugin : ModuleRules {
    public SpineExtensionPlugin(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "MovieScene",
            "MovieSceneTracks",
            "ProceduralRenderMeshPlugin",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "SpinePlugin",
            "UMG",
        });
    }
}
