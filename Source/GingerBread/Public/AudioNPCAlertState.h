#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AudioNPCAlertState.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UAudioNPCAlertState : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_nEnemiesRTPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_NPCStateGroup;
    
    UAudioNPCAlertState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnNumberOfEnemiesInCombatChanged(int32 NumOfEnemiesInFight);
    
};

