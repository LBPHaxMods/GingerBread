#pragma once
#include "CoreMinimal.h"
#include "WAMMole.h"
#include "WAMMoleChildMama.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class AWAMMoleChildMama : public AWAMMole {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Hair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* EarRingL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* EarRingR;
    
    AWAMMoleChildMama(const FObjectInitializer& ObjectInitializer);

};

