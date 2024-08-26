#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ActivityObject.generated.h"

class UActivityTask;

UCLASS(Blueprintable)
class GINGERBREAD_API UActivityObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UActivityTask*> Tasks;
    
public:
    UActivityObject();

};

