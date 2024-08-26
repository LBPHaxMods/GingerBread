#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIAttackChanceConfiguration.h"
#include "EAttackType.h"
#include "AIAttackChanceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIAttackChanceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttackType, FAIAttackChanceConfiguration> AttackChanceConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EAttackType, int32> CurrentChances;
    
    UAIAttackChanceComponent(const FObjectInitializer& ObjectInitializer);

};

