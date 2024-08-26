#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AudioMaterialOverrider.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UDEPRECATED_AudioMaterialOverrider : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AudioMaterial;
    
    UDEPRECATED_AudioMaterialOverrider(const FObjectInitializer& ObjectInitializer);

};

