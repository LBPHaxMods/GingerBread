#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LevelStreamCallbackObject.generated.h"

class ALevelStreamManager;

UCLASS(Blueprintable)
class ULevelStreamCallbackObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelStreamManager* Manager;
    
    ULevelStreamCallbackObject();

    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded();
    
};

