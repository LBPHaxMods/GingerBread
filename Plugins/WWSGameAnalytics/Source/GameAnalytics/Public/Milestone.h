#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "Milestone.generated.h"

class UMilestone;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UMilestone : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString milestone_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString milestone_type;
    
    UMilestone();

    UFUNCTION(BlueprintCallable)
    static UMilestone* NewMilestone();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _milestone_id);
    
};

