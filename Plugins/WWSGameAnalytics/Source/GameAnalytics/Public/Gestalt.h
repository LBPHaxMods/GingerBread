#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "RouterInfoRetrievedDelegateDelegate.h"
#include "Gestalt.generated.h"

class UEventDetail;
class UObject;

UCLASS(Blueprintable)
class UGestalt : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGestalt();

    UFUNCTION(BlueprintCallable)
    static void PostEvent(UEventDetail* EventBody, UEventDetail* CustomData, bool IsHighPrio);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEventDetail* NewEvent(UObject* WorldContextObject, UClass* EventType);
    
    UFUNCTION(BlueprintCallable)
    static bool InitTelemetry(const FString& UserId, const FString& TitleId, const FString& SessionId, const FString& Environment, const FString& BuildVersion, const FString& DeviceType, const FString& Platform, int32 PlaythroughCount, const FString& SaveId);
    
    UFUNCTION(BlueprintCallable)
    static bool GetRouterInfo(FRouterInfoRetrievedDelegate Callback);
    
};

