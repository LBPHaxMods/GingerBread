#pragma once
#include "CoreMinimal.h"
#include "ESpawnPointLifetimeState.h"
#include "SpawnPointLifetimeStateChangeEventDelegate.generated.h"

class USpawnPointComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnPointLifetimeStateChangeEvent, USpawnPointComponent*, SpawnPoint, ESpawnPointLifetimeState, State);

