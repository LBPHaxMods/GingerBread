#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IndividualFish.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FIndividualFish {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitialRelativeLocation;
    
    GINGERBREAD_API FIndividualFish();
};

