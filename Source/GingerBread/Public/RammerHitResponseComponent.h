#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "RammerHitResponseComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URammerHitResponseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DefaultHitPointsResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ChargingHitPointsResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle FlippedHitPointsResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TeleportingHitPointsResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ArmouredDefaultHitPointsResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ArmouredFlippedHitPointsResponse;
    
    URammerHitResponseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIsTeleporting(bool isTeleporting);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFlipped(bool IsFlipped);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCharging(bool isCharging);
    
    UFUNCTION(BlueprintCallable)
    void SetIsArmoured(bool isArmoured);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFlipped() const;
    
};

