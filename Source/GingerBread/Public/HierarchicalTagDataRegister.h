#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HierarchicalTagData.h"
#include "HierarchicalTagDataRegister.generated.h"

UCLASS(Blueprintable)
class UHierarchicalTagDataRegister : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHierarchicalTagData DefaultTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHierarchicalTagData> TagDataList;
    
    UHierarchicalTagDataRegister();

};

