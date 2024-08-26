#pragma once
#include "CoreMinimal.h"
#include "HitFlashComponentBase.h"
#include "AIHitFlashComponent.generated.h"

class UCurveFloat;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIHitFlashComponent : public UHitFlashComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* HitFlashCurve;
    
    UAIHitFlashComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void CreateDynamicMaterialsForMesh(UMeshComponent* Mesh);
    
};

