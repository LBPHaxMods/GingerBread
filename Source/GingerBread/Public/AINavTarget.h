#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AINavTarget.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class AAINavTarget : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DebugVisualisation;
    
    AAINavTarget(const FObjectInitializer& ObjectInitializer);

};

