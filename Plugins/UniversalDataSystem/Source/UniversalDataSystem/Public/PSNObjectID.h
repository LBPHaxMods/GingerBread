#pragma once
#include "CoreMinimal.h"
#include "EPSNObjectType.h"
#include "PSNObjectID.generated.h"

USTRUCT(BlueprintType)
struct FPSNObjectID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LeaderboardID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPSNObjectType Type;
    
    UNIVERSALDATASYSTEM_API FPSNObjectID();
};

