#pragma once
#include "CoreMinimal.h"
#include "EGruntyStackFallingState.h"
#include "EGruntyStackShieldState.h"
#include "GruntyStackActor.generated.h"

class AGingerbreadAICharacter;
class UGruntyStackComponent;

USTRUCT(BlueprintType)
struct FGruntyStackActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AGingerbreadAICharacter> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UGruntyStackComponent> StackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGruntyStackFallingState FallingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallAboveGapSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGruntyStackShieldState ShieldState;
    
    UPROPERTY(EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    uint64 CollisionPairID;
    
    GINGERBREAD_API FGruntyStackActor();
};

