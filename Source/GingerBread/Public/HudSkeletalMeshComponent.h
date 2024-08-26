#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "HudMaterialSettings.h"
#include "HudSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHudSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FHudMaterialSettings> HudMaterialSettings;
    
    UHudSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIgnoreTimeDilation(bool NewIgnoreDilation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIgnoreTimeDilation() const;
    
    UFUNCTION(BlueprintCallable)
    FHudMaterialSettings GetHudMaterialSetting(int32 MaterialIndex);
    
};

