#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "GameplayLevelDataStore.generated.h"

class UGameplayLevelDataStore;
class ULevelDataBase;

UCLASS(Blueprintable)
class GINGERBREAD_API UGameplayLevelDataStore : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ULevelDataBase*> DataStoreMap;
    
public:
    UGameplayLevelDataStore();

    UFUNCTION(BlueprintCallable)
    bool RemoveData(const FName& DataName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGameplayLevelDataStore* GetInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    ULevelDataBase* GetData(const FName& DataName);
    
    UFUNCTION(BlueprintCallable)
    bool DoesDataExist(const FName& DataName);
    
    UFUNCTION(BlueprintCallable)
    bool AddData(const FName& DataName, const TSubclassOf<ULevelDataBase> dataType);
    
};

