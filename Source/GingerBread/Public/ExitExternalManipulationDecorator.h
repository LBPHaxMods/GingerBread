#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTDecoratorNode.h"
#include "ExitExternalManipulationDecorator.generated.h"

UCLASS(Blueprintable)
class UExitExternalManipulationDecorator : public UGingerbreadBTDecoratorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ExternalManipulationBB;
    
    UExitExternalManipulationDecorator();

};

