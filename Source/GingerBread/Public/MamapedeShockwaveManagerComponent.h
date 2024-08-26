#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "MamapedeShockwaveManagerComponent.generated.h"

class AActor;
class ABossArenaBoundsVolume;
class AMamapedeShockwave;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMamapedeShockwaveManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMamapedeShockwave> MamapedeShockwaveClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MaterialInteractionParameterNames;
    
    UMamapedeShockwaveManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnShockwave(const FVector& Location, ABossArenaBoundsVolume* ArenaBoundsVolume, const TArray<AActor*>& ActorsToIgnore);
    
};

