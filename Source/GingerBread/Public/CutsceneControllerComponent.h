#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GingerbreadPlayerId.h"
#include "CutsceneControllerComponent.generated.h"

class AActor;
class ASackboy;
class UTextBlock;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UCutsceneControllerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowSequenceControlOfSackboy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableSackboyCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideSackboy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TeleportSackboys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnSackboysAfterCutscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceSpawn;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TeleportPoints[4];
    
    UCutsceneControllerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowCutsceneName(UTextBlock* TextBlock);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSackboyCreated(const FGingerbreadPlayerId& PlayerId, ASackboy* Sackboy);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCutscenePause(bool IsPaused);
    
    UFUNCTION(BlueprintCallable)
    bool JumpToNextMarkedFrame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCameraTrack() const;
    
    UFUNCTION(BlueprintCallable)
    void CutsceneInit();
    
    UFUNCTION(BlueprintCallable)
    void CutsceneEnd();
    
    UFUNCTION(BlueprintCallable)
    void AddActors(TArray<AActor*> Actors);
    
};

