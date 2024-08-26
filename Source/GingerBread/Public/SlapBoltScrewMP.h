#pragma once

#include "CoreMinimal.h"
#include "HitPointsComponentEventReceiver.h"
#include "Position_Net.h"
#include "PlayerCountActor.h"
#include "SlapBoltScrewMP.generated.h"

class UAkComponent;
class UHitPointsComponent;
class UInteractionComponent;
class UPhysicsAudioComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API ASlapBoltScrewMP : public APlayerCountActor, public IHitPointsComponentEventReceiver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ScrewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CollisionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsComponent* HitPointsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* ConeInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsAudioComponent* PhysicsAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AUTHHandlePosition, meta=(AllowPrivateAccess=true))
    FPosition_Net AUTHHandlePosition;
    
    ASlapBoltScrewMP(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_AUTHHandlePosition();
    

    // Fix for true pure virtual functions not being implemented
};

