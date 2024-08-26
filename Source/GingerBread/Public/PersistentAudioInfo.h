#pragma once
#include "CoreMinimal.h"
#include "PersistentAudioInfo.generated.h"

USTRUCT(BlueprintType)
struct FPersistentAudioInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResetEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResetTime;
    
    GINGERBREAD_API FPersistentAudioInfo();
};

