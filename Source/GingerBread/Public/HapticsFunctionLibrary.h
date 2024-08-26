#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HapticsFunctionLibrary.generated.h"

class AGingerbreadPlayerController;
class ASackboy;
class UAkAudioEvent;
class UAkComponent;
class UForceFeedbackAttenuation;
class UForceFeedbackEffect;
class UObject;
class USceneComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API UHapticsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHapticsFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static bool PlayDualPlatformHapticsAttached(UObject* WorldContextObject, UAkAudioEvent* BondHapticsEvent, UForceFeedbackEffect* ForceFeedbackEffect, USceneComponent* AttachToComponent, FName AttachSocketName, FVector Location, FRotator Rotation, UForceFeedbackAttenuation* ForceFeedbackAttenuation);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static bool PlayDualPlatformHapticsAtLocation(UObject* WorldContextObject, UAkAudioEvent* BondHapticsEvent, UForceFeedbackEffect* ForceFeedbackEffect, const FVector& Location, FRotator Rotation, UForceFeedbackAttenuation* ForceFeedbackAttenuation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UAkComponent*> MakeListenersArray_SomeSackboys(const TArray<ASackboy*>& Sackboys, bool IncludeDefaultListeners);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UAkComponent*> MakeListenersArray_OneSackboy(ASackboy* Sackboy, bool IncludeDefaultListeners);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<UAkComponent*> MakeListenersArray_AllSackboys(UObject* WorldContextObject, bool IncludeDefaultListeners);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UAkComponent*> GetDefaultListeners();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanPlayHapticsOnLocalClient(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanPlayHapticsForPlayer(AGingerbreadPlayerController* PlayerController);
    
};

