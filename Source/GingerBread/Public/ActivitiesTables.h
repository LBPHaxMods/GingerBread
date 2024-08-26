#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ActivitiesTables.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class GINGERBREAD_API UActivitiesTables : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* ActivitiesTables[5];
    
public:
    UActivitiesTables();

};

