#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "KeySKSkeletonAnimBlueprint.generated.h"

// Delegate declaration
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FKeySKSkeletonAnimBlueprintDelegate);

UCLASS(Blueprintable, NonTransient)
class UKeySKSkeletonAnimBlueprint : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsedKey;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeySKSkeletonAnimBlueprintDelegate IntroFinished;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeySKSkeletonAnimBlueprintDelegate OutroFinished;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeySKSkeletonAnimBlueprintDelegate UsedFinished;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeySKSkeletonAnimBlueprintDelegate AddKeyFinished;
    
    UKeySKSkeletonAnimBlueprint();

};

