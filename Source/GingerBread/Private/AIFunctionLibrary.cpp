#include "AIFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UAIFunctionLibrary::UAIFunctionLibrary() {
}

ASpawnerGrunty* UAIFunctionLibrary::SpawnGruntySpawnerDeferred(UObject* WorldContextObject, AActor* Owner, APawn* Instigator, TSubclassOf<ASpawnerGrunty> SpawnerClass, FTransform SpawnTransform, UTriggerActorComponent* TriggerActorComponent, EEnemyLevelType LevelType, EAISpawnState SpawnState, AAIPatrolBase* PatrolObject, int32 NumberOfGruntys) {
    return NULL;
}

AAISpawner* UAIFunctionLibrary::SpawnAISpawnerDeferredDifferentWorld(UObject* WorldContextObject, AActor* Owner, APawn* Instigator, TSubclassOf<AAISpawner> SpawnerClass, FTransform SpawnTransform, EWorldLocation WorldLocation, UTriggerActorComponent* TriggerActorComponent, EEnemyLevelType LevelType, EAISpawnState SpawnState, AAIPatrolBase* PatrolObject) {
    return NULL;
}

AAISpawner* UAIFunctionLibrary::SpawnAISpawnerDeferred(UObject* WorldContextObject, AActor* Owner, APawn* Instigator, TSubclassOf<AAISpawner> SpawnerClass, FTransform SpawnTransform, UTriggerActorComponent* TriggerActorComponent, EEnemyLevelType LevelType, EAISpawnState SpawnState, AAIPatrolBase* PatrolObject) {
    return NULL;
}

bool UAIFunctionLibrary::SafeProjectPointToNavigation(UObject* WorldContextObject, const FVector& Point, FVector& ProjectedLocation, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, const FVector QueryExtent) {
    return false;
}

bool UAIFunctionLibrary::ProjectAndNavigationRaycast(UObject* WorldContextObject, ACharacter* Character, ANavigationData* NavData, const FVector StartLocation, const FVector EndLocation, FVector& HitLocation) {
    return false;
}

ANavigationData* UAIFunctionLibrary::GetNavDataFromName(UObject* WorldContextObject, FName NavDataName) {
    return NULL;
}

void UAIFunctionLibrary::GetLaunchVelocityToReachHeight(const FVector& StartPos, const FVector& EndPos, FVector& OutLaunchVelocity, float ArcHeight, float Gravity) {
}

bool UAIFunctionLibrary::FindAISpawnerFromBlueprintClass(TSubclassOf<AGingerbreadAICharacter> BlueprintClass, FAISpawnerInfo& OutSpawnerInfo) {
    return false;
}

bool UAIFunctionLibrary::AI_TargetPredictionNoNav_CustomVel(AActor* Target, float PredictAheadSeconds, FVector& PredictedLocation, FVector Velocity) {
    return false;
}

bool UAIFunctionLibrary::AI_TargetPredictionNoNav(AActor* Target, float PredictAheadSeconds, FVector& PredictedLocation) {
    return false;
}

bool UAIFunctionLibrary::AI_IsHitAnObstacle(const FHitResult& Hit, AActor* AIActor, const FVector& moveDir, bool ignoreCollisionChannels) {
    return false;
}

bool UAIFunctionLibrary::AI_GetOverlappingComponents(UPrimitiveComponent* component, TArray<UPrimitiveComponent*>& OutComponents) {
    return false;
}

bool UAIFunctionLibrary::AI_GetOverlappingActors(UPrimitiveComponent* component, TArray<AActor*>& OutActors) {
    return false;
}

bool UAIFunctionLibrary::AI_FindFloorUnderLocation_IgnoreActors(UObject* WorldContextObject, const FVector& Location, float MaxSearchDistance, FVector& OutFloorLocation, TArray<AActor*> ActorArray) {
    return false;
}

bool UAIFunctionLibrary::AI_FindFloorUnderLocation(UObject* WorldContextObject, const FVector& Location, float MaxSearchDistance, FVector& OutFloorLocation) {
    return false;
}

bool UAIFunctionLibrary::AI_DoesComponentOverlapComponent(UPrimitiveComponent* component, UPrimitiveComponent* TestComponent) {
    return false;
}

bool UAIFunctionLibrary::AI_DoesComponentOverlapActor(UPrimitiveComponent* component, AActor* Actor) {
    return false;
}


