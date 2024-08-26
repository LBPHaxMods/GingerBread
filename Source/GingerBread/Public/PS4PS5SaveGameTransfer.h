#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ECrossPlatformExportResult.h"
#include "GingerbreadPlayerId.h"
#include "PS4PS5SaveGameTransfer.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API UPS4PS5SaveGameTransfer : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUploadFinishedDelegate, ECrossPlatformExportResult, Result, const FGingerbreadPlayerId&, PlayerId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnExistDelegate, ECrossPlatformExportResult, Result, const FGingerbreadPlayerId&, PlayerId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnDownloadFinishedDelegate, ECrossPlatformExportResult, Result, const FString&, Json, const FGingerbreadPlayerId&, PlayerId);
    
    UPS4PS5SaveGameTransfer();

    UFUNCTION(BlueprintCallable)
    void Upload(const FGingerbreadPlayerId& PlayerId, FString& Json);
    
    UFUNCTION(BlueprintCallable)
    void Exist(const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void Download(const FGingerbreadPlayerId& PlayerId);
    
};

