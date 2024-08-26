#pragma once
#include "CoreMinimal.h"
//#include "EBool.h"
#include "EventDetail.h"
#include "TutorialStep.generated.h"

class UTutorialStep;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UTutorialStep : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString step_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool step_status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_tutorial_complete;
    
    UTutorialStep();

    UFUNCTION(BlueprintCallable)
    static UTutorialStep* NewTutorialStep();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _step_id, bool _step_status, bool _is_tutorial_complete);
    
};

