#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HoudiniAssetParameter.generated.h"

UCLASS(Blueprintable, Config=Editor)
class HOUDINIENGINERUNTIME_API UHoudiniAssetParameter : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* PrimaryObject;
    
public:
    UHoudiniAssetParameter();

};

