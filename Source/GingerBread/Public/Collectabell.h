#pragma once
#include "CoreMinimal.h"
#include "CulledActor.h"
#include "DarkMatterEngineMovable.h"
#include "ECollectabellSize.h"
#include "Collectabell.generated.h"

class URegistrationComponent;

UCLASS(Blueprintable)
class ACollectabell : public ACulledActor, public IDarkMatterEngineMovable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ECollectabellSize Size;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URegistrationComponent* RegistrationComponent;
    
public:
    ACollectabell(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    FName GetAudioSizeSwitchName();
    

    // Fix for true pure virtual functions not being implemented
};

