using System;
using System.IO;

namespace UnrealBuildTool.Rules
{
	public class SpineExtensionEditorPlugin : ModuleRules
	{
		public SpineExtensionEditorPlugin(ReadOnlyTargetRules Target) : base(Target)
		{
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
            bLegacyPublicIncludePaths = false;
            ShadowVariableWarningLevel = WarningLevel.Warning;

            PublicDependencyModuleNames.AddRange(new string[] {
                "Core",
                "CoreUObject",
                "Engine",
                "UnrealEd",
                "SpineExtensionPlugin"
            });

            PublicIncludePathModuleNames.AddRange(new string[] {
               "AssetTools",
               "AssetRegistry"
            });

            DynamicallyLoadedModuleNames.AddRange(new string[] {
               "AssetTools",
               "AssetRegistry"
            });
		}
	}
}
