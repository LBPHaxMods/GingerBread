#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VertexAnimationEvent.h"
#include "VertexAnimation.generated.h"

class UTexture;

UCLASS(Blueprintable)
class GINGERBREAD_API UVertexAnimation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* VertexPositionTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* VertexNormalTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FramesPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClipFrameCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClipVertexCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClipDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVertexAnimationEvent> AnimationEvents;
    
    UVertexAnimation();

    UFUNCTION(BlueprintCallable)
    void SetVertexAnimationPositionTexture(UTexture* Texture);
    
    UFUNCTION(BlueprintCallable)
    void SetVertexAnimationNormalTexture(UTexture* Texture);
    
};

