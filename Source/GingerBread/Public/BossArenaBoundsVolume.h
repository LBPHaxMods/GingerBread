#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SquareBound.h"
#include "TriangleBound.h"
#include "BossArenaBoundsVolume.generated.h"

class UBossArenaBoundsDebugComponent;

UCLASS(Blueprintable)
class ABossArenaBoundsVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSquareBound> Squares;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTriangleBound> Triangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugZOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBossArenaBoundsDebugComponent* DebugComponent;
    
public:
    ABossArenaBoundsVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FVector GetClosestPointInVolume(bool& outWasInVolume, bool& outWasInTriangle, const FVector Point);
    
};

