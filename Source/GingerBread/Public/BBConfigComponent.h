#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BBConfigComponent.generated.h"

class UBlackboardData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UBBConfigComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlackboardData* Blackboard;
    
    UBBConfigComponent(const FObjectInitializer& ObjectInitializer);

};

