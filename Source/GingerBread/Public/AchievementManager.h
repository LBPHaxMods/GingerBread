#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPlayerJoinDirection.h"
#include "GingerbreadPlayerId.h"
#include "AchievementManager.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API UAchievementManager : public UObject {
    GENERATED_BODY()
public:
    UAchievementManager();

    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& Player, bool forced);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AwardAchievementProgressForAllPlayers(const UObject* WorldContextObject, const FName& AchievementName, int32 ActionCountIncrement);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AwardAchievementProgress(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const FName& AchievementName, int32 ActionCountIncrement);
    
};

