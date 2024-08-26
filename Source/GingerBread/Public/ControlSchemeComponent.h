#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ControlSchemeComponent.generated.h"

class AGingerbreadPlayerController;
class UControlScheme;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UControlSchemeComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UControlScheme* ControlScheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AGingerbreadPlayerController*, bool> EnabledState;
    
public:
    UControlSchemeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControlSchemeEnabled(AGingerbreadPlayerController* PlayerController, bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void EnableControlScheme(AGingerbreadPlayerController* PlayerController, bool bEnable);
    
};

