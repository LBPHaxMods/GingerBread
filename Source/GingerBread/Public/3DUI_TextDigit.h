#pragma once
#include "CoreMinimal.h"
#include "HudStaticMeshComponent.h"
#include "3DUI_TextDigit.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class U3DUI_TextDigit : public UHudStaticMeshComponent {
    GENERATED_BODY()
public:
    U3DUI_TextDigit(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void GetOrCreateDynamicMaterial(UMaterialInstanceDynamic*& Mat);
    
};

