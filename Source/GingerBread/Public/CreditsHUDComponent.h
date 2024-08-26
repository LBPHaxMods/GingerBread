#pragma once
#include "CoreMinimal.h"
#include "GingerbreadHUDComponent.h"
#include "OnCreditsEventDelegate.h"
#include "OnCreditsVoteForSkipDelegate.h"
#include "CreditsHUDComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCreditsHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreditsEvent OnCreditsStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreditsEvent OnCreditsFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreditsVoteForSkip OnCreditsVoteForSkip;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreditsEvent OnCreditsTriggerSequenceEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEndSequence;
    
public:
    UCreditsHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVotes(const int32 NumVotes, const int32 VotesMax);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowCredits();
    
    UFUNCTION(BlueprintCallable)
    void SetIsEndSequence(const bool bEndSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndCredits();
    
};

