#pragma once
#include "CoreMinimal.h"
#include "GingerbreadHUDComponent.h"
#include "KeysHUDComponent.generated.h"

class AKeyUIActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKeysHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKeyUIActor* KeyActor;
    
    UKeysHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowForMenu(bool menuRequestingShow);
    
};

