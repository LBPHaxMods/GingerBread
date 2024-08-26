#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EProogleLaunchType.h"
#include "ProogleLaunchComponent.h"
#include "ProogleUnderseaLaunchComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UProogleUnderseaLaunchComponent : public UProogleLaunchComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ColliderMinSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ColliderMaxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColliderScaleDuration;
    
    UProogleUnderseaLaunchComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnLaunchStart(EProogleLaunchType LaunchType);
    
    UFUNCTION(BlueprintCallable)
    void OnLaunchEnd(EProogleLaunchType LaunchType);
    
};

