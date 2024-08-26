#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "EHitPointsBoundsUpdateMode.h"
#include "HitPointContactData.h"
#include "HitPointModifyResult.h"
#include "HitPointModifyResult_Network.h"
#include "HitPointsModifierTableRow.h"
#include "HitReactionMap.h"
#include "OnHitPointsPostModificationAttemptDelegate.h"
#include "OnHitPointsPreModificationAttemptDelegate.h"
#include "OnHitPointsResetDelegate.h"
#include "RegistrationComponent.h"
#include "HitPointsComponent.generated.h"

class AActor;
class UInteractionComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHitPointsComponent : public URegistrationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitReactionMap HitReactions;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitPointsPreModificationAttempt OnPreModificationAttempt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitPointsPostModificationAttempt OnPostModificationAttempt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitPointsReset OnHitPointsReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHitPointsBoundsUpdateMode BoundsUpdateMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoundsRadiusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrownOffset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TableEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultHitPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumHitPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool processSackboyAttacksOnClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoAssignColliders;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentHitPoints;
    
public:
    UHitPointsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnregisterInteractionCollider(UInteractionComponent* Collider);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterCollider(UPrimitiveComponent* Collider);
    
    UFUNCTION(BlueprintCallable)
    void SetTableEntry(const FDataTableRowHandle& Row);
    
    UFUNCTION(BlueprintCallable)
    void SetProcessSackboyAttacksOnClient(bool NewProcessSackboyAttacksOnClient);
    
    UFUNCTION(BlueprintCallable)
    void SetMaximumHitPoints(int32 NewMaximumHitPoints);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultHitPoints(int32 NewDefaultHitPoints);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageCoolDownDuration(float coolDownDuration);
    
    UFUNCTION(BlueprintCallable)
    void ResetHealth();
    
    UFUNCTION(BlueprintCallable)
    void RegisterInteractionCollider(UInteractionComponent* Collider, bool updateCachedBounds);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCollider(UPrimitiveComponent* Collider, bool updateCachedBounds);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(UPrimitiveComponent* targetPrim, AActor* SourceActor, UPrimitiveComponent* sourcePrim, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractOverlapEnd(UInteractionComponent* OverlappedComponent, AActor* SourceActor, UInteractionComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractOverlapBegin(UInteractionComponent* pOverlappedComponent, AActor* SourceActor, UInteractionComponent* pOtherComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* targetPrim, AActor* SourceActor, UPrimitiveComponent* sourcePrim, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInDamageCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetTableEntryHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumHitPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefaultHitPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentHitPoints() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastPostModificationEvents(const FHitPointModifyResult_Network& Packed);
    
    UFUNCTION(BlueprintCallable)
    FHitPointModifyResult AttemptModificationGivenTableRow(const FDataTableRowHandle& SourceTableEntry, UPARAM(Ref) FHitPointContactData& ContactData);
    
    UFUNCTION(BlueprintCallable)
    FHitPointModifyResult AttemptModification(const FHitPointsModifierTableRow& SourceTableEntry, UPARAM(Ref) FHitPointContactData& ContactData);
    
};

