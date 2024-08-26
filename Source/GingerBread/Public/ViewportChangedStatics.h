#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ViewportChangedStatics.generated.h"

class UObject;

UCLASS(Blueprintable)
class GINGERBREAD_API UViewportChangedStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UViewportChangedStatics();

    UFUNCTION(BlueprintCallable)
    static void ExecuteOnViewportChangedFromLastData(UObject* Obj);
    
};

