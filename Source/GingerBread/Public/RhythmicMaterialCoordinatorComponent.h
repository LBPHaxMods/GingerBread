#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MusicStateTableRow.h"
#include "RhythmicBeatReceiver.h"
#include "RhythmicMaterialCoordinatorComponent.generated.h"

class ARhythmManager;
class UMaterialParameterCollection;
class URhythmicMaterialCoordinatorDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URhythmicMaterialCoordinatorComponent : public UActorComponent, public IRhythmicBeatReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URhythmicMaterialCoordinatorDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RhythmicBeatMaterialParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AkMarkerMaterialParameterNames;
    
public:
    URhythmicMaterialCoordinatorComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnNewBeat(ARhythmManager* pRhythmManager, FName CueName, int32 CurrentBeat, int32 BeatsPerBar, int32 TotalBeatCount, float BeatDuration);
    
    UFUNCTION(BlueprintCallable)
    void OnMusicStateChanged(ARhythmManager* pRhythmManager, const FMusicStateTableRow NewMusicState, const FMusicStateTableRow PreviousMusicState);
    

    // Fix for true pure virtual functions not being implemented
};

