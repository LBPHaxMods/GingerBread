#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "EScoreSource.h"
#include "GingerbreadHUDComponent.h"
#include "CoolPointsHudComponent.generated.h"

class AActor;
class ASackboy;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCoolPointsHudComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastScoreLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TierColor1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TierColor2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TierColor3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TierColor4;
    
    UCoolPointsHudComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Show(bool visible);
    
    UFUNCTION(BlueprintCallable)
    void OnScoreManagerReady(AActor* ManagerActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCollectedScore(ASackboy* Sackboy, EScoreSource Source, FVector_NetQuantize100 EventPosition, int32 Points);
    
    UFUNCTION(BlueprintCallable)
    void OnMultiplierIncreased(int32 newTier, float NewMultiplier);
    
};

