#pragma once
#include "CoreMinimal.h"
#include "CostumeItemLoadedMeshes.h"
#include "SackboyMeshCreateRequest.generated.h"

class UCostumeSkinDescriptor;
class USkeletalMesh;
class USumoHair;

USTRUCT(BlueprintType)
struct FSackboyMeshCreateRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SackboyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USumoHair*> HairAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCostumeItemLoadedMeshes> NonMergedCostumeItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCostumeSkinDescriptor* CostumeSkinDescriptor;
    
    GINGERBREAD_API FSackboyMeshCreateRequest();
};

