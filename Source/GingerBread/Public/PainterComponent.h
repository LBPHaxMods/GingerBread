#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PainterComponent.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UPainterComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DynamicMaterials;
    
public:
    UPainterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Paint(FLinearColor ColourToPaint);
    
    UFUNCTION(BlueprintCallable)
    bool IsPainted();
    
    UFUNCTION(BlueprintCallable)
    void InitMaterials();
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetColour();
    
    UFUNCTION(BlueprintCallable)
    void Clean();
    
};

