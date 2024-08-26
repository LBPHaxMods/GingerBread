#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIConfigBase.generated.h"

UCLASS(Abstract, Blueprintable)
class GINGERBREAD_API UAIConfigBase : public UObject {
    GENERATED_BODY()
public:
    UAIConfigBase();

};

