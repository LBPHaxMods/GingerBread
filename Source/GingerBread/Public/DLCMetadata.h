#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UnlockImplementorIface.h"
#include "DLCMetadata.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UDLCMetadata : public UObject, public IUnlockImplementorIface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DLCProductData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DLCEntitlementWhitelist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DLCPCMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DLCAutoUnlock;
    
public:
    UDLCMetadata();


    // Fix for true pure virtual functions not being implemented
};

