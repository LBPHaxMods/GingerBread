#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MemoryOrbUIActor.h"
#include "Templates/SubclassOf.h"
#include "3DUI_LevelMemoryOrbCounter.generated.h"

class A3DUI_MemoryOrb;
class ASackboy;
class UAnimMontage;
class UChildActorComponent;
class UGingerbreadWidgetComponent;
class UHudAmbientMovementComponent;
class UHudFishingLineComponent;
class UHudSkeletalMeshComponent;
class UHudStaticMeshComponent;
class USceneComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class A3DUI_LevelMemoryOrbCounter : public AMemoryOrbUIActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FShimmerEndDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOrbCollectedAnimFinishedDelegate, int32, orbIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDisplayStatusChangedDelegate, bool, isDisplaying);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisplayStatusChangedDelegate OnDisplayStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOrbCollectedAnimFinishedDelegate OnOrbCollectedAnimFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShimmerEndDelegate OnShimmerEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStaticMesh>> CloudMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShatteredOrbCounterLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOrbSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CollectedOrbs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* IntroMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OutroMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* HitReactCentreMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* HitReactLeftMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* HitReactRightMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* DefaultCloudMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<A3DUI_MemoryOrb> MemoryOrbBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ShatteredOrb1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ShatteredOrb2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ShatteredOrb3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ShatteredOrb4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudAmbientMovementComponent* HudAmbientMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudSkeletalMeshComponent* OrbSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* CloudStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudFishingLineComponent* FishingLine1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudFishingLineComponent* FishingLine2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FishingLineTarget1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FishingLineTarget2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGingerbreadWidgetComponent* OrbTotalWidgetComponent;
    
public:
    A3DUI_LevelMemoryOrbCounter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateOrbCollectedState(int32 orbIndex, bool animate);
    
    UFUNCTION(BlueprintCallable)
    void ShowShatteredOrb(FVector WorldLocation, int32 current, int32 Total, ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable)
    void SetupActor();
    
    UFUNCTION(BlueprintCallable)
    void SetOrbTextures();
    
    UFUNCTION(BlueprintCallable)
    void SetOrbCount(int32 orbCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshOrbCountWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnOutroBlendOut(UAnimMontage* Montage, bool interrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnOrbActorCollectedAnimFinished(A3DUI_MemoryOrb* callingOrb);
    
    UFUNCTION(BlueprintCallable)
    void OnCloudMeshLoaded();
    
    UFUNCTION(BlueprintCallable)
    FName GetOrbSocketName(int32 orbIndex);
    
    UFUNCTION(BlueprintCallable)
    FVector GetOrbSlotPosition(int32 orbIndex);
    
    UFUNCTION(BlueprintCallable)
    void EventChangeVisibility(bool NewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CacheWidget();
    
    UFUNCTION(BlueprintCallable)
    void Anim_PlayShimmer();
    
    UFUNCTION(BlueprintCallable)
    void Anim_PlayOutro();
    
    UFUNCTION(BlueprintCallable)
    void Anim_PlayIntro();
    
    UFUNCTION(BlueprintCallable)
    void Anim_PlayHitReactRight();
    
    UFUNCTION(BlueprintCallable)
    void Anim_PlayHitReactLeft();
    
    UFUNCTION(BlueprintCallable)
    void Anim_PlayHitReactFromSlotNum(int32 orbSlot);
    
    UFUNCTION(BlueprintCallable)
    void Anim_PlayHitReactCentre();
    
};

