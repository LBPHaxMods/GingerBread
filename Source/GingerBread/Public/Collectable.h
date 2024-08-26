#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TreasureItem.h"
#include "Collectable.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class GINGERBREAD_API UCollectable : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API ICollectable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual bool SupportsClientCollectionCSP() PURE_VIRTUAL(SupportsClientCollectionCSP, return false;);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnCollected(AActor* CollectingActor);
    
    UFUNCTION()
    virtual void OnClientCollectionCSP(AActor* CollectingActor) PURE_VIRTUAL(OnClientCollectionCSP,);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetValue();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTreasureItem GetDataType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBePickedUp(AActor* CollectingActor);
    
};

