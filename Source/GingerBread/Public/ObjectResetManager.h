#pragma once
#include "CoreMinimal.h"
#include "EObjectRespawnType.h"
#include "EObjectValidity.h"
#include "GingerbreadManager.h"
#include "ObjectResetActorSpawnParams.h"
#include "ObjectResetEventDelegate.h"
#include "ObjectResetSpawnParams.h"
#include "ObjectResetManager.generated.h"

class AObjectResetManager;
class UObject;
class UObjectResetCustomSpawnParams;

UCLASS(Blueprintable)
class AObjectResetManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectResetEvent PreReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectResetEvent PostReset;
    
    AObjectResetManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UnregisterObjectSpawn(int32 SpawnRegistrationID);
    
    UFUNCTION(BlueprintCallable)
    bool UnregisterObject(UObject* ObjectToUnregister);
    
    UFUNCTION(BlueprintCallable)
    void RESET();
    
    UFUNCTION(BlueprintCallable)
    bool RegisterObjectSpawn(UClass* ClassToSpawn, FObjectResetSpawnParams ObjectSpawnParams, FObjectResetActorSpawnParams ActorSpawnParams, UObjectResetCustomSpawnParams* CustomSpawnParams, int32& SpawnRegistrationID);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterObjectRespawn(UObject* ObjectToRespawn, EObjectRespawnType RespawnType);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterObjectReset(UObject* ObjectToReset);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterObjectDestruction(UObject* ObjectToDestroy);
    
    UFUNCTION(BlueprintCallable)
    static bool MakeObjectResetParams(const UObject* Object, UClass*& ClassToSpawn, FObjectResetSpawnParams& ObjectSpawnParams, FObjectResetActorSpawnParams& ActorSpawnParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResetCount() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetObjectResetManager(const UObject* WorldContextObject, AObjectResetManager*& ObjectResetManager, EObjectValidity& Out_ManagerValidity);
    
};

