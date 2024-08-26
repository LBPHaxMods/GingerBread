#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ObjectDispenser.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API AObjectDispenser : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SpawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreativeOrbUnlockCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnOffsetCm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SpawnTriggerComponent;
    
public:
    AObjectDispenser(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AActor* SpawnCreation();
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool bLocked);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(UPrimitiveComponent* SphereComponent, AActor* OtherActor, UPrimitiveComponent* OtherPrimitive, int32 BodyIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockedChanged(bool bLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDispenserClear();
    
    UFUNCTION(BlueprintCallable)
    void OnCreativeOrbCollected(int32 orbCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreationSpawned(AActor* CreationActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDispenserClear() const;
    
};

