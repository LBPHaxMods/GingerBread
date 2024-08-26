#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "VexFinalTileGridCoords.h"
#include "VexFinalTileManagerServerData.h"
#include "VexFinalTileManagerServerRequestParameters.h"
#include "VexFinalTileRow.h"
#include "VexFinalTileManager.generated.h"

class ACheckpointOnString;
class AVexFinalEncounter;
class UCSPHelperComponent;
class UCurveFloat;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class AVexFinalTileManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCSPHelperComponent* CSPHelperComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVexFinalEncounter* Vex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VexTiles, meta=(AllowPrivateAccess=true))
    TArray<FVexFinalTileRow> VexTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACheckpointOnString* CheckpointOnString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVexFinalTileGridCoords> NewGapCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalTileGridCoords CheckpointSpawningCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShuffleStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShuffleSignpostDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShuffleMovementDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ShuffleSignpostShakeSoundTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ShuffleSignpostCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ShuffleMovementCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVexFinalTileManagerServerData ServerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVexFinalTileManagerServerRequestParameters ServerParameters;
    
public:
    AVexFinalTileManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartFloatyWobbles();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_VexTiles();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShuffling() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetGapLocations();
    
    UFUNCTION(BlueprintCallable)
    void DoShuffle();
    
    UFUNCTION(BlueprintCallable)
    void CreateGaps();
    
};

