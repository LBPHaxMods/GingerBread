#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "VexProjectile.generated.h"

class ASackboy;
class UAkAudioEvent;
class UParticleSystem;

UCLASS(Blueprintable)
class AVexProjectile : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float extraHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASackboy* TargetSackboy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mpChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DisappearPoofParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DisappearPoofSFX;
    
    AVexProjectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupCollisionsBlueprint();
    
    UFUNCTION(BlueprintCallable)
    void SetupCollisions();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialise(FVector NewTargetLocation, float NewExtraHeight, float projectileThrowDuration, ASackboy* NewTargetSackboy, bool NewMpChange);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisappearPoofBlueprint();
    
    UFUNCTION(BlueprintCallable)
    void DisappearPoof();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DamagedBossBlueprint(bool BodyWasDamaged);
    
    UFUNCTION(BlueprintCallable)
    void DamagedBoss(bool BodyWasDamaged);
    
};

