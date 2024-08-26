#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "Launchable.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class GINGERBREAD_API ULaunchable : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API ILaunchable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaunchedBP(AActor* LaunchedBy, FVector InitialVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLaunchableLaunched(AActor* LaunchedBy, FVector InitialVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetPhysicsBones();
    
};

