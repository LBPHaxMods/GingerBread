#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ScoreboardTrophyToy.generated.h"

class ASackboy;
class UCapsuleComponent;
class UMaterialInterface;
class USackboyToyComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API AScoreboardTrophyToy : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* GoldMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SilverMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BronzeMaterial;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USackboyToyComponent* ToyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
public:
    AScoreboardTrophyToy(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnSackboyThrow(ASackboy* InSackboy, const FVector InVelocity, int32 InPower);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyPickUp(ASackboy* InSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyDrop(ASackboy* InSackboy);
    
};

