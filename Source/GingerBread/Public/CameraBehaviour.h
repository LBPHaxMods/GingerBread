#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CameraTransitionFinishedEventDelegate.h"
#include "CameraTransitionStartedEventDelegate.h"
#include "CameraBehaviour.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UCameraBehaviour : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraTransitionStartedEvent OnCameraTransitionStarted_Source;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraTransitionFinishedEvent OnCameraTransitionFinished_Source;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraTransitionStartedEvent OnCameraTransitionStarted_Destination;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraTransitionFinishedEvent OnCameraTransitionFinished_Destination;
    
    UCameraBehaviour(const FObjectInitializer& ObjectInitializer);

};

