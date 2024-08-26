#pragma once
#include "CoreMinimal.h"
#include "EConnectionQuality.h"
#include "GingerbreadSessionSearchResult.generated.h"

USTRUCT(BlueprintType)
struct FGingerbreadSessionSearchResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WorldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConnectionQuality ConnectionQuality;
    
    GINGERBREAD_API FGingerbreadSessionSearchResult();
};

