#pragma once
#include "CoreMinimal.h"
#include "EESportsTier.h"
#include "GingerbreadWidget.h"
#include "PSCompeteTierBaseWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPSCompeteTierBaseWidget : public UGingerbreadWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TournamentID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EESportsTier tier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCurrentTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RequiredTimeForTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPlaySetupAnimation;
    
public:
    UPSCompeteTierBaseWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTier(EESportsTier InTier);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetIsLoading(bool IsLoading);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetIsCurrentTier(bool IsCurrentTier);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EESportsTier GetTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRequiredTimeForTier() const;
    
};

