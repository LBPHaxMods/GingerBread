#pragma once
#include "CoreMinimal.h"
#include "AdvancedEmitter.h"
#include "EEmittedActorUsage.h"
#include "Templates/SubclassOf.h"
#include "BasicEmitter.generated.h"

class AActor;
class UStaticMesh;

UCLASS(Blueprintable)
class ABasicEmitter : public AAdvancedEmitter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEmittedActorUsage Usage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> BasicEmittedActor;
    
public:
    ABasicEmitter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SpawnObject();
    
};

