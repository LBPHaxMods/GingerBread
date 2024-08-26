#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PlayGoManager.generated.h"

class UDataTable;
class UPlayGoManager;

UCLASS(Blueprintable)
class GINGERBREAD_API UPlayGoManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* PlayGoDataTable;
    
public:
    UPlayGoManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPlayGoManager* GetInstance(const UObject* WorldContextObject);
    
};

