#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/Scene.h"
#include "CameraDOFSettings.h"
#include "EGingerModifierType.h"
#include "FocusSettings.h"
#include "GingerbreadCameraModifier.generated.h"

class AActor;
class AGingerbreadCameraManager;

UCLASS(Blueprintable)
class UGingerbreadCameraModifier : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExclusive: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGingerModifierType ModifierType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGingerbreadCameraManager* Sumo_CameraOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlphaInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlphaOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Alpha;
    
public:
    UGingerbreadCameraModifier();

protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void Sumo_BlueprintModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, FPostProcessSettings& PostProcessSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void Sumo_BlueprintModifyDOFSettings(float DeltaTime, const FCameraDOFSettings& DOFSettingsIn, FCameraDOFSettings& DOFSettingsOut);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void Sumo_BlueprintModifyCamera(float DeltaTime, const FFocusSettings& FocusSettingsIn, FFocusSettings& FocusSettingsOut);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetViewTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableModifier();
    
    UFUNCTION(BlueprintCallable)
    void DisableModifier(bool bImmediate);
    
};

