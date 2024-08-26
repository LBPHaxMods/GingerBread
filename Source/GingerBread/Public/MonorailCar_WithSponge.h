#pragma once
#include "CoreMinimal.h"
#include "MonorailCar_Standard.h"
#include "MonorailCar_WithSponge.generated.h"

class UGameplayTagComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AMonorailCar_WithSponge : public AMonorailCar_Standard {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SpongeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* SpongeGamePlayTag;
    
    AMonorailCar_WithSponge(const FObjectInitializer& ObjectInitializer);

};

