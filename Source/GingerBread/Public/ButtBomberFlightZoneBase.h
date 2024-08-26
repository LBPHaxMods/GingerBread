#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ButtBomberFlightZoneBase.generated.h"

class UInteractionComponent;
class UOverlapManagerComponent;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class AButtBomberFlightZoneBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlapManagerComponent* InnerOverlapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlapManagerComponent* OuterOverlapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* InnerCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* OuterCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* InnerInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* OuterInteraction;
    
public:
    AButtBomberFlightZoneBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnOuterEndOverlapAnyActor(UOverlapManagerComponent* OverlapManagerComponent, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOuterEndInteractAnyActor(UOverlapManagerComponent* OverlapManagerComponent, UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void OnOuterBeginOverlapAnyActor(UOverlapManagerComponent* OverlapManagerComponent, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnOuterBeginInteractAnyActor(UOverlapManagerComponent* OverlapManagerComponent, UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void OnInnerEndOverlapAnyActor(UOverlapManagerComponent* OverlapManagerComponent, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnInnerEndInteractAnyActor(UOverlapManagerComponent* OverlapManagerComponent, UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void OnInnerBeginOverlapAnyActor(UOverlapManagerComponent* OverlapManagerComponent, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnInnerBeginInteractAnyActor(UOverlapManagerComponent* OverlapManagerComponent, UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp);
    
};

