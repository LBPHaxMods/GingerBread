#pragma once
#include "CoreMinimal.h"
#include "EEnemyGroupType.h"
#include "GingerbreadManager.h"
#include "OnInFightEnemiesChangedDelegate.h"
#include "OnOnScreenEnemiesChangedDelegate.h"
#include "AICoordinatorManager.generated.h"

class AAICoordinatorManager;
class AActor;
class UAIBaseEnemyGroup;
class UObject;

UCLASS(Blueprintable)
class AAICoordinatorManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Targets;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnScreenEnemiesChanged OnOnScreenEnemiesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInFightEnemiesChanged OnInFightEnemiesChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAIBaseEnemyGroup*> Groups;
    
public:
    AAICoordinatorManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfEnemiesOnScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfEnemiesInFight() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AAICoordinatorManager* GetInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void GetAllCoordinatedActorsInGroup(TArray<AActor*>& _outActors, EEnemyGroupType _typeTag);
    
};

