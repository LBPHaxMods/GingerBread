#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnQuantityChangedEventDelegate.h"
#include "PlayerInventory.generated.h"

class ASackboy;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UPlayerInventory : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuantityChangedEvent OnItemQuantityChange;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASackboy* OwnerPlayerSackboy;
    
public:
    UPlayerInventory(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ModifyCollectabellQuantity(const int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static FName GetItemName_CreativeOrb();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCollectabellCountChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCollectabellCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAdventureStorageItemCount(const FName ItemName) const;
    
    UFUNCTION(BlueprintCallable)
    void AddAdventureItemCount(const FName ItemName, const int32 Count);
    
};

