#pragma once
#include "CoreMinimal.h"
#include "EGBBoneModificationMode.generated.h"

UENUM(BlueprintType)
enum EGBBoneModificationMode {
    GB_BMM_Ignore,
    GB_BMM_Replace,
    GB_BMM_Additive,
};

