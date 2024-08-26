#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AudioRollHoleLogic.generated.h"

class ASackboy;
class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UAudioRollHoleLogic : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_sackboyRollTunnelRTPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* m_pSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASackboy* m_pSackboy;
    
    UAudioRollHoleLogic(const FObjectInitializer& ObjectInitializer);

};

