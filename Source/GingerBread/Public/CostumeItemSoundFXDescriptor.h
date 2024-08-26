#pragma once
#include "CoreMinimal.h"
#include "CostumeItemFXDescriptor.h"
#include "ECostumeAudioFootstepEvents.h"
#include "ECostumeAudioMovementEvents.h"
#include "ECostumeAudioVoxFXInsert.h"
#include "CostumeItemSoundFXDescriptor.generated.h"

class UAkAudioBank;

UCLASS(Blueprintable)
class UCostumeItemSoundFXDescriptor : public UCostumeItemFXDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECostumeAudioFootstepEvents, FString> FootstepSweetenerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideDefaultFootsteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECostumeAudioMovementEvents, FString> MovementFoleySweetenerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideDefaultMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MovementFoleySweetenerPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECostumeAudioVoxFXInsert, FString> FXSharesetNameMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fOutputLeveldB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAkAudioBank>> WwiseBankResource;
    
    UCostumeItemSoundFXDescriptor();

};

