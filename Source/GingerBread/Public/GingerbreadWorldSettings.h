#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "GingerbreadSubLevelDropdown_Dynamic.h"
#include "GingerbreadWorldSettings.generated.h"

class UGameplayAudioManagerDataAsset;
class UGingerbreadLevelSettingsDataAsset;
class ULevelResetManagerDataAsset;
class USackboyAppearanceManagerDataAsset;
class USackboyRespawnManagerDataAsset;
class UTimedChallengeDataAsset;
class UTriggerManagerDataAsset;

UCLASS(Blueprintable)
class GINGERBREAD_API AGingerbreadWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTriggerManagerDataAsset* TriggerManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGingerbreadLevelSettingsDataAsset* LevelSettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USackboyAppearanceManagerDataAsset* AppearanceManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USackboyRespawnManagerDataAsset* SackboyRespawnManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayAudioManagerDataAsset* GameplayAudioManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTimedChallengeDataAsset* TimedChallengeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelResetManagerDataAsset* LevelResetManagerData;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 m_EnabledManagerFlags;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_ManagerEnabledStates[39];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGingerbreadSubLevelDropdown_Dynamic> m_ResettableSubLevelPaths_Editable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowLevelResetOnDeath;
    
public:
    AGingerbreadWorldSettings(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void EDITOR_ResetGameModeOverride();
    
};

