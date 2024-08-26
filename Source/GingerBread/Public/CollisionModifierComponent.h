#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ModifiedCollisionResponse.h"
#include "CollisionModifierComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCollisionModifierComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModifiedCollisionResponse> CollisionResponses;
    
    UCollisionModifierComponent(const FObjectInitializer& ObjectInitializer);

};

