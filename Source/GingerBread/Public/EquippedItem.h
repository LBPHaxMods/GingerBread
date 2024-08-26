#pragma once
#include "CoreMinimal.h"
#include "EquippedItem.generated.h"

class UCostumeItemFX;

USTRUCT(BlueprintType)
struct FEquippedItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCostumeItemFX*> CostumeItemFXCollection;
    
    GINGERBREAD_API FEquippedItem();
};

