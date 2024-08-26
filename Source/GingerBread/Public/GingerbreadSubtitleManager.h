#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GingerbreadManager.h"
#include "SubtitleEndDelegate.h"
#include "SubtitleSpeakerColours.h"
#include "VOOverlapDelegate.h"
#include "GingerbreadSubtitleManager.generated.h"

class AActor;
class AGingerbreadSubtitleManager;
class UAkComponent;
class UDataTable;
class UObject;

UCLASS(Blueprintable)
class GINGERBREAD_API AGingerbreadSubtitleManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubtitleSpeakerColours SpeakerColours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> LocalisedSpeakerMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* Ak_SubtitleManager;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVOOverlap OnVOOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubtitleEnd OnSubtitleEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LoadedTimingTable;
    
    AGingerbreadSubtitleManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowSubtitles(const FText& Text, bool bPlayAudio, AActor* Speaker, bool bInvisibleSubtitles);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSubtitleTimingsLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnGameCultureLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitSubtitles();
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetSubtitleColour();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGingerbreadSubtitleManager* GetGingerbreadSubtitleManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void EndSubtitles(bool bStopAudio);
    
};

