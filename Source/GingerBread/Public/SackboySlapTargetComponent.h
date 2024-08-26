#pragma once
#include "CoreMinimal.h"
#include "ESlapTargetType.h"
#include "TargetableComponent.h"
#include "SackboySlapTargetComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USackboySlapTargetComponent : public UTargetableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlapTargetType SlapTargetType;
    
    USackboySlapTargetComponent(const FObjectInitializer& ObjectInitializer);

};

