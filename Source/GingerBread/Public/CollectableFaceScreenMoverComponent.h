#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CollectableFaceScreenMoverComponent.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UCollectableFaceScreenMoverComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CollectableStaticMesh;
    
public:
    UCollectableFaceScreenMoverComponent(const FObjectInitializer& ObjectInitializer);

};

