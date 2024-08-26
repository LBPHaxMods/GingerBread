#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TournamentCollectabell.h"
#include "CollectabellConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Collectabell)
class GINGERBREAD_API UCollectabellConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmallCollectabellValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LargeCollectabellValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTournamentCollectabell> TournamentCollectabells;
    
    UCollectabellConfig();

};

