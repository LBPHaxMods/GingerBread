#pragma once

#include "CoreMinimal.h"
#include "LevelObject.h"
#include "Templates/SubclassOf.h"
#include "PlayerCountActor.h"
#include "BonusCollectabellSpawnerBase.generated.h"

class AActor;
class UBillboardComponent;

UCLASS(Abstract, Blueprintable)
class ABonusCollectabellSpawnerBase : public APlayerCountActor, public ILevelObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsManuallyTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SmallActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> LargeActorClass;
    
public:
    ABonusCollectabellSpawnerBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

