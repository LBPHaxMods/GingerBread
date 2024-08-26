#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PhysicsSceneTagSetup.h"
#include "PhysicsSceneTagList.generated.h"

UCLASS(Blueprintable)
class UPhysicsSceneTagList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PhysicsSceneTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhysicsSceneTagSetup> PhysicsSceneData;
    
    UPhysicsSceneTagList();

};

