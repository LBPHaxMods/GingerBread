#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Activatable.h"
#include "ETeleporterPlayerSequence.h"
#include "ETeleporterTransition.h"
#include "LevelObject.h"
#include "Templates/SubclassOf.h"
#include "Teleporter.generated.h"

class ALevelSequenceActor;
class UCutsceneTriggerComponent;
class UScreenTransitionsHUDComponent;

UCLASS(Blueprintable)
class ATeleporter : public AActor, public IActivatable, public ILevelObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTeleportCompleteDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActivateTeleporterDelegate, int32, PlayerIndex);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActivateTeleporterDelegate ActivateTeleporter;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeleportCompleteDelegate OnTeleportComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCutsceneTriggerComponent> CutsceneComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UScreenTransitionsHUDComponent> ScreenTransitionComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeleporterTransition TransitionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeleporterPlayerSequence TeleportOrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TeleportAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RemoveGloop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CutsceneDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LevelSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Position1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Position2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Position3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Position4;
    
public:
    ATeleporter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Server_StartCameraTransition();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_TriggerStartCutscene();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Teleport();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ScreenTransitionOn();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ScreenTransitionOff();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableOffscreenCheck();
    
    UFUNCTION(BlueprintCallable)
    void DisableOffscreenCheck();
    
    UFUNCTION(BlueprintCallable)
    void ActivateEvent(int32 PlayerIndex);
    

    // Fix for true pure virtual functions not being implemented
};

