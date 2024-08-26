#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "RegistrationComponent.h"
#include "SackboyThrewMeComponent.generated.h"

class AActor;
class ASackboy;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USackboyThrewMeComponent : public URegistrationComponent {
    GENERATED_BODY()
public:
    USackboyThrewMeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASackboy* WhoThrewMe() const;
    
    UFUNCTION(BlueprintCallable)
    void OnPrimitiveSleeping(UPrimitiveComponent* SelfComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void OnParentHit(AActor* SelfActor, UPrimitiveComponent* SelfComponent, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetPrimitive() const;
    
};

