#pragma once
#include "CoreMinimal.h"
#include "HoudiniAssetParameter.h"
#include "HoudiniAssetInput.generated.h"

class UObject;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniAssetInput : public UHoudiniAssetParameter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* m_pDefaultObject;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PrimitiveComponentInputName;
    
    UHoudiniAssetInput();

};

