#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TreasureItem.h"
#include "TreasureDatabase.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API UTreasureDatabase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTreasureItem> items;
    
    UTreasureDatabase();

};

