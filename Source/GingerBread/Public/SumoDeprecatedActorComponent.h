#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SumoDeprecatedActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API USumoDeprecatedActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReplacementBlutility;
    
public:
    USumoDeprecatedActorComponent(const FObjectInitializer& ObjectInitializer);

};

