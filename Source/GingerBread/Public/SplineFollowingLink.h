#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SplineFollowingLink.generated.h"

class USplineFollowingEnemyChain;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API USplineFollowingLink : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USplineFollowingEnemyChain* Chain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PanicDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CatchUpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RegularSpeed;
    
    USplineFollowingLink(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPanicking() const;
    
    UFUNCTION(BlueprintCallable)
    void ExtendCatchUpTime(float ExtensionTime);
    
    UFUNCTION(BlueprintCallable)
    void CatchUp(float TimeToReachLink);
    
};

