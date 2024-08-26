#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ETargetType.h"
#include "RegistrationComponent.h"
#include "TargetableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UTargetableComponent : public URegistrationComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinActivationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SeparateUpAndSurfaceActivationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpActivationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtAngleTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtAngleToleranceVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RestrictTargetableAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetableAngleLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTargettable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector extents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SplineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawDebug;
    
public:
    UTargetableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTargetWeight(float target_weight);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetType(ETargetType target_type);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetableAngleLimit(float angle_tolerance);
    
    UFUNCTION(BlueprintCallable)
    void SetRestrictTargetableAngle(bool restrict_targetable_angle);
    
    UFUNCTION(BlueprintCallable)
    void SetRadius(float NewRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetMinActivationRange(const float Range);
    
    UFUNCTION(BlueprintCallable)
    void SetLength(float NewLength);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTargettable(const bool isTargettable);
    
    UFUNCTION(BlueprintCallable)
    void SetExtents(const FVector& NewExtents);
    
    UFUNCTION(BlueprintCallable)
    void SetAngleToleranceVertical(float angle_tolerance);
    
    UFUNCTION(BlueprintCallable)
    void SetAngleToleranceHorizontal(float angle_tolerance);
    
    UFUNCTION(BlueprintCallable)
    void SetActivationRange(float activation_range);
    
};

