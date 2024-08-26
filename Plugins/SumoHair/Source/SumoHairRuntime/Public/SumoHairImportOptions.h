#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SumoHairImportOptions.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class SUMOHAIRRUNTIME_API USumoHairImportOptions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConvertScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapStrandRootToTriangle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* BaseMesh;
    
    USumoHairImportOptions();

};

