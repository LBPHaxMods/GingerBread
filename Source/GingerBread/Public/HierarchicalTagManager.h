#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HierarchicalTagManager.generated.h"

class UHierarchicalTag;
class UHierarchicalTagDataRegister;

UCLASS(Blueprintable)
class UHierarchicalTagManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHierarchicalTag* DefaultTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHierarchicalTag*> TagRegister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHierarchicalTagDataRegister* TagDataTable;
    
public:
    UHierarchicalTagManager();

};

