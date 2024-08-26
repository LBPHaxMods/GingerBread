#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BeginFadeDelegate.h"
#include "LockStateChangedDelegateDelegate.h"
#include "MaterialParamIndices.h"
#include "TouchScreenAppBaseComponent.generated.h"

class ATouchScreen;
class UCurveFloat;
class UMaterialInstanceDynamic;
class USceneComponent;
class UTimelineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UTouchScreenAppBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FadeFloatCurve;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockStateChangedDelegate LockChangedState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeginFade FadeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortPriority;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialParamIndices> TransformUpdateDyMatIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEssential;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetWhenActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideCodeGeneratedVisuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> AppComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AppName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* FadeTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATouchScreen* ParentTouchScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DynamicMaterialInstances;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Locked, meta=(AllowPrivateAccess=true))
    bool bLocked;
    
public:
    UTouchScreenAppBaseComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void UpdateLockState_ServerRPC(bool bNewLocked);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPage(const int32 NewPage);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Locked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBSODActive(bool bActivated);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBSOD(float Duration);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPage() const;
    
    UFUNCTION(BlueprintCallable)
    USceneComponent* GetAppRoot();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FadeTimelineFinishedCallback();
    
    UFUNCTION(BlueprintCallable)
    void FadeTimelineCallback(const float val);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TransformUpdated(USceneComponent* UpdatedComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ComponentOnContruction();
    
};

