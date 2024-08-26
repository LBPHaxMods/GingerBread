#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DuopedeSpline.h"
#include "OnVexedDuopedeSegmentKilledDelegate.h"
#include "VexableDuopedeSpline.generated.h"

class ADuopedeSegment;
class UAkAudioEvent;
class UParticleSystem;

UCLASS(Blueprintable)
class AVexableDuopedeSpline : public ADuopedeSpline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVexedDuopedeSegmentKilled OnVexedDuopedeSegmentKilled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfNonVexableSegmentsAtEnds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DespawnedSegmentParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DespawnedSegmentAudioEvent;
    
public:
    AVexableDuopedeSpline(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void RPC_SpawnDespawnedSegmentEffect(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentVexedDuopedeSegmentKilled(ADuopedeSegment* pDuopedeSegment);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AUTH_SelectVexedDuopedeSegment();
    
};

