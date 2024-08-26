#pragma once
#include "CoreMinimal.h"
#include "ActivityRow.h"
#include "ActivityRowOpenEnded.generated.h"

USTRUCT(BlueprintType)
struct FActivityRowOpenEnded : public FActivityRow {
    GENERATED_BODY()
public:
    GINGERBREAD_API FActivityRowOpenEnded();
};

