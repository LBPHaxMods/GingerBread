#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "EControlMode.h"
#include "Templates/SubclassOf.h"
#include "TutorialTrigger.generated.h"

class ASackboy;
class ATutorialPromptActor;
class UBillboardComponent;
class UBoxComponent;
class UInteractionComponent;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API ATutorialTrigger : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* InteractionBox;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ATutorialPromptActor>> TutorialActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATutorialPromptActor> SackboyAttachActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TutorialConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Billboard;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ATutorialPromptActor>> HideObjects;
    
    ATutorialTrigger(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void WaitEventDispatcherAndSubscribe();
    
    UFUNCTION(BlueprintCallable)
    void OnTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPowerUpEquipped(EControlMode control_type);
    
    UFUNCTION(BlueprintCallable)
    void OnEngageWithToy(ASackboy* SB, bool is_vehicle);
    
    UFUNCTION(BlueprintCallable)
    void BeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo);
    
    UFUNCTION(BlueprintCallable)
    void BeginInteractionOverlap(UInteractionComponent* OverlappedComp, AActor* Other, UInteractionComponent* OtherComp);
    
};

