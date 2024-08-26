#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "LandingLevelActor.generated.h"

UCLASS(Blueprintable)
class ALandingLevelActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath TitleScreenMap;
    
    ALandingLevelActor(const FObjectInitializer& ObjectInitializer);

};

