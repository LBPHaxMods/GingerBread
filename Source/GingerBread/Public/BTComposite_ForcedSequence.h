#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Composites/BTComposite_Sequence.h"
#include "BTComposite_ForcedSequence.generated.h"

UCLASS(Blueprintable)
class UBTComposite_ForcedSequence : public UBTComposite_Sequence {
    GENERATED_BODY()
public:
    UBTComposite_ForcedSequence();

};

