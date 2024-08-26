#pragma once
#include "CoreMinimal.h"
#include "SpecialCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SpecialCharacter;
    
    GINGERBREAD_API FSpecialCharacterData();
};

