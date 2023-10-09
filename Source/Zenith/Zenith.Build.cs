using UnrealBuildTool;

public class Zenith : ModuleRules {
    public Zenith(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AudioMixer",
            "CableComponent",
            "Chaos",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "EventPlugin",
            "FMODStudio",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MediaUtils",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "Paper2D",
            "PhysicsCore",
            "ProceduralRenderMeshPlugin",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "SpineExtensionPlugin",
            "SpinePlugin",
            "UMG",
        });
    }
}
