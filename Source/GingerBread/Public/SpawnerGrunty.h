#pragma once
#include "CoreMinimal.h"
#include "AISpawner.h"
#include "EWorldLocation.h"
#include "Templates/SubclassOf.h"
#include "SpawnerGrunty.generated.h"

class AGingerbreadAICharacter;

UCLASS(Abstract, Blueprintable)
class ASpawnerGrunty : public AAISpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldLocation, TSubclassOf<AGingerbreadAICharacter>> GruntyClassesToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShieldStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfGruntys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnVFXStackVerticalOffset;
    
    ASpawnerGrunty(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SpawnAIStack(const TArray<UClass*>& ClassesToStack);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<AGingerbreadAICharacter*> GetSpawnedAIs();
    
};

