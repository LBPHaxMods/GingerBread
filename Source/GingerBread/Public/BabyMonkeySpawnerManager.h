#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BabyMonkeySpawnerManager.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ABabyMonkeySpawnerManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
public:
    ABabyMonkeySpawnerManager(const FObjectInitializer& ObjectInitializer);

};

