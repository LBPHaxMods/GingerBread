#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PlayerCountActor.h"
#include "BabyMonkeySpawner.generated.h"

class ABabyMonkey;
class UArrowComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ABabyMonkeySpawner : public APlayerCountActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BelowSpawnPointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnFromBelow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABabyMonkey> BabyMonkeyClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpawnedBabyMonkey, meta=(AllowPrivateAccess=true))
    ABabyMonkey* SpawnedBabyMonkey;
    
public:
    ABabyMonkeySpawner(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SpawnedBabyMonkey();
    
};

