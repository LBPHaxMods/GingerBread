#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayerJoinFunctionLibrary.generated.h"

class UObject;
class UPlayerJoinManager;

UCLASS(Blueprintable)
class UPlayerJoinFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayerJoinFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPlayerJoinManager* GetPlayerJoinManager(const UObject* WorldContextObject);
    
};

