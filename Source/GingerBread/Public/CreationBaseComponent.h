#pragma once
#include "CoreMinimal.h"
#include "ActorEnabledState.h"
#include "CreationAdditiveComponent.h"
#include "EChassisType.h"
#include "EPropagateDirection.h"
#include "MeshMapping.h"
#include "CreationBaseComponent.generated.h"

class AActor;
class AGingerbreadPlayerController;
class UCreationRecipe;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UCreationBaseComponent : public UCreationAdditiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCreationRecipe*> Recipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCreationRecipe* SatisfiedRecipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWeldAttachAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCreationEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorEnabledState> CachedActorStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshAnimationTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshAnimationDurationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CreationActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshMapping> MeshMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGingerbreadPlayerController*> ControllingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EChassisType> ChassisType;
    
public:
    UCreationBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SyncVehiclePosition(AActor* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void SyncToVehiclePosition(AActor* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidVehicle(AActor* Vehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMeshTransforming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyRecipeSatisfied() const;
    
    UFUNCTION(BlueprintCallable)
    void CopyMaterials(TEnumAsByte<EPropagateDirection> PropagateDirection);
    
    UFUNCTION(BlueprintCallable)
    void CalculateLocalTargetPositions(AActor* Vehicle);
    
};

