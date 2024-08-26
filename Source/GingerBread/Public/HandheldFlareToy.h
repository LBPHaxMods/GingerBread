#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "HandheldFlareToy.generated.h"

class ASackboy;
class UAkAudioEvent;
class UAkComponent;
class UCapsuleComponent;
class UParticleSystemComponent;
class USackboyToyComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API AHandheldFlareToy : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USackboyToyComponent* ToyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FlareParticleEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmitterColorParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopTimeOnParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseSackboyColor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnPickUpAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnDroppedAudioEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ParticlesEnabled, meta=(AllowPrivateAccess=true))
    bool ParticlesEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ParticleColour, meta=(AllowPrivateAccess=true))
    FLinearColor ParticleColour;
    
public:
    AHandheldFlareToy(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetFlareEmitterColor(const FLinearColor& Color);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ParticlesEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ParticleColour();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFlareReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFlarePickedUp();
    
private:
    UFUNCTION(BlueprintCallable)
    void FlareThrown(ASackboy* InSackboy, FVector throwVelocity, int32 throwPower);
    
    UFUNCTION(BlueprintCallable)
    void FlarePickedUp(ASackboy* InSackboy);
    
    UFUNCTION(BlueprintCallable)
    void FlareDropped(ASackboy* InSackboy);
    
};

