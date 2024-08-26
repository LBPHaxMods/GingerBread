#pragma once
#include "CoreMinimal.h"
#include "GingerbreadManager.h"
#include "BoomblebeeManager.generated.h"

class AActor;
class ABoomblebee;

UCLASS(Blueprintable)
class ABoomblebeeManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABoomblebee*> Boomblebees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABoomblebee* CurrentSpawnBee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentSpawnHive;
    
public:
    ABoomblebeeManager(const FObjectInitializer& ObjectInitializer);

};

