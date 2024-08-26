#pragma once
#include "CoreMinimal.h"
#include "EFloatyBubbleItemType.h"
#include "ReplicatedNonSackboyEntry.generated.h"

class AActor;
class UInteractionComponent;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FReplicatedNonSackboyEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> OverlapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> RootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UInteractionComponent> OverlapComponentInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFloatyBubbleItemType ItemType;
    
    GINGERBREAD_API FReplicatedNonSackboyEntry();
};

