#pragma once
#include "CoreMinimal.h"
#include "WAMBaseController.h"
#include "WAMRandomiseController.generated.h"

UCLASS(Blueprintable)
class AWAMRandomiseController : public AWAMBaseController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfRounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseFixedNumberOfMoles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfMoles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfMolesPerPlayer;
    
public:
    AWAMRandomiseController(const FObjectInitializer& ObjectInitializer);

};

