#pragma once
#include "CoreMinimal.h"
#include "EMamapedeActivity.h"
#include "MamapedeActivity.h"
#include "MamapedeRageActivity.generated.h"

UCLASS(Blueprintable)
class UMamapedeRageActivity : public UMamapedeActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMamapedeActivity* JumpFromWallActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMamapedeActivity* RageCrackingActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMamapedeActivity* RageCentreActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMamapedeActivity* RageHeadPopActivity;
    
public:
    UMamapedeRageActivity();

    UFUNCTION(BlueprintCallable)
    void SubActivityComplete(EMamapedeActivity CompletedActivity);
    
};

