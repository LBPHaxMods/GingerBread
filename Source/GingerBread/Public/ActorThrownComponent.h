#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "RegistrationComponent.h"
#include "ActorThrownComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UActorThrownComponent : public URegistrationComponent {
    GENERATED_BODY()
public:
    UActorThrownComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* WhoThrewMe() const;
    
    UFUNCTION(BlueprintCallable)
    void OnPrimitiveSleeping(UPrimitiveComponent* SelfComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void OnParentHit(AActor* SelfActor, UPrimitiveComponent* SelfComponent, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceThrown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetPrimitive() const;
    
};

