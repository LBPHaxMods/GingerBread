#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "HudMaterialSettings.h"
#include "HudStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHudStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FHudMaterialSettings> HudMaterialSettings;
    
    UHudStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FHudMaterialSettings GetHudMaterialSetting(int32 MaterialIndex);
    
};

