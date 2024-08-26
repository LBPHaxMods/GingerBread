#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VexHitReactionSoundCollection.generated.h"

class UAkAudioEvent;

UCLASS(Abstract, Blueprintable)
class UVexHitReactionSoundCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> HitReactionSounds;
    
    UVexHitReactionSoundCollection();

    UFUNCTION(BlueprintCallable)
    UAkAudioEvent* GetRandomHitReaction(int32& RandomHitReactionIndex, int32 IgnoreHitReactionIndex);
    
};

