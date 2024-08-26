#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AudioBPFunctionLibrary.generated.h"

class UAkAudioEvent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API UAudioBPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAudioBPFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void PostDestructionEvent(UPrimitiveComponent* component, UAkAudioEvent* OverrideEvent, const FString& SwitchName);
    
};

