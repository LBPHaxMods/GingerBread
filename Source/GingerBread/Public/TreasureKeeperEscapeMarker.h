#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ETreasureKeeperEscapeMarkerShape.h"
#include "TreasureKeeperEscapeMarker.generated.h"

UCLASS(Blueprintable)
class ATreasureKeeperEscapeMarker : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETreasureKeeperEscapeMarkerShape Shape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoxExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereRadius;
    
public:
    ATreasureKeeperEscapeMarker(const FObjectInitializer& ObjectInitializer);

};

