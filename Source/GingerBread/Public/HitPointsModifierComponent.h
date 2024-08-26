#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "HitPointsModifierTableRow.h"
#include "OnHitPointsPostModificationAttemptDelegate.h"
#include "OnHitPointsPreModificationAttemptDelegate.h"
#include "HitPointsModifierComponent.generated.h"

class AActor;
class UInteractionComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHitPointsModifierComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitPointsPreModificationAttempt OnPreModificationAttempt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitPointsPostModificationAttempt OnPostModificationAttempt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TableEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoAssignColliders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoDisableColliders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoreActors;
    
    UHitPointsModifierComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterInteractionCollider(UInteractionComponent* Collider);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterCollider(UPrimitiveComponent* Collider);
    
    UFUNCTION(BlueprintCallable)
    void SetTableEntry(const FDataTableRowHandle& Entry);
    
    UFUNCTION(BlueprintCallable)
    void SetModifierEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromIgnoreActors(AActor* ignoreThis);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllIgnoreActors();
    
    UFUNCTION(BlueprintCallable)
    void RegisterInteractionCollider(UInteractionComponent* Collider);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCollider(UPrimitiveComponent* Collider);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHitPointsModifierTableRow GetTableEntryRef() const;
    
    UFUNCTION(BlueprintCallable)
    void AddToIgnoreActors(AActor* ignoreThis);
    
};

