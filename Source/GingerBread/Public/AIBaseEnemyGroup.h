#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "AIBaseEnemyGroup.generated.h"

class AActor;
class UAIAttackCoordinator;
class UAICameraCoordinator;
class UAIDetectionCoordinator;
class UWorld;

UCLASS(Blueprintable)
class UAIBaseEnemyGroup : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CoordinatedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIDetectionCoordinator> DetectionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIAttackCoordinator> AttackClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIDetectionCoordinator* DetectionCoordinator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIAttackCoordinator* AttackCoordinator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAICameraCoordinator* CameraCoordinator;
    
public:
    UAIBaseEnemyGroup();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* GetWorld() const;
    
};

