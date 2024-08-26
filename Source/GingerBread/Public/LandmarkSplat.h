#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LandmarkSplat.generated.h"

class ULandmarkSplatComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API ALandmarkSplat : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULandmarkSplatComponent* LandmarkSplatComponent;
    
public:
    ALandmarkSplat(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowErrorText(const FString& ErrorText);
    
};

