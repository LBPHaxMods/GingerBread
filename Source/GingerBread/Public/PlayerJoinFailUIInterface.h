#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPlayerFailStatus.h"
#include "EPlayerJoinFailResponse.h"
#include "GingerbreadPlayerId.h"
#include "PlayerJoinFailUIInterface.generated.h"

class UPlayerJoinManager;

UCLASS(Blueprintable)
class GINGERBREAD_API UPlayerJoinFailUIInterface : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerJoinManager* PlayerJoinManager;
    
public:
    UPlayerJoinFailUIInterface();

    UFUNCTION(BlueprintNativeEvent)
    void ShowUI(EPlayerFailStatus FailReason, const FGingerbreadPlayerId& PlayerId, int64 BytesRequired, bool MidPlay);
    
    UFUNCTION(BlueprintCallable)
    void SetFailResponse(const FGingerbreadPlayerId& PlayerId, bool MidPlay, EPlayerJoinFailResponse Response);
    
};

