#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "SpineNotifyAssetActions.h"

class FSpineExtensionEditorPlugin : public IModuleInterface
{
public:
	void StartupModule() override;
	void ShutdownModule() override;
private:
	TSharedPtr<FSpineNotifyAssetTypeActions> SpineNotifyAssetTypeActions;
};
