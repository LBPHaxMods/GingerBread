#pragma once
#include "CoreMinimal.h"
#include "GingerbreadHUDComponent.h"
#include "Templates/SubclassOf.h"
#include "UIOnOverheadSequenceFinishedDelegate.h"
#include "ScoreAmountHUD.generated.h"

class ASackboy;
class UScoreAmountHUDComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UScoreAmountHUD : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIOnOverheadSequenceFinished OnOverheadSequenceFinished;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WidgetName_ScoreAmountWidgets[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChildName_ScoreAmountActors[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChildName_OverheadSequenceActors[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UScoreAmountHUDComponent> ComponentClass;
    
private:
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScoreAmountHUDComponent* ScoreAmountWidgets[4];
    
public:
    UScoreAmountHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowScoresPermanently(bool permanent);
    
    UFUNCTION(BlueprintCallable)
    bool ShowCollectedBellsFromLevel(bool bForceHasJustPlayedLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetCollectabellAmounts();
    
    UFUNCTION(BlueprintCallable)
    void RefreshActivePlayers();
    
    UFUNCTION(BlueprintCallable)
    void OnJoinedPlayerCountChanged(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryItemChange(const FString& ItemName, int32 newQuantity, int32 oldQuantity, ASackboy* playerSackboy);
    
    UFUNCTION(BlueprintCallable)
    void CheckForSynchronisedOverheadActors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllOverheadScoresSynchronised() const;
    
};

