#pragma once
#include "CoreMinimal.h"
#include "PSNObjectID.h"
#include "ActivityBossFightItem.h"
#include "ActivityRow.h"
#include "ActivityVoidItem.h"
#include "ActivityZoneItem.h"
#include "ActivityRowExplorer.generated.h"

USTRUCT(BlueprintType)
struct FActivityRowExplorer : public FActivityRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFillupHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PrefixHelperFillup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActivityBossFightItem> Bosses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActivityZoneItem> Zones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActivityVoidItem> Voids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPSNObjectID VisitZomZomShop;
    
    GINGERBREAD_API FActivityRowExplorer();
};

