#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DistanceFromListenerSignatureDelegate.h"
#include "AudioListenerTracker.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAudioListenerTracker : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistanceFromListenerSignature OnEnterArea;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistanceFromListenerSignature OnExitArea;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
public:
    UAudioListenerTracker(const FObjectInitializer& ObjectInitializer);

};

