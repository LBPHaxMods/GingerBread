#pragma once
#include "CoreMinimal.h"
#include "GingerbreadCameraModifier.h"
#include "CameraEffectModifier.generated.h"

class ACameraEffectManager;

UCLASS(Blueprintable)
class UCameraEffectModifier : public UGingerbreadCameraModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACameraEffectManager* Owner;
    
public:
    UCameraEffectModifier();

};

