#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EPersistentAudioType.h"
#include "PersistentAudioInfo.h"
#include "GameplayAudioManagerDataAsset.generated.h"

UCLASS(Blueprintable)
class UGameplayAudioManagerDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPersistentAudioType, FPersistentAudioInfo> PersistentAudioSettings;
    
    UGameplayAudioManagerDataAsset();

};

