#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ActivityTask.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API UActivityTask : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TaskID;
    
public:
    UActivityTask();

};

