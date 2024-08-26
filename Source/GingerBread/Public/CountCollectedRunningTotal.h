#pragma once
#include "CoreMinimal.h"
#include "LevelDataBase.h"
#include "CountCollectedRunningTotal.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API UCountCollectedRunningTotal : public ULevelDataBase {
    GENERATED_BODY()
public:
    UCountCollectedRunningTotal();

    UFUNCTION(BlueprintCallable)
    void IncrementCollected();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotal() const;
    
    UFUNCTION(BlueprintCallable)
    float GetPercentageCollected();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCollected() const;
    
    UFUNCTION(BlueprintCallable)
    void BankUnsavedData();
    
    UFUNCTION(BlueprintCallable)
    void AddToTotal(int32 Number);
    
};

