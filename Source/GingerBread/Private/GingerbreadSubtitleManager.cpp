#include "GingerbreadSubtitleManager.h"
#include "AkComponent.h"

AGingerbreadSubtitleManager::AGingerbreadSubtitleManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_SubtitleManager"));
    this->Ak_SubtitleManager = (UAkComponent*)RootComponent;
    this->LoadedTimingTable = NULL;
}

void AGingerbreadSubtitleManager::ShowSubtitles(const FText& Text, bool bPlayAudio, AActor* Speaker, bool bInvisibleSubtitles) {
}

void AGingerbreadSubtitleManager::OnSubtitleTimingsLoaded() {
}

void AGingerbreadSubtitleManager::OnGameCultureLoaded() {
}

void AGingerbreadSubtitleManager::InitSubtitles() {
}

FLinearColor AGingerbreadSubtitleManager::GetSubtitleColour() {
    return FLinearColor{};
}

AGingerbreadSubtitleManager* AGingerbreadSubtitleManager::GetGingerbreadSubtitleManager(UObject* WorldContextObject) {
    return NULL;
}

void AGingerbreadSubtitleManager::EndSubtitles(bool bStopAudio) {
}


