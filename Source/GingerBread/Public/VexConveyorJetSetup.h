#pragma once
#include "CoreMinimal.h"
#include "VexConveyorJetSetup.generated.h"

USTRUCT(BlueprintType)
struct FVexConveyorJetSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> JetSetup;
    
    GINGERBREAD_API FVexConveyorJetSetup();
};

