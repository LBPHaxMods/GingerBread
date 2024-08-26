#pragma once
#include "CoreMinimal.h"
#include "GingerbreadPlayerId.h"
#include "GingerbreadWidget.h"
#include "PieChartSegmentData.h"
#include "PieChartWidgetBase.generated.h"

class UCostumeManager;

UCLASS(Blueprintable, EditInlineNew)
class UPieChartWidgetBase : public UGingerbreadWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PieCharSegmentsOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PieCharSegmentsMinSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGingerbreadPlayerId, int32> PlayerScores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPieChartSegmentData> PieChartSegments;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCostumeManager* CachedCostumeManager;
    
public:
    UPieChartWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdatePieChart(bool animate);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayer(FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllPlayers();
    
    UFUNCTION(BlueprintCallable)
    void AddPlayer(FGingerbreadPlayerId PlayerId, int32 score);
    
};

