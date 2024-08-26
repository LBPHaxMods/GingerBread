#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WorldMapMiniSequence.h"
#include "KnittedKnightTrialsUnlockSequence.generated.h"

class ALevelBadge;
class UCurveFloat;
class UParticleSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UKnittedKnightTrialsUnlockSequence : public UWorldMapMiniSequence {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VoidAnim_StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VoidAnim_EndLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoidAnim_CurrentTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VoidAnim_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* VoidVFX;
    
public:
    UKnittedKnightTrialsUnlockSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVoidAnimationComplete_BP();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALevelBadge* GetUnlockSourceLevel() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginVoidAnimation();
    
};

