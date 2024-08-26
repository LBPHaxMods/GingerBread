#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESpikeyVineGroupCutType.h"
#include "ESpikeyVineHorizontalAlignment.h"
#include "ESpikeyVineVerticalAlignment.h"
#include "SpikeyVineInfo.h"
#include "Templates/SubclassOf.h"
#include "VineGroupAllVineEventSignatureDelegate.h"
#include "VineGroupSingleVineEventSignatureDelegate.h"
#include "WakeSleep.h"
#include "PlayerCountActor.h"
#include "SpikeyVinesGroup.generated.h"

class ASpikeyVineSingle;
class UAkAudioEvent;
class UAkComponent;
class UBoxComponent;
class UCraftCutterTargetComponent;
class UMaterialInstance;
class USceneComponent;
class UStaticMesh;
class UTriggerActorComponent;

UCLASS(Blueprintable)
class ASpikeyVinesGroup : public APlayerCountActor, public IWakeSleep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVineGroupSingleVineEventSignature VineGroup_OnAnyVineCut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVineGroupAllVineEventSignature VineGroup_OnAllVineCut;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoundingBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCraftCutterTargetComponent* CraftCutterTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RowCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColumnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AreShortVines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpikeyVineGroupCutType CutType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpikeyVineHorizontalAlignment HorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpikeyVineVerticalAlignment VerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpikeyVineInfo> SpawnedVinesInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignpostTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RegrowDelay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VineSpawnSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASpikeyVineSingle> SpikeyVineToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpikeyVineRandomMinZScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpikeyVineRandomMaxZScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpikeyVineRandomPitchAndYawMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ProxyVineMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ProxyShortVineMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* ProxyVineMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MiddleVinePreviewDisplayColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortVineCraftCutterZExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortVineCraftCutterZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TallVineCraftCutterZExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TallVineCraftCutterZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VineGroupCutDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VineGroupSignpost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VineGroupGrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VineSingleCutDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VineSingleSignpost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VineSingleGrow;
    
public:
    ASpikeyVinesGroup(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TriggerCutDownOnAllSpikeyVines(ASpikeyVineSingle* SpikeyVine);
    
    UFUNCTION(BlueprintCallable)
    void SingleSignpostingAudio(ASpikeyVineSingle* SpikeyVine);
    
    UFUNCTION(BlueprintCallable)
    void SingleRegrowingAudio(ASpikeyVineSingle* SpikeyVine);
    
    UFUNCTION(BlueprintCallable)
    void SingleCutDownAudio(ASpikeyVineSingle* SpikeyVine);
    
    UFUNCTION(BlueprintCallable)
    void InvokeOnGroupAnyVineCut(ASpikeyVineSingle* SpikeyVine);
    
    UFUNCTION(BlueprintCallable)
    void GroupSignpostingAudio(ASpikeyVineSingle* SpikeyVine);
    
    UFUNCTION(BlueprintCallable)
    void GroupRegrowingAudio(ASpikeyVineSingle* SpikeyVine);
    
    UFUNCTION(BlueprintCallable)
    void GroupCutDownAudio(ASpikeyVineSingle* SpikeyVine);
    

    // Fix for true pure virtual functions not being implemented
};

