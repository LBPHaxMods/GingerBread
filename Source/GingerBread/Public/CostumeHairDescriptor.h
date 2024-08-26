#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CostumeHairDescriptor.generated.h"

class USkeletalMesh;
class USumoHair;

UCLASS(Blueprintable)
class UCostumeHairDescriptor : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USumoHair* Hair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Mesh;
    
    UCostumeHairDescriptor();

};

