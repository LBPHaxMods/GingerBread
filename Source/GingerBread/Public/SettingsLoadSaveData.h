#pragma once
#include "CoreMinimal.h"
#include "SettingsLoadSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSettingsLoadSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SeenFirstTimeScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VibrationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TriggerModeDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseControllerAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GrabCarryToggleEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlutterJumpToggleEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RollHoldToggleEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StickSwap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertXAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertYAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseRightStickToTilt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerDeadzone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterDeadzone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Controller_Remaps[14];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Keyboard_Remaps[14];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Controller_Axis_Remaps[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Keyboard_Axis_Remaps[8];
    
    GINGERBREAD_API FSettingsLoadSaveData();
};

