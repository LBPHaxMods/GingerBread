#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "SackboyWalkable.h"
#include "RewindPad.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ARewindPad : public AActor, public IInteractable, public ISackboyWalkable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CleaningVolumeActors;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeterComponent;
    
public:
    ARewindPad(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

