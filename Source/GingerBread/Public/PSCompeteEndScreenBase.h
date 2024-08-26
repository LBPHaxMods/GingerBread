#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GingerbreadWidget.h"
#include "PSCompeteEndScreenBase.generated.h"

class UPSCompeteLeaderboardBaseWidget;

UCLASS(Blueprintable, EditInlineNew)
class UPSCompeteEndScreenBase : public UGingerbreadWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPSCompeteLeaderboardBaseWidget* PlaystationCompeteLeaderboardWidget;
    
    UPSCompeteEndScreenBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupTimeInformation(const FTimespan& TimeTaken, const bool IsNewBestTime);
    
};

