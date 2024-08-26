#pragma once
#include "CoreMinimal.h"
#include "WorldMapCameraTransition.generated.h"

class AActor;
class ACameraArea;

USTRUCT(BlueprintType)
struct FWorldMapCameraTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraArea* UnlockCameraArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetLocator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PauseDurationSeconds;
    
    GINGERBREAD_API FWorldMapCameraTransition();
};

