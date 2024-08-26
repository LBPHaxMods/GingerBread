#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETreasurePodContents.h"
#include "ETreasurePodToys.h"
#include "Templates/SubclassOf.h"
#include "TreasurePodContentSetup.generated.h"

class AGingerbreadAICharacter;
class ASlapFishToy;

USTRUCT(BlueprintType)
struct FTreasurePodContentSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETreasurePodContents Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGingerbreadAICharacter> Enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASlapFishToy> CombatToy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETreasurePodToys Toy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PrizeBubblebReference;
    
    GINGERBREAD_API FTreasurePodContentSetup();
};

