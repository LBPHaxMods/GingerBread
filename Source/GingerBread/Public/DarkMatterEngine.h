#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "DarkMatterEngineInfo.h"
#include "EDarkMatterEngineMovementSpace.h"
#include "DarkMatterEngine.generated.h"

class AActor;
class UDarkMatterEngine;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
class USubLevelLoadHandler;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDarkMatterEngine : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrepareWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SubLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseMovementSpaceSwitching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USubLevelLoadHandler*> SubLevelLoadHandlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> IgnoreActors;
    
public:
    UDarkMatterEngine(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void TransformVector(UPARAM(Ref) FVector& Vector, FVector& VectorOut) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void TransformRotation(UPARAM(Ref) FRotator& Rotation, FRotator& RotationOut) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void TransformPosition(UPARAM(Ref) FVector& Position, FVector& PositionOut) const;
    
    UFUNCTION(BlueprintCallable)
    void SetWorldTransform(AActor* Actor, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInfoFromUniverse(const FDarkMatterEngineInfo& movement_info);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActorFromUniverse(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RefreshActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnActorSpawned(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void IgnoreSceneComponent(USceneComponent* scene_component);
    
    UFUNCTION(BlueprintCallable)
    void IgnorePrimitiveComponent(UPrimitiveComponent* primitive_component);
    
    UFUNCTION(BlueprintCallable)
    void IgnoreActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWorldTransform(FTransform& Transform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDarkMatterEngineMovementSpace GetMovementSpaceOfCollidingPrimitive(UPrimitiveComponent* Primitive) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDarkMatterEngineMovementSpace GetMovementSpace(USceneComponent* component) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDarkMatterEngine* GetInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void EnableRelativeUpdate(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void AddInfoToUniverse(const FDarkMatterEngineInfo& movement_info, bool apply_initial_world_transform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddIgnoredSceneComponent(const UObject* WorldContextObject, USceneComponent* scene_component);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddIgnoredPrimitiveComponent(const UObject* WorldContextObject, UPrimitiveComponent* primitive_component);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddIgnoredActor(const UObject* WorldContextObject, const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void AddActorToUniverse(AActor* Actor, bool apply_initial_world_transform);
    
};

