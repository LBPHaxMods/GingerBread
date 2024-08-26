#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CollectableStruct.h"
#include "InventoryFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UInventoryFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInventoryFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FName GetInventoryName(UObject* WorldContextObject, FCollectableStruct collectableSctruct);
    
};

