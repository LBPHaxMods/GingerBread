#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AsyncLevelStreamingLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UAsyncLevelStreamingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAsyncLevelStreamingLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrepareStream(const UObject* WorldContextObject, const FName& level_name);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrepareAndCommitStream(const UObject* WorldContextObject, const FName& level_name, bool block_on_load);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsStreamLevelLoaded(const UObject* WorldContextObject, const FName& level_name);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CommitStreamIfLoaded(const UObject* WorldContextObject, const FName& level_name);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CommitStream(const UObject* WorldContextObject, const FName& level_name);
    
};

