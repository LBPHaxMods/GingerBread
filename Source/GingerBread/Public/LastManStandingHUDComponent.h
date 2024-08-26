#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GingerbreadHUDComponent.h"
#include "LastManStandingHUDComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULastManStandingHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    ULastManStandingHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Show(bool Visibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveLMSUpdate(int32 NumPlayers, int32 LivePlayers, int32 MaxLives, int32 CurrentLives);
    
    UFUNCTION(BlueprintCallable)
    void OnNFLastManStandingUIChanged(int32 NumPlayers, int32 LivePlayers, int32 MaxLives, int32 CurrentLives);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInfiniteLivesChanged(bool InfiniteLives);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D GetWidgetScreenCoords();
    
};

