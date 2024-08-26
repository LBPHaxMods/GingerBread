#include "AudioMusicLevelProgressionRTPCTool.h"
#include "Components/SplineComponent.h"

AAudioMusicLevelProgressionRTPCTool::AAudioMusicLevelProgressionRTPCTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("AudioMusicLevelProgressionRTPCTool"));
    this->m_fCurrentLevelProgression = 0.00f;
    this->m_fPreviousLevelProgression = 0.00f;
    this->m_incrementDivision = 10;
    this->m_currentIncrement = 0;
    this->m_previousIncrement = 0;
    this->m_RTPCName = TEXT("music_level_progression");
    this->m_fActiveProximity = 200.00f;
    this->m_bDrawDebugMesh = false;
    this->m_pMeshComponent = NULL;
    this->m_pMaterialComponent = NULL;
}


