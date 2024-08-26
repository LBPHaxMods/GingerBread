#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SkinnedMeshInstanceManager.generated.h"

class USkinnedMeshInstanceManager;

UCLASS(Blueprintable)
class GINGERBREAD_API USkinnedMeshInstanceManager : public UObject {
    GENERATED_BODY()
public:
    USkinnedMeshInstanceManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USkinnedMeshInstanceManager* GetInstance(const UObject* WorldContextObject);
    
};

