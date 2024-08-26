#pragma once
#include "CoreMinimal.h"
#include "EJumpStompTargetType.h"
#include "TargetableComponent.h"
#include "SackboyJumpStompTargetComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USackboyJumpStompTargetComponent : public UTargetableComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJumpStompTargetType JumpStompTargetType;
    
public:
    USackboyJumpStompTargetComponent(const FObjectInitializer& ObjectInitializer);

};

