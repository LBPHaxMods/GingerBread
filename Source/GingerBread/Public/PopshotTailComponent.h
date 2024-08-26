#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "EPopshotTailState.h"
#include "PopshotTailSettings.h"
#include "TailComponentOverpulledDelegate.h"
#include "TailGrabStatusChangesDelegate.h"
#include "Templates/SubclassOf.h"
#include "PopshotTailComponent.generated.h"

class APopshotTailActor;
class ASackboy;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPopshotTailComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APopshotTailActor> PopshotTailClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=CurrentTail_RepInit, meta=(AllowPrivateAccess=true))
    APopshotTailActor* CurrentTail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TailEndAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PopshotTailOverpullEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPopshotTailSettings TailSettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTailGrabStatusChanges OnTailGrabStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTailComponentOverpulled OnTailOverpulled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector Rep_TailPosition;
    
    UPopshotTailComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TailStateChanged(EPopshotTailState NewState);
    
    UFUNCTION(BlueprintCallable)
    void TailOverPulled(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable)
    void SpawnTail();
    
    UFUNCTION(BlueprintCallable)
    void SetTailGrabbable(bool isGrabbable);
    
    UFUNCTION(BlueprintCallable)
    void SetTailEnabled(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void MakeSocketDriven();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrabbed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTailPulledPercentage() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyTail();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CurrentTail_RepInit();
    
};

