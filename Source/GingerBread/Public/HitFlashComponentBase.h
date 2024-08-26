#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HitFlashComponentBase.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UHitFlashComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Materials;
    
public:
    UHitFlashComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerHitFlash();
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicMaterials(TArray<UMaterialInstanceDynamic*> NewMaterials);
    
};

