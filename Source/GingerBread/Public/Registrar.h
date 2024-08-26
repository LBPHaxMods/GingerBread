#pragma once
#include "CoreMinimal.h"
#include "GingerbreadManager.h"
#include "Registrar.generated.h"

class ARegistrar;
class UActorComponent;
class UObject;

UCLASS(Blueprintable)
class GINGERBREAD_API ARegistrar : public AGingerbreadManager {
    GENERATED_BODY()
public:
    ARegistrar(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Unregister(const FName& Tag, UActorComponent* component);
    
    UFUNCTION(BlueprintCallable)
    void Register(const FName& Tag, UActorComponent* component);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ARegistrar* GetInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetComponents(const FName& Tag, TArray<UActorComponent*>& ComponentsOut) const;
    
};

