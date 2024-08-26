#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ActivityWeightData.h"
#include "ESackboyActivity.h"
#include "ActivityData.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API UActivityData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESackboyActivity, FActivityWeightData> ActivityWeights;
    
    UActivityData();

};

