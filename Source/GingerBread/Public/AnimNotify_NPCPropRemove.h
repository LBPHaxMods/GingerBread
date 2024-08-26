#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_NPCPropRemove.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_NPCPropRemove : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UAnimNotify_NPCPropRemove();

};

