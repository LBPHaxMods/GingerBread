#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EZomZomShopVOType.h"
#include "ZomZomShopVOLine.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FZomZomShopVOLine : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZomZomShopVOType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Anim;
    
    GINGERBREAD_API FZomZomShopVOLine();
};

