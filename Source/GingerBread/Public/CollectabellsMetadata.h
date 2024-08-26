#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UnlockableItemImplementorIface.h"
#include "CollectabellsMetadata.generated.h"

UCLASS(Blueprintable)
class UCollectabellsMetadata : public UObject, public IUnlockableItemImplementorIface {
    GENERATED_BODY()
public:
    UCollectabellsMetadata();


    // Fix for true pure virtual functions not being implemented
};

