using UnrealBuildTool;

public class Zenith : ModuleRules {
    public Zenith(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "CableComponent",
            "Core",
            "CoreUObject",
            "Engine",
            "EventPlugin",
            "FMODStudio",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MovieScene",
            "NavigationSystem",
            "Paper2D",
            "PhysicsCore",
            "ProceduralRenderMeshPlugin",
            "Slate",
            "SlateCore",
            "SpineExtensionPlugin",
            "SpinePlugin",
            "UMG",
            "GameplayTasks",
        });
    }
}
