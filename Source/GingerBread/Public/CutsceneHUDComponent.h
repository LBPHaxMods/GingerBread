#pragma once
#include "CoreMinimal.h"
#include "CutSceneScectionProperties.h"
#include "CutsceneEventDelegate.h"
#include "GingerbreadHUDComponent.h"
#include "LevelIntroChangedDelegate.h"
#include "CutsceneHUDComponent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCutsceneHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutsceneEvent CutsceneStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutsceneEvent CutsceneFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelIntroChanged OnLevelIntroRequestedChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TopBlackBarName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BottomBlackBarName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutSceneScectionProperties BlackBarsSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutSceneScectionProperties SkipCutscenePromptSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutSceneScectionProperties SkipTextPromptSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutSceneScectionProperties NextAndSkipTextPromptSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutSceneScectionProperties LevelTitleSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutSceneScectionProperties VoteSkipsSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutSceneScectionProperties PauseTextSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PauseOnSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PauseOffSFX;
    
    UCutsceneHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowPauseText(bool Show);
    
    UFUNCTION(BlueprintCallable)
    void ShowCutSceneUI(bool show_blackbars, bool show_skip_cutscene_prompt, bool show_skip_speech_prompt, bool show_title_screen, bool show_vote_skips, bool show_next_and_skip_prompt);
    
    UFUNCTION(BlueprintCallable)
    void RequestVisibilityCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPauseTextVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNonPauseComponentVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelIntroRequested() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCutscene() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlackBarsVisible() const;
    
};

