#pragma once
#include "CoreMinimal.h"
#include "EESportsBoardSectionType.h"
#include "ESportsPlayerData.h"
#include "ESportsLeaderboardSectionItem.generated.h"

USTRUCT(BlueprintType)
struct FESportsLeaderboardSectionItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EESportsBoardSectionType Section;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FESportsPlayerData> Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SectionTitleText;
    
    GINGERBREAD_API FESportsLeaderboardSectionItem();
};

