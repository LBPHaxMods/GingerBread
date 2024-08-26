#pragma once
#include "CoreMinimal.h"
#include "CostumeAssignedDelegate.h"
#include "EUICostumeSelectState.h"
#include "GingerbreadHUDComponent.h"
#include "GingerbreadPlayerId.h"
#include "LeftPressedDelegate.h"
#include "RightPressedDelegate.h"
#include "SelectPressedDelegate.h"
#include "UICostumeSelectStateChangeDelegate.h"
#include "CostumeSelectorWindowHUDComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCostumeSelectorWindowHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUICostumeSelectState CurrentState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSelectPressed OnSelectPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSelectPressed OnBackPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeftPressed OnLeftPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRightPressed OnRightPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCostumeAssigned OnCostumeAssigned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUICostumeSelectStateChange OnEnteredState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUICostumeSelectStateChange OnLeftState;
    
    UCostumeSelectorWindowHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePin(const FGingerbreadPlayerId PlayerId, int32 PinIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCostume(const FGingerbreadPlayerId& PlayerId, const FName& CostumeNameID, bool IsHanger);
    
    UFUNCTION(BlueprintCallable)
    void SelectPressed();
    
    UFUNCTION(BlueprintCallable)
    void RightPressed(const FName CostumeNameID, bool IsHanger);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetSelector();
    
    UFUNCTION(BlueprintCallable)
    void OnNotificationResult(int32 iresult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitCostumeState(EUICostumeSelectState OldState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnterCostumeState(EUICostumeSelectState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnCostumePartNoPermission(const FGingerbreadPlayerId& PlayerId, int32 HangerID, const FName& costumeName);
    
    UFUNCTION(BlueprintCallable)
    void LeftPressed(const FName CostumeNameID, bool IsHanger);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCostumeSelectorEnable() const;
    
    UFUNCTION(BlueprintCallable)
    FGingerbreadPlayerId GetControllingPlayerId();
    
    UFUNCTION(BlueprintCallable)
    void EnableCostumeSelector(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CurrentlySelectedCostume(FName& CostumeNameID, bool& IsHanger);
    
    UFUNCTION(BlueprintCallable)
    void BackPressed();
    
    UFUNCTION(BlueprintCallable)
    void AssignCostume(const FName CostumeNameID, bool IsHanger);
    
};

