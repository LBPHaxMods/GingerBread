#pragma once
#include "CoreMinimal.h"
#include "EelAudioComponent.generated.h"

class UAkComponent;

USTRUCT(BlueprintType)
struct FEelAudioComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float splineStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float splineEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    GINGERBREAD_API FEelAudioComponent();
};

