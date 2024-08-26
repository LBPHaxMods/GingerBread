#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UnlockImplementorIface.h"
#include "UnlockableItemImplementorIface.h"
#include "AnimationMetadata.generated.h"

UCLASS(Blueprintable)
class UAnimationMetadata : public UObject, public IUnlockableItemImplementorIface, public IUnlockImplementorIface {
    GENERATED_BODY()
public:
    UAnimationMetadata();


    // Fix for true pure virtual functions not being implemented
};

