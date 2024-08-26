#pragma once
#include "CoreMinimal.h"
#include "TargetableComponent.h"
#include "CraftCutterTargetComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UCraftCutterTargetComponent : public UTargetableComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BounceOnInteraction;
    
public:
    UCraftCutterTargetComponent(const FObjectInitializer& ObjectInitializer);

};

