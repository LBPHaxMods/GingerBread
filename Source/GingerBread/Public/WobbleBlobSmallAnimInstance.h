#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EWobbleBlobBaseAnims.h"
#include "WobbleBlobSmallAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UWobbleBlobSmallAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWobbleBlobBaseAnims::Type> BlobState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInflating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Burst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDeflating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Compress;
    
public:
    UWobbleBlobSmallAnimInstance();

};

