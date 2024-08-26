#pragma once
#include "CoreMinimal.h"
#include "CustomEvent.h"
#include "AccountLinked.generated.h"

UCLASS(Blueprintable)
class UAccountLinked : public UCustomEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString steam_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString epic_id;
    
public:
    UAccountLinked();

};

