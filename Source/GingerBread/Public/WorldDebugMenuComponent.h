#pragma once
#include "CoreMinimal.h"
#include "DebugMenuComponent.h"
#include "WorldDebugMenuComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UWorldDebugMenuComponent : public UDebugMenuComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPushDeferredControlSchemes;
    
public:
    UWorldDebugMenuComponent(const FObjectInitializer& ObjectInitializer);

};

