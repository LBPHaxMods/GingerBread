#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "CreationHandlingModelComponent.generated.h"

class UCreationHandlingConfig;
class UWheelComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UCreationHandlingModelComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHandlingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCreationHandlingConfig* CurrentHandlingConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGrounded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWheelComponent*> LeftWheels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWheelComponent*> RightWheels;
    
public:
    UCreationHandlingModelComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetHandlingModel(TSubclassOf<UCreationHandlingConfig> Config);
    
    UFUNCTION(BlueprintCallable)
    void SetHandlingEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHandlingModelChanged(UCreationHandlingConfig* OldHandlingModel, UCreationHandlingConfig* NewHandlingModel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHandlingEnabled(UCreationHandlingConfig* HandlingModel, bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void CacheWheels();
    
    UFUNCTION(BlueprintCallable)
    void Brake(float ForceNewtons, const TArray<UWheelComponent*>& Wheels);
    
    UFUNCTION(BlueprintCallable)
    void Accelerate(float ForceNewtons, const TArray<UWheelComponent*>& Wheels);
    
};

