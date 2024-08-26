#pragma once
#include "CoreMinimal.h"
#include "EPickupContainerContent.h"
#include "GingerbreadManager.h"
#include "PickupContainerContentsData.h"
#include "PickupContainerOpenWithModifierTableRowInfo.h"
#include "PickupContainerManager.generated.h"

class APickupContainerManager;
class ASackboy;
class UAkAudioEvent;
class UObject;
class UParticleSystem;
class UPickupContainerComponent;

UCLASS(Blueprintable, NotPlaceable)
class APickupContainerManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupContainerContentsData ContentsData[17];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumAutoTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DefaultContainerAuraPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MemoryOrbSpawnSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlreadySpawnedLivesDistance;
    
    APickupContainerManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ShouldSpawnLife(bool BigLife, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldPickupAutoTargetInstigatorWithModifierTableRowInfo(UPickupContainerComponent* PickupContainerComponent, ASackboy* InstigatingSackboy, const FPickupContainerOpenWithModifierTableRowInfo& OpeningInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APickupContainerManager* GetInstance(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetContentsData(const TEnumAsByte<EPickupContainerContent::Type> Contents, FPickupContainerContentsData& OutData) const;
    
};

