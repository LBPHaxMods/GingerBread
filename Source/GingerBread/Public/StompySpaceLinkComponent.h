#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StompySpaceLinkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStompySpaceLinkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinkInitiateDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinkBreakDistance;
    
    UStompySpaceLinkComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool IsLinkedToSomething();
    
    UFUNCTION(BlueprintCallable)
    void EnableLinking();
    
    UFUNCTION(BlueprintCallable)
    void DisableLinking(bool isImmediate);
    
};

