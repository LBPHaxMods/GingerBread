#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Launchable.h"
#include "Paintbrush.generated.h"

class ASackboy;
class UAkAudioEvent;
class UAkComponent;
class UCapsuleComponent;
class UGameplayTagComponent;
class UMaterialInstanceDynamic;
class UParticleSystem;
class UPhysicsAudioComponent;
class USackboyToyComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API APaintbrush : public AActor, public ILaunchable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USackboyToyComponent* ToyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* GameplayTagComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsAudioComponent* PhysicsAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SwingForehandEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SwingBackhandEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SuperSlapPaintEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SwingEffectOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SwingEffectRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VFXColorParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialColorParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DropPaintBrushSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ThrowPaintBrushSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PickUpPaintBrushSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RegularSlapSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SuperSlapStartSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SuperSlapEndSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FlutterJumpSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FlutterJumpEndSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WalkingSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RollStartSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RollEndSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RollEvadeSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DownwardStrikeSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DownwardStrikeImpactSFX;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DynamicInstanceMaterials;
    
public:
    APaintbrush(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateBrushColor(const FLinearColor& NewColor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnThrowToyCompleted(ASackboy* InSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnThrowToy(ASackboy* theSackboy, const FVector throwVelocity, int32 throwPower);
    
    UFUNCTION(BlueprintCallable)
    void OnSwingToy(ASackboy* InSackboy, bool backhandSwing);
    
    UFUNCTION(BlueprintCallable)
    void OnSuperSlapStopped(ASackboy* InSackboy, bool interrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnSuperSlapStarted(ASackboy* InSackboy, bool backhandSwing);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyStartedFlutterJump(ASackboy* InSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyRollStart(ASackboy* InSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyRollEvade(ASackboy* InSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyRollEnd(ASackboy* InSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyFootDown(ASackboy* Sackboy, bool isRightFoot, bool isLanding, FVector footNormal, FVector footPos);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyEndedFlutterJump(ASackboy* InSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyDownwardStrikeImpact(ASackboy* InSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyDownwardStrike(ASackboy* InSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnPickedUp(ASackboy* theSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnDropped(ASackboy* theSackboy);
    

    // Fix for true pure virtual functions not being implemented
};

