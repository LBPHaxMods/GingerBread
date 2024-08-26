#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "AISpawnerInfo.h"
#include "EAISpawnState.h"
#include "EEnemyLevelType.h"
#include "EWorldLocation.h"
#include "Templates/SubclassOf.h"
#include "AIFunctionLibrary.generated.h"

class AAIPatrolBase;
class AAISpawner;
class AActor;
class ACharacter;
class AGingerbreadAICharacter;
class ANavigationData;
class APawn;
class ASpawnerGrunty;
class UNavigationQueryFilter;
class UObject;
class UPrimitiveComponent;
class UTriggerActorComponent;

UCLASS(Blueprintable)
class UAIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAIFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASpawnerGrunty* SpawnGruntySpawnerDeferred(UObject* WorldContextObject, AActor* Owner, APawn* Instigator, TSubclassOf<ASpawnerGrunty> SpawnerClass, FTransform SpawnTransform, UTriggerActorComponent* TriggerActorComponent, EEnemyLevelType LevelType, EAISpawnState SpawnState, AAIPatrolBase* PatrolObject, int32 NumberOfGruntys);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AAISpawner* SpawnAISpawnerDeferredDifferentWorld(UObject* WorldContextObject, AActor* Owner, APawn* Instigator, TSubclassOf<AAISpawner> SpawnerClass, FTransform SpawnTransform, EWorldLocation WorldLocation, UTriggerActorComponent* TriggerActorComponent, EEnemyLevelType LevelType, EAISpawnState SpawnState, AAIPatrolBase* PatrolObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AAISpawner* SpawnAISpawnerDeferred(UObject* WorldContextObject, AActor* Owner, APawn* Instigator, TSubclassOf<AAISpawner> SpawnerClass, FTransform SpawnTransform, UTriggerActorComponent* TriggerActorComponent, EEnemyLevelType LevelType, EAISpawnState SpawnState, AAIPatrolBase* PatrolObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool SafeProjectPointToNavigation(UObject* WorldContextObject, const FVector& Point, FVector& ProjectedLocation, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, const FVector QueryExtent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ProjectAndNavigationRaycast(UObject* WorldContextObject, ACharacter* Character, ANavigationData* NavData, const FVector StartLocation, const FVector EndLocation, FVector& HitLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ANavigationData* GetNavDataFromName(UObject* WorldContextObject, FName NavDataName);
    
    UFUNCTION(BlueprintCallable)
    static void GetLaunchVelocityToReachHeight(const FVector& StartPos, const FVector& EndPos, FVector& OutLaunchVelocity, float ArcHeight, float Gravity);
    
    UFUNCTION(BlueprintCallable)
    static bool FindAISpawnerFromBlueprintClass(TSubclassOf<AGingerbreadAICharacter> BlueprintClass, FAISpawnerInfo& OutSpawnerInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AI_TargetPredictionNoNav_CustomVel(AActor* Target, float PredictAheadSeconds, FVector& PredictedLocation, FVector Velocity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AI_TargetPredictionNoNav(AActor* Target, float PredictAheadSeconds, FVector& PredictedLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool AI_IsHitAnObstacle(const FHitResult& Hit, AActor* AIActor, const FVector& moveDir, bool ignoreCollisionChannels);
    
    UFUNCTION(BlueprintCallable)
    static bool AI_GetOverlappingComponents(UPrimitiveComponent* component, TArray<UPrimitiveComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable)
    static bool AI_GetOverlappingActors(UPrimitiveComponent* component, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AI_FindFloorUnderLocation_IgnoreActors(UObject* WorldContextObject, const FVector& Location, float MaxSearchDistance, FVector& OutFloorLocation, TArray<AActor*> ActorArray);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AI_FindFloorUnderLocation(UObject* WorldContextObject, const FVector& Location, float MaxSearchDistance, FVector& OutFloorLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool AI_DoesComponentOverlapComponent(UPrimitiveComponent* component, UPrimitiveComponent* TestComponent);
    
    UFUNCTION(BlueprintCallable)
    static bool AI_DoesComponentOverlapActor(UPrimitiveComponent* component, AActor* Actor);
    
};

