#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ButtonatorButton.h"
#include "ButtonatorClickedSignatureDelegate.h"
#include "Buttonator.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UButtonator : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FButtonatorButton> Buttons;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonatorClickedSignature OnButtonPressed;
    
    UButtonator(const FObjectInitializer& ObjectInitializer);

};

