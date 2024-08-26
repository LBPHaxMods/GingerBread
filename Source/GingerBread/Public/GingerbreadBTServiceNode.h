#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "GingerbreadBTServiceNode.generated.h"

class AGingerbreadAICharacter;
class AGingerbreadAIController;

UCLASS(Abstract, Blueprintable)
class UGingerbreadBTServiceNode : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGingerbreadAIController* AIOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGingerbreadAICharacter* AIChar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowPropertyDetails: 1;
    
public:
    UGingerbreadBTServiceNode();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsServiceActive() const;
    
};

