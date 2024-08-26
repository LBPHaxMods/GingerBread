#pragma once
#include "CoreMinimal.h"
#include "ETournamentStatus.h"
#include "GingerbreadTournamentStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGingerbreadTournamentStatusChanged, FName, TournamentID, ETournamentStatus, Status);

