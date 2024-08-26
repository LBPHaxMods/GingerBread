#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Styling/SlateColor.h"
#include "EESportsTier.h"
#include "ESportsTierPrizeItem.h"
#include "ESportsTrialRow.h"
#include "PSTierDetailsItem.h"
#include "ESportsDataAsset.generated.h"

class UDataTable;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class GINGERBREAD_API UESportsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EESportsTier, FPSTierDetailsItem> TierDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PrizesTable;
    
    UESportsDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTournamentNameText(FName RowName, bool bIsUnlocked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTierTopOrBottomText(EESportsTier tier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetTierParticeIconTexture(EESportsTier tier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTierLimitText(EESportsTier tier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTierLabelText(EESportsTier tier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetTierIconTexture(EESportsTier tier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTierCombinedText(EESportsTier tier, bool bAddTierText, bool bAddTopBottom, bool bAddLimitValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor GetTierColor(EESportsTier tier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FESportsTierPrizeItem GetPrizeItem(FName RowName, EESportsTier tier) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetMaterialParamNameForPrizeTexture(FName TournamentID, EESportsTier tier, const UTexture2D* InTexture, FName& OutParamName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FESportsTrialRow GetESportsTrialRow(FName RowName) const;
    
};

