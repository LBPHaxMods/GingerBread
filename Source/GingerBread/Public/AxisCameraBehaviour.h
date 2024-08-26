#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraBehaviour.h"
#include "AxisCameraBehaviour.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UAxisCameraBehaviour : public UCameraBehaviour {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Axis;
    
public:
    UAxisCameraBehaviour(const FObjectInitializer& ObjectInitializer);

};

