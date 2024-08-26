#pragma once
#include "CoreMinimal.h"
#include "CostumeItemEquipDescriptor.h"
#include "ECostumeItemCategory.h"
#include "GingerbreadWidget.h"
#include "IndividualSackboyInterface_C.h"
#include "IndividualSackboyCustomiserWidget_C.generated.h"

class UCostumeComponent;

UCLASS(Blueprintable, EditInlineNew)
class UIndividualSackboyCustomiserWidget_C : public UGingerbreadWidget, public IIndividualSackboyInterface_C {
    GENERATED_BODY()
public:
    UIndividualSackboyCustomiserWidget_C();

protected:
    UFUNCTION(BlueprintCallable)
    void OnItemBought(FName ItemName);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitaliseShopData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetWardrobeCategoryList(ECostumeItemCategory Category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetStockCategoryList(ECostumeItemCategory Category) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EquipRandomItems(UCostumeComponent* CostumComponent, TArray<FCostumeItemEquipDescriptor>& equipItems);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearShopData();
    

    // Fix for true pure virtual functions not being implemented
};

