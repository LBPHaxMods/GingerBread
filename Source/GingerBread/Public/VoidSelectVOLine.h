#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVoidSelectVOType.h"
#include "VoidSelectVOLine.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FVoidSelectVOLine : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoidSelectVOType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Anim;
    
    GINGERBREAD_API FVoidSelectVOLine();
};

