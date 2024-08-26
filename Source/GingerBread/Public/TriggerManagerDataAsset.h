#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "TriggerManagerDataAsset.generated.h"

class AActor;

UCLASS(Blueprintable)
class GINGERBREAD_API UTriggerManagerDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, AActor*> GuidActorLookup;
    
    UTriggerManagerDataAsset();

};

