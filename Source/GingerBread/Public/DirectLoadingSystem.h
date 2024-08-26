#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DirectLoadingSystem.generated.h"

class UActivityObject;

UCLASS(Blueprintable)
class GINGERBREAD_API UDirectLoadingSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActivityObject* DirectLoadingActivity;
    
public:
    UDirectLoadingSystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnESportAcceptTermsDialogClose(int32 OptionType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasPendingDirectLoadZomZomShopActivity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasPendingDirectLoadKnightTrialsActivity();
    
};

