#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HudActor3D.h"
#include "3DUI_InWorldScoreCollection.generated.h"

class UChildActorComponent;

UCLASS(Blueprintable)
class A3DUI_InWorldScoreCollection : public AHudActor3D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* Score1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* Score2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* Score3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* Score4;
    
    A3DUI_InWorldScoreCollection(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetAll();
    
    UFUNCTION(BlueprintCallable)
    void PlayScore(int32 score, FLinearColor Colour, FVector WorldLocation, bool isMultiplier, bool hasGlow);
    
    UFUNCTION(BlueprintCallable)
    void OnResetScore();
    
};

