#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "LookAtComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API ULookAtComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator FBXAcclimatisationRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CustomBoneRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClampYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClampYawAngle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LookAtActor, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Rep_ActorToLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LookAtPosition, meta=(AllowPrivateAccess=true))
    FVector Rep_PositionToLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BoneOrSocketDebugEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EyeLocationDebugEnabled;
    
public:
    ULookAtComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopLooking();
    
    UFUNCTION(BlueprintCallable)
    bool StartToLookAtPosition(FVector _position);
    
    UFUNCTION(BlueprintCallable)
    bool StartToLookAtActor(AActor* _actor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_LookAtPosition();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LookAtActor();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetYaw();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPitch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoneYaw();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBonePitch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBigChange();
    
};

