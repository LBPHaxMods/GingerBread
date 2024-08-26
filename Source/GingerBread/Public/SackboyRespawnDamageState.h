#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SackboyRespawnDamageState.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FSackboyRespawnDamageState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* BodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* BladeMeshA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* BladeMeshB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BladeOffsetA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BladeOffsetB;
    
    GINGERBREAD_API FSackboyRespawnDamageState();
};

