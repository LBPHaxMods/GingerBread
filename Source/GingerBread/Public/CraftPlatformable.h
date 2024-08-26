#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CraftPlatformable.generated.h"

class AActor;
class ASackboy;

UINTERFACE(Blueprintable)
class GINGERBREAD_API UCraftPlatformable : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API ICraftPlatformable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitedCraftingPlatformBP(AActor* CraftingPlatform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnteredCraftingPlatformBP(AActor* CraftingPlatform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MovePlayersToObject(const TArray<ASackboy*>& sacks);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetPlayersFromObject(TArray<ASackboy*>& Sackboys);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetPlayerCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitPlayersFromObject();
    
};

