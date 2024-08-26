#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PhysicsSceneManager.generated.h"

class UPhysicsSceneTagList;

UCLASS(Blueprintable)
class UPhysicsSceneManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPhysicsSceneTagList* SceneTags;
    
public:
    UPhysicsSceneManager();

};

