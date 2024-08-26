#pragma once
#include "CoreMinimal.h"
#include "Costume.h"
#include "UnlockDetails.h"
#include "CostumeQuery.generated.h"

USTRUCT(BlueprintType)
struct FCostumeQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName costumeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCostume Costume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockDetails UnlockDetails;
    
    GINGERBREAD_API FCostumeQuery();
};

