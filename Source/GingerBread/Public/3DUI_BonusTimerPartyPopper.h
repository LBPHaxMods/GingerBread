#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "3DUI_BonusTimerPartyPopper.generated.h"

class A3DUI_BonusTimerPartyPopper;
class UHudRootSceneComponent;
class UHudStaticMeshComponent;
class UParticleSystemComponent;
class UVertexAnimatedMeshComponent;

UCLASS(Blueprintable)
class A3DUI_BonusTimerPartyPopper : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPopperPoppedDelegate, A3DUI_BonusTimerPartyPopper*, popper);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPopperOutroDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPopperFinishedDelegate, A3DUI_BonusTimerPartyPopper*, finishedPopper);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudRootSceneComponent* HudRootScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVertexAnimatedMeshComponent* PopperVertexMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PopperConfettiVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* DebugConfetti;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPopperFinishedDelegate OnPopperFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPopperPoppedDelegate OnPopperPopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPopperOutroDelegate OnPopperOutro;
    
    A3DUI_BonusTimerPartyPopper(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PlayPopper();
    
    UFUNCTION(BlueprintCallable)
    void OnClipEnded(int32 ClipIndex);
    
    UFUNCTION(BlueprintCallable)
    void HidePopper();
    
    UFUNCTION(BlueprintCallable)
    void GetIntroLength(float& Length);
    
    UFUNCTION(BlueprintCallable)
    void AnticipatePopper();
    
};

