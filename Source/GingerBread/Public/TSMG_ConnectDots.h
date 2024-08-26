#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "TSMG_ConnectDots.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTSMG_ConnectDots : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLinkCompleteBlueprintSig, int32, Index);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NodeSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayDebug;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinkCompleteBlueprintSig OnLoopComplete;
    
    UTSMG_ConnectDots(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTargetPos(const FVector StartPos, const FVector EndPos, const int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void RESET();
    
    UFUNCTION(BlueprintCallable)
    bool PaintPositon(const FVector pos, const int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitGrid(const FVector pos);
    
    UFUNCTION(BlueprintCallable)
    void ClearGrid();
    
    UFUNCTION(BlueprintCallable)
    void CheckGrid(int32 PlayerId);
    
};

