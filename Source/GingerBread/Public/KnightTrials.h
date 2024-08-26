#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ETrialsState.h"
#include "WorldMapInteractableObject.h"
#include "KnightTrials.generated.h"

class ASackboy;
class UAnimMontage;
class UCurveFloat;
class UInteractionComponent;
class USkeletalMeshComponent;
class UWorldMapInteractiveFeatureSpawnPoint;

UCLASS(Blueprintable)
class GINGERBREAD_API AKnightTrials : public AWorldMapInteractableObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerPulseRadiusCm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterPulseRadiusCm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPulseIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPulseIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PulseIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator IdleRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrialsState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrialsState TargetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TargetState, meta=(AllowPrivateAccess=true))
    ETrialsState AUTH_TargetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Animations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OpenAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CloseAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OpenIdleAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* EntryVFXInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMapInteractiveFeatureSpawnPoint* TrialsSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinYankDurationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxYankDurationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MinDurationYankCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MaxDurationYankCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseYank;
    
public:
    AKnightTrials(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePulseIntensity_BP(float Intensity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerExitVFX_BP(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerEntryVFX_BP(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_TargetState_BP();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetState();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSackboyEnteredKnightTrials(ASackboy* Sackboy);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleKnightTrialsHasOpened();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleFinalSackboyEnteredKnightTrials(TArray<ASackboy*>& EnteredSackboys);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AllSackboysEntered_BP();
    
};

