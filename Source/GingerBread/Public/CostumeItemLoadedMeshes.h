#pragma once
#include "CoreMinimal.h"
#include "EControlMode.h"
#include "CostumeItemLoadedMeshes.generated.h"

class UCostumeHairDescriptor;
class USkeletalMesh;
class USumoHair;

USTRUCT(BlueprintType)
struct FCostumeItemLoadedMeshes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USumoHair* HairAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCostumeHairDescriptor* HairDescriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EControlMode, USkeletalMesh*> PowerUpMeshes;
    
    GINGERBREAD_API FCostumeItemLoadedMeshes();
};

