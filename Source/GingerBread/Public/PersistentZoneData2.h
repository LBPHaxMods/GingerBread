#pragma once
#include "CoreMinimal.h"
#include "ELevelType.h"
#include "EZoneState.h"
#include "PersistentZoneData2.generated.h"

USTRUCT(BlueprintType)
struct FPersistentZoneData2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelType WorldID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZoneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZoneState ZoneState;
    
    GINGERBREAD_API FPersistentZoneData2();
};

