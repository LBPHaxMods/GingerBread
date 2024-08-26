#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_PostAKEvent.h"
#include "AnimNotify_PostHapticAKEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class GINGERBREAD_API UAnimNotify_PostHapticAKEvent : public UAnimNotify_PostAKEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HapticComponentTag;
    
public:
    UAnimNotify_PostHapticAKEvent();

};

