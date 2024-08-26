#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UniversalDataSystemFunctionLibrary.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class UNIVERSALDATASYSTEM_API UUniversalDataSystemFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUniversalDataSystemFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool UDSEventTest(APlayerController* PlayerController);
    
};

