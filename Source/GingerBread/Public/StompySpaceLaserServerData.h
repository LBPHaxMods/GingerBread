#pragma once
#include "CoreMinimal.h"
#include "StompySpaceLaserServerData.generated.h"

class AActor;
class UStompySpaceLinkComponent;

USTRUCT(BlueprintType)
struct FStompySpaceLaserServerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> FromActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UStompySpaceLinkComponent> FromActorLinkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ToActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UStompySpaceLinkComponent> ToActorLinkComponent;
    
    GINGERBREAD_API FStompySpaceLaserServerData();
};

