#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ObjectResetActorSpawnParams.h"
#include "ObjectResetSpawnParams.h"
#include "ObjectResetInterface.generated.h"

class AObjectResetManager;
class UObjectResetCustomSpawnParams;

UINTERFACE(Blueprintable)
class UObjectResetInterface : public UInterface {
    GENERATED_BODY()
};

class IObjectResetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnReset(int32 ResetCount, const UObjectResetCustomSpawnParams* CustomSpawnParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RESET(int32 ResetCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModifyObjectRespawnParams(UPARAM(Ref) FObjectResetSpawnParams& ObjectRespawnParams) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModifyActorRespawnParams(UPARAM(Ref) FObjectResetActorSpawnParams& ActorRespawnParams) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateCustomRespawnParams(AObjectResetManager* CustomRespawnParamsOuter, UObjectResetCustomSpawnParams*& CustomRespawnParams) const;
    
};

