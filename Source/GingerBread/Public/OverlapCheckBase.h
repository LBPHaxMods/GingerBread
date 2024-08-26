#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "OverlapType.h"
#include "Templates/SubclassOf.h"
#include "OverlapCheckBase.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API AOverlapCheckBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    OverlapType DefaultOverlapType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsToCheckForOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SegementCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DebugRadiusColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DebugLineColour;
    
public:
    AOverlapCheckBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RemoveActorFromOverlapList(const AActor* actorToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NarrowPhaseOverlapSingleActor(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NarrowPhaseOverlapSingle(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NarrowPhaseOverlapAny() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverlappingSingle(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverlappingPrimitiveComponent(const UPrimitiveComponent* Primitive) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverlappingAny() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetOverlappingActorsByClass(TSubclassOf<AActor> ClassFilter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BroadPhaseOverlapSingleActor(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BroadPhaseOverlapSingle(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BroadPhaseOverlapAny() const;
    
    UFUNCTION(BlueprintCallable)
    void AddActorToOverlapList(const AActor* NewActor);
    
};

