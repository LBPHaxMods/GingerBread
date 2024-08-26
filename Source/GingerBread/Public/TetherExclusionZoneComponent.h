#pragma once
#include "CoreMinimal.h"
#include "RegistrationComponent.h"
#include "TetherExclusionZoneComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UTetherExclusionZoneComponent : public URegistrationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> Primitives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PrimitiveActors;
    
    UTetherExclusionZoneComponent(const FObjectInitializer& ObjectInitializer);

};

