#pragma once
#include "CoreMinimal.h"
#include "EGingerbreadMatchStatus.h"
#include "GingerbreadHUDComponent.h"
#include "AccoladeHUDComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAccoladeHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UI_Visible;
    
public:
    UAccoladeHUDComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowUI();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMatchStatusChanged(EGingerbreadMatchStatus eMatchStatus);
    
    UFUNCTION(BlueprintCallable)
    void OnGameStateValid(AActor* GameStateActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideUI();
    
};

