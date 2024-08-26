#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EVexEncounterVersion.h"
#include "VexBark.h"
#include "VexBarkData.h"
#include "VexSackboyDeathBarkData.h"
#include "VexBarkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVexBarkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVexEncounterVersion, FVexBarkData> BarkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVexBark> TakeHitBarks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVexEncounterVersion, FVexSackboyDeathBarkData> SackboyDeathBarkData;
    
    UVexBarkComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void StopBark(float BarkTimeStamp);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Play(FVexBark BarkToPlay, float ServerTimeStamp);
    
    UFUNCTION(BlueprintCallable)
    void OnVoiceLineEnded(const FString& SubtitleKey);
    
};

