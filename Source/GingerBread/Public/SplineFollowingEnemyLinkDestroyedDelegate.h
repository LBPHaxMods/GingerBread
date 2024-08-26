#pragma once
#include "CoreMinimal.h"
#include "SplineFollowingEnemyLinkDestroyedDelegate.generated.h"

class AActor;
class USplineFollowingEnemyChain;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSplineFollowingEnemyLinkDestroyed, USplineFollowingEnemyChain*, Chain, AActor*, Link, bool, bShouldReward, bool, bFinalLink);

