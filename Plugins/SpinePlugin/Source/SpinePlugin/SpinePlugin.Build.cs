using UnrealBuildTool;

public class SpinePlugin : ModuleRules {
    public SpinePlugin(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "ProceduralRenderMeshPlugin",
            "SlateCore",
            "UMG",
        });
    }
}
