#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SubjectSplinePhysicalEndDelegateDelegate.h"
#include "SubjectSplineVirtualEndDelegateDelegate.h"
#include "SplineLeaderSubjectComponent.generated.h"

class ASplineFollowerLeader;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USplineLeaderSubjectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubjectSplineVirtualEndDelegate SplineEndReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubjectSplinePhysicalEndDelegate SplinePhysicalEndReached;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ASplineFollowerLeader* SplineFollowerLeader;
    
public:
    USplineLeaderSubjectComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Unpause();
    
    UFUNCTION(BlueprintCallable)
    void RESET(float SplinePosition);
    
    UFUNCTION(BlueprintCallable)
    void PAUSE();
    
};

