#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHapticsDamageResult.h"
#include "LevelObjectHapticsRow.generated.h"

class AActor;
class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FLevelObjectHapticsRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> LevelObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHapticsDamageResult, UAkAudioEvent*> SlapEventsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHapticsDamageResult, UAkAudioEvent*> BounceEventsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHapticsDamageResult, UAkAudioEvent*> HeadStompEventsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHapticsDamageResult, UAkAudioEvent*> RollsIntoEventsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartGrabEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FinishGrabEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHapticsDamageResult, UAkAudioEvent*> SlapGamepadAudioEventsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHapticsDamageResult, UAkAudioEvent*> BounceGamepadAudioEventsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHapticsDamageResult, UAkAudioEvent*> HeadGamepadAudioStompEventsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHapticsDamageResult, UAkAudioEvent*> RollsGamepadAudioIntoEventsMap;
    
    GINGERBREAD_API FLevelObjectHapticsRow();
};

