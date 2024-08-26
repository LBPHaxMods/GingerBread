#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CrossPlatformExportData.h"
#include "CrossPlatformExportWrapper.generated.h"

UCLASS(Blueprintable)
class UCrossPlatformExportWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrossPlatformExportData Data;
    
    UCrossPlatformExportWrapper();

    UFUNCTION(BlueprintCallable)
    bool TrySerializeToJSON(FString& resultJson);
    
    UFUNCTION(BlueprintCallable)
    bool TryDeserializeFromJSON(const FString& jsonString);
    
    UFUNCTION(BlueprintCallable)
    FString SerializeToJSON();
    
};

