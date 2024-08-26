#pragma once
#include "CoreMinimal.h"
#include "CritterReceptacleStatic.h"
#include "HitPointsModifierTableRow.h"
#include "BonusCritterReceptacleStatic.generated.h"

class AActor;
class ACritterReceptacle;
class ASackboy;
class UArrowComponent;
class UInteractionComponent;
class UPickupContainerComponent;

UCLASS(Abstract, Blueprintable)
class ABonusCritterReceptacleStatic : public ACritterReceptacleStatic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* BonusArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPickupContainerComponent* SmallBonusPickupContainerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPickupContainerComponent* LargeBonusPickupContainerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* CollectabellDetectorInteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LargeBonusTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitPointsModifierTableRow SackboyHitPointsModifierTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitPointsModifierTableRow EnvironmentHitPointsModifierTableRow;
    
public:
    ABonusCritterReceptacleStatic(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnCollectabellDetectorBeginOverlap(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnAllPickupsSpawned(UPickupContainerComponent* pPickupContainerComponent, const TArray<AActor*> SpawnedPickups);
    
    UFUNCTION(BlueprintCallable)
    void OnActorCounted(ACritterReceptacle* pCritterReceptacle, ASackboy* pThrownBy, AActor* pCountedActor);
    
};

