#pragma once
#include "CoreMinimal.h"
#include "PhysicsSceneTagSetup.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsSceneTagSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SceneIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PhysicsSceneTags;
    
    GINGERBREAD_API FPhysicsSceneTagSetup();
};

