#pragma once
#include "CoreMinimal.h"
#include "GingerbreadHUDComponent.h"
#include "EnemyCounterHUDComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnemyCounterHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UEnemyCounterHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWaveNum(int32 waveNum, int32 waveTotal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnemyCount(int32 EnemyCount, bool InstantUpdate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnableCounter(bool Enabled, bool CloseOnTargetReached);
    
};

