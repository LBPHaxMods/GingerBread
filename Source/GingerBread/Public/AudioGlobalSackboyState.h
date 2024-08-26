#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AudioGlobalSackboyState.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UAudioGlobalSackboyState : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fIdleCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fExtendedHOverStateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_IsIdleEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_IsNotIdleEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_IsHoveringEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_IsNotHoveringEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_ExtendedHoveringStateName;
    
    UAudioGlobalSackboyState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SackBoyIsNotIdle();
    
    UFUNCTION(BlueprintCallable)
    void SackboyIsNotHovering();
    
    UFUNCTION(BlueprintCallable)
    void SackboyIsIdle();
    
    UFUNCTION(BlueprintCallable)
    void SackboyIsHovering();
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyIdleCooldownEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnExtendedHoverTimeReached();
    
    UFUNCTION(BlueprintCallable)
    void EnableSackboyIdleStateOverride();
    
    UFUNCTION(BlueprintCallable)
    void DisableSackboyIdleStateOverride();
    
};

