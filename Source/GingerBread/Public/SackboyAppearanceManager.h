#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AppearanceManagerReadyDelegate.h"
#include "AppearanceSlot.h"
#include "EPlayerJoinDirection.h"
#include "EPlayerSlot.h"
#include "GingerbreadManager.h"
#include "GingerbreadPlayerId.h"
#include "SackboyAppearanceManager.generated.h"

class AGingerbreadPlayerController;
class ASackboyAppearanceManager;
class UDataTable;
class UMaterialParameterCollection;
class UObject;

UCLASS(Blueprintable)
class ASackboyAppearanceManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAppearanceSlot> SlotAppearances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* PlayerColoursParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ColourBlindProfiles;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppearanceManagerReady OnAppearanceManagerReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AppearanceManagerIsReady;
    
    ASackboyAppearanceManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RefreshControllerColours();
    
    UFUNCTION(BlueprintCallable)
    void OnSettingsReady(const FGingerbreadPlayerId& player_id);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer);
    
    UFUNCTION(BlueprintCallable)
    FAppearanceSlot GetUserAppearanceSlotFromController(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    FAppearanceSlot GetUserAppearanceSlot(EPlayerSlot PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    FGingerbreadPlayerId GetPlayerIDFromController(AGingerbreadPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASackboyAppearanceManager* GetAppearanceManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetAppearanceColour(EPlayerSlot PlayerSlot);
    
};

