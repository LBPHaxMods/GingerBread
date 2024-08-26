#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AICameraCoordinator.generated.h"

class AActor;
class UWorld;

UCLASS(Blueprintable)
class UAICameraCoordinator : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CoordinatedActors;
    
    UAICameraCoordinator();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* GetWorld() const;
    
};

