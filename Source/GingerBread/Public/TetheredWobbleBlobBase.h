#pragma once

#include "CoreMinimal.h"
#include "EWorldLocation.h"
#include "PlayerCountActor.h"
#include "TetheredWobbleBlobBase.generated.h"

class AActor;
class UGameplayTagComponent;
class UMaterialInterface;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ATetheredWobbleBlobBase : public APlayerCountActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* GameplayTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseMaterialOverrideWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldLocation MaterialOverrideWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldLocation, TSoftObjectPtr<UMaterialInterface>> MaterialsMap;
    
public:
    ATetheredWobbleBlobBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetWorldMaterials(EWorldLocation WorldLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelSettingsAvailable(AActor* ManagerActor);
    
};

