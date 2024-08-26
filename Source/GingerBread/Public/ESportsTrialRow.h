#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EESportsTier.h"
#include "ESportsTierPrizeItem.h"
#include "ESportsTrialRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FESportsTrialRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BrandingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TournamentTrialNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PrefixLevelTournament;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PrefixLevelTrialUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BadgeTextureSoft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EESportsTier, FESportsTierPrizeItem> TierPrizes;
    
    GINGERBREAD_API FESportsTrialRow();
};

