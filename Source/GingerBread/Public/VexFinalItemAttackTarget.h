#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VexFinalItemAttackTarget.generated.h"

class USceneComponent;
class UTextRenderComponent;

UCLASS(Abstract, Blueprintable)
class AVexFinalItemAttackTarget : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* TextRenderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRight;
    
    AVexFinalItemAttackTarget(const FObjectInitializer& ObjectInitializer);

};

