#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "OverlapManagerBeginInteractionActorDelegate.h"
#include "OverlapManagerBeginInteractionSackboyDelegate.h"
#include "OverlapManagerBeginOverlapActorDelegate.h"
#include "OverlapManagerBeginOverlapSackboyDelegate.h"
#include "OverlapManagerEndInteractionActorDelegate.h"
#include "OverlapManagerEndInteractionSackboyDelegate.h"
#include "OverlapManagerEndOverlapActorDelegate.h"
#include "OverlapManagerEndOverlapSackboyDelegate.h"
#include "OverlapManagerComponent.generated.h"

class AActor;
class ASackboy;
class UInteractionComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOverlapManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery GameplayTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActorTagWhitelist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActorTagBlacklist;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertFilter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapManagerBeginOverlapActor OnBeginOverlapFirstActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapManagerBeginOverlapActor OnBeginOverlapAnyActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapManagerEndOverlapActor OnEndOverlapAnyActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapManagerEndOverlapActor OnEndOverlapLastActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapManagerBeginOverlapSackboy OnBeginOverlapFirstSackboy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapManagerBeginOverlapSackboy OnBeginOverlapAnySackboy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapManagerBeginOverlapSackboy OnBeginOverlapFinalSackboy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapManagerEndOverlapSackboy OnEndOverlapAnySackboy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapManagerEndOverlapSackboy OnEndOverlapLastSackboy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapManagerBeginInteractionActor OnBeginInteractionFirstActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapManagerBeginInteractionActor OnBeginInteractionAnyActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapManagerEndInteractionActor OnEndInteractionAnyActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapManagerEndInteractionActor OnEndInteractionLastActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapManagerBeginInteractionSackboy OnBeginInteractionFirstSackboy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapManagerBeginInteractionSackboy OnBeginInteractionAnySackboy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapManagerBeginInteractionSackboy OnBeginInteractionFinalSackboy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapManagerEndInteractionSackboy OnEndInteractionAnySackboy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapManagerEndInteractionSackboy OnEndInteractionLastSackboy;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> ManagedComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInteractionComponent*> ManagedInteractionComponents;
    
public:
    UOverlapManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveManagedInteractionComponent(UInteractionComponent* InteractionComponent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveManagedComponents(const TArray<UPrimitiveComponent*>& PrimitiveComponents);
    
    UFUNCTION(BlueprintCallable)
    void RemoveManagedComponent(UPrimitiveComponent* PrimitiveComponent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllManagedComponents();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnManagedComponentEndOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnManagedComponentEndInteraction(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp);
    
    UFUNCTION(BlueprintCallable)
    void OnManagedComponentBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    void OnManagedComponentBeginInteraction(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSackboyOverlappingAnyComponents(ASackboy* Sackboy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorOverlappingAnyComponents(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSackboysOverlappingComponent(UPrimitiveComponent* ManagedComponent, TArray<ASackboy*>& SackboysOverlappingComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOverlappingSackboys(TArray<ASackboy*>& OverlappingSackboys, bool IncludeDeadSackboys) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOverlappingActors(TArray<AActor*>& OverlappingActors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfOverlappingSackboys() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfOverlappingActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetComponentsOverlappingSackboy(ASackboy* Sackboy, TArray<UPrimitiveComponent*>& ComponentsOverlappingSackboy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetComponentsOverlappingActor(AActor* Actor, TArray<UPrimitiveComponent*>& ComponentsOverlappingActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActorsOverlappingComponent(UPrimitiveComponent* ManagedComponent, TArray<AActor*>& ActorsOverlappingComponent) const;
    
    UFUNCTION(BlueprintCallable)
    void AddManagedInteractionComponent(UInteractionComponent* InteractionComponent);
    
    UFUNCTION(BlueprintCallable)
    void AddManagedComponents(const TArray<UPrimitiveComponent*>& PrimitiveComponents);
    
    UFUNCTION(BlueprintCallable)
    void AddManagedComponent(UPrimitiveComponent* PrimitiveComponent);
    
};

