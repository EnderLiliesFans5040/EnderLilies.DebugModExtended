#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SpineAtlasAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class SPINEPLUGIN_API USpineAtlasAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> atlasPages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> atlasEmissivePages;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString rawData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName atlasFileName;
    
public:
    USpineAtlasAsset();

};

