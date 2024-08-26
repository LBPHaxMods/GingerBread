#pragma once
#include "CoreMinimal.h"
#include "HierarchicalTagData.generated.h"

USTRUCT(BlueprintType)
struct FHierarchicalTagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_TagString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_ParentString;
    
    GINGERBREAD_API FHierarchicalTagData();
};

