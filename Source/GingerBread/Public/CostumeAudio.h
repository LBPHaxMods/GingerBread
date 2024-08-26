#pragma once
#include "CoreMinimal.h"
#include "CostumeAudio.generated.h"

class UAkAudioBank;
class UCostumeItemSoundFXDescriptor;

USTRUCT(BlueprintType)
struct FCostumeAudio {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAkAudioBank>> requiredBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCostumeItemSoundFXDescriptor* footstepsCostumeItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCostumeItemSoundFXDescriptor* movementCostumeItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCostumeItemSoundFXDescriptor* voxCostumeItem;
    
    GINGERBREAD_API FCostumeAudio();
};

