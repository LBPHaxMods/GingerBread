#pragma once
#include "CoreMinimal.h"
#include "PlayerJoinFailUIInterface.h"
#include "PlayerJoinFailUI.generated.h"

UCLASS(Blueprintable)
class UPlayerJoinFailUI : public UPlayerJoinFailUIInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText mSpaceRequiredText;
    
public:
    UPlayerJoinFailUI();

    UFUNCTION(BlueprintCallable)
    void DialogNotificationResult(int32 Result);
    
};

