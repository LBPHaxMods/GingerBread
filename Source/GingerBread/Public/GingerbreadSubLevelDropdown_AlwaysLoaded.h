#pragma once
#include "CoreMinimal.h"
#include "GingerbreadSubLevelDropdown.h"
#include "GingerbreadSubLevelDropdown_AlwaysLoaded.generated.h"

USTRUCT(BlueprintType)
struct FGingerbreadSubLevelDropdown_AlwaysLoaded : public FGingerbreadSubLevelDropdown {
    GENERATED_BODY()
public:
    GINGERBREAD_API FGingerbreadSubLevelDropdown_AlwaysLoaded();
};

