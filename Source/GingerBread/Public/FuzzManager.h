#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FuzzManager.generated.h"

class UMaterialInstanceConstant;

UCLASS(Blueprintable)
class GINGERBREAD_API AFuzzManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> MaterialArray;
    
public:
    AFuzzManager(const FObjectInitializer& ObjectInitializer);

};

