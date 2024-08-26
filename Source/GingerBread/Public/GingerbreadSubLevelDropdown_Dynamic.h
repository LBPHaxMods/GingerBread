#pragma once
#include "CoreMinimal.h"
#include "GingerbreadSubLevelDropdown.h"
#include "GingerbreadSubLevelDropdown_Dynamic.generated.h"

USTRUCT(BlueprintType)
struct FGingerbreadSubLevelDropdown_Dynamic : public FGingerbreadSubLevelDropdown {
    GENERATED_BODY()
public:
    GINGERBREAD_API FGingerbreadSubLevelDropdown_Dynamic();
};

