#include "SpineExtensionEditorPlugin.h"

void FSpineExtensionEditorPlugin::StartupModule()
{
	SpineNotifyAssetTypeActions = MakeShared<FSpineNotifyAssetTypeActions>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(SpineNotifyAssetTypeActions.ToSharedRef());
}

void FSpineExtensionEditorPlugin::ShutdownModule()
{
	if (!FModuleManager::Get().IsModuleLoaded("AssetTools")) return;
	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(SpineNotifyAssetTypeActions.ToSharedRef());
}

IMPLEMENT_MODULE(FSpineExtensionEditorPlugin, SpineExtensionEditorPlugin)
