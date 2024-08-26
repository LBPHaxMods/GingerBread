#pragma once
#include "CoreMinimal.h"
#include "ELevelType.h"
#include "GingerbreadHUDComponent.h"
#include "OnWorldUnlockSequenceFinishedDelegate.h"
#include "WorldMapSelectHUDComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWorldMapSelectHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWorldUnlockSequenceFinished OnWorldUnlockFinished;
    
    UWorldMapSelectHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnlockWorldOnOpen(const ELevelType WorldID, bool DisableControlAfterUnlock);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWorldForNextOpen(const ELevelType WorldID);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayedUnlockSequenceForWorld(const ELevelType WorldID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HighlightWorld(const ELevelType WorldID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPlayedUnlockSequenceForWorld(const ELevelType WorldID) const;
    
};

