#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RhythmicBeatReceiver.generated.h"

class ARhythmManager;
class ARhythmicActivator;

UINTERFACE(Blueprintable)
class GINGERBREAD_API URhythmicBeatReceiver : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API IRhythmicBeatReceiver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRhythmicBeat(ARhythmManager* RhythmManager, const float CurrentBeat, const float BeatDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRhythmicAkMarker(ARhythmManager* RhythmManager, const FName MarkerLabel, const int32 TriggerCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRhythmicActivatorWoken(ARhythmicActivator* RhythmicActivator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRhythmicActivatorSlept(ARhythmicActivator* RhythmicActivator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyOwnedByRhythmicActivator(ARhythmicActivator* RhythmicActivator);
    
};

