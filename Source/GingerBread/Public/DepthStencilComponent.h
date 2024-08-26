#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DepthStencilComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UDepthStencilComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StencilValue;
    
    UDepthStencilComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStencilValue(int32 NewStencilValue);
    
};

