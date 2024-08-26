#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "VexFinalDuopedeAttackDuopedeDefeatedDelegateDelegate.h"
#include "VexFinalDuopedeAttackSimpleDelegateDelegate.h"
#include "VexFinalDuopedeAttackController.generated.h"

class AVexFinalEncounter;
class AVexFinalWallHatch;
class AVexableDuopedeSegment;
class AVexableDuopedeSpline;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class AVexFinalDuopedeAttackController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVexFinalEncounter* Vex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVexableDuopedeSpline*> DuopedeSplines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVexFinalWallHatch*> DuopedeEntranceHatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVexFinalWallHatch*> DuopedeExitHatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HatchLightsOnDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DuopedeAttackDuration_Fight1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DuopedeAttackDuration_Fight2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DuopedeCleanUpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DuopedeCleanUpAttackTableEntry;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalDuopedeAttackSimpleDelegate OnDuopedeAttackStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalDuopedeAttackSimpleDelegate OnDuopedeAttackComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalDuopedeAttackDuopedeDefeatedDelegate OnVexedDuopedeDefeated;
    
    AVexFinalDuopedeAttackController(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnVexedDuopedeKilled(AVexableDuopedeSpline* DuopedeSpline, AVexableDuopedeSegment* Duopede);
    
    UFUNCTION(BlueprintCallable)
    void CleanUpAllDuopedes();
    
public:
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

