#pragma once
#include "CoreMinimal.h"
#include "CustomFieldsBase.h"
#include "BootStartCustomFields.generated.h"

UCLASS(Blueprintable)
class UBootStartCustomFields : public UCustomFieldsBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString build_flavour;
    
public:
    UBootStartCustomFields();

};

