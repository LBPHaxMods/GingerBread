#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PSNLinkManager.generated.h"

class UPSNLinkManager;

UCLASS(Blueprintable)
class GINGERBREAD_API UPSNLinkManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOTGLoginRequesting;
    
public:
    UPSNLinkManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPSNLinkManager* GetInstance(const UObject* WorldContextObject);
    
};

