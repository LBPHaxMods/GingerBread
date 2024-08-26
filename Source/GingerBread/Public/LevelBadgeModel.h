#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelBadgeModel.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API ALevelBadgeModel : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* VisibleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRevealed;
    
    ALevelBadgeModel(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Reveal(bool bReveal, bool bImmediate);
    
};

