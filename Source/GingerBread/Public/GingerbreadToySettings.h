#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GingerbreadToySettings.generated.h"

class AActor;

UCLASS(Blueprintable, DefaultConfig, Config=GingerBread)
class GINGERBREAD_API UGingerbreadToySettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<AActor>> PossibleTransitionToys;
    
    UGingerbreadToySettings();

};

