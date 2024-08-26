#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESniperNeedleSlot.h"
#include "SniperNeedlesComponent.generated.h"

class AGingerbreadAICharacter;
class ASniperNeedleBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USniperNeedlesComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* NeedleClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<ASniperNeedleBase*> Needles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGingerbreadAICharacter* Sniper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESniperNeedleSlot, FName> HandSockets;
    
public:
    USniperNeedlesComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    ASniperNeedleBase* SpawnAndEquipNeedle(ESniperNeedleSlot Slot);
    
    UFUNCTION(BlueprintCallable)
    ASniperNeedleBase* ReloadFromSecondaryHand(ESniperNeedleSlot Slot);
    
    UFUNCTION(BlueprintCallable)
    ASniperNeedleBase* ReleaseNeedle(ESniperNeedleSlot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 NumberOfHeldNeedles();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNeedlesInSecondaryHands();
    
    UFUNCTION(BlueprintCallable)
    ESniperNeedleSlot GetRandomSlot(bool throwHandsOnly, bool hasNeedle);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfNeedlesInThrowHands();
    
    UFUNCTION(BlueprintCallable)
    TArray<ASniperNeedleBase*> GetNeedlesInThrowHands();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASniperNeedleBase* GetNeedleInSlot(ESniperNeedleSlot Slot);
    
};

