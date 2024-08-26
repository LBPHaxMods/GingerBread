#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "MamapedeSplineBodyPiece.h"
#include "MamapedeSpineSplineComponent.generated.h"

class AMamapede;
class UCapsuleComponent;
class USkeletalMesh;
class USplineMeshComponent;
class UStaticMesh;
class UVertexAnimation;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMamapedeSpineSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVertexAnimation* PopVertexAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVertexAnimation* InflateVertexAnimation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* BodySectionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* BodySectionLegsMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* TailStartMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* TailEndMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BodyVisualSections, meta=(AllowPrivateAccess=true))
    TArray<FMamapedeSplineBodyPiece> BodyVisualSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> TailVisualSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* TailCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DesiredSections, meta=(AllowPrivateAccess=true))
    int32 DesiredSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool DoVerticalMovementHack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool ShouldForceUndergroundMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsUsingSegmentFollowing;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Mamapede, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AMamapede> Mamapede;
    
public:
    UMamapedeSpineSplineComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void StopHitReacting();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void StartHitReacting();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnSectionBurst(int32 SectionIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Mamapede();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DesiredSections();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BodyVisualSections();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void InflateBody();
    
};

