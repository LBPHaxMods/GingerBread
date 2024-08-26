#pragma once
#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "FuzzSectionParameters.h"
#include "SMFuzzComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERSHADERS_API USMFuzzComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFuzzSectionParameters> TargetMeshSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManuallyEdited;
    
    USMFuzzComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateUsingFuzzMaterialTable(USkeletalMeshComponent* SMC);
    
};

