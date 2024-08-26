#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ESackboyToyAbility.h"
#include "Umbrella.generated.h"

class ASackboy;
class UAkAudioEvent;
class UAkComponent;
class UCapsuleComponent;
class UGameplayTagComponent;
class UPhysicsAudioComponent;
class USackboyToyComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API AUmbrella : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USackboyToyComponent* ToyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* GameplayTagComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* UmbrellaMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsAudioComponent* PhysicsAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OpenUmbrellaSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CloseUmbrellaSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshRollScale;
    
public:
    AUmbrella(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnThrowToy(ASackboy* theSackboy, const FVector throwVelocity, int32 throwPower);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopBoost(ASackboy* Sackboy);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStopAbility(ESackboyToyAbility Ability);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartFluttering();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartBoost(ASackboy* Sackboy);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStartAbility(ESackboyToyAbility Ability);
    
    UFUNCTION(BlueprintCallable)
    void OnRollStop(ASackboy* theSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnRollStart(ASackboy* theSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnPickedUp(ASackboy* theSackboy);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenUmbrella();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDropped(ASackboy* theSackboy);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseUmbrella();
    
};

