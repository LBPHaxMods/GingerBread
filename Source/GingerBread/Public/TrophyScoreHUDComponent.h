#pragma once
#include "CoreMinimal.h"
#include "GingerbreadHUDComponent.h"
#include "TrophyScoreHUDComponent.generated.h"

class A3DUI_TrophyScore;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTrophyScoreHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    A3DUI_TrophyScore* TrophyActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTrophySystemEnabled;
    
    UTrophyScoreHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Show(bool visible, bool animate);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCoolSystemAvailable(AActor* ManagerActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableTrophyHud(bool PlayIntroAnim);
    
    UFUNCTION(BlueprintCallable)
    void DisableTrophyHud(bool PlayShowOutro);
    
};

