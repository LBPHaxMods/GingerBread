#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GingerbreadSetupManager.generated.h"

class UObject;

UCLASS(Blueprintable)
class GINGERBREAD_API AGingerbreadSetupManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCreateCraftingManager: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCreateSingleScreenCamera: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCreateConfigObjects: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCreateDefaultCameraArea: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCreateGreyboxFloor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCreateLightStudio: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCreatePostProcessVolume: 1;
    
    AGingerbreadSetupManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSackboyOcclusionIntensityGlobal(const UObject* WorldContextObject, const float Intensity);
    
    UFUNCTION(BlueprintCallable)
    void SetSackboyOcclusionIntensity(const float Intensity);
    
};

