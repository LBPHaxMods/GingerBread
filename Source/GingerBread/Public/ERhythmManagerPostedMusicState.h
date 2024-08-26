#pragma once
#include "CoreMinimal.h"
#include "ERhythmManagerPostedMusicState.generated.h"

UENUM()
enum class ERhythmManagerPostedMusicState : int32 {
    Indeterminate,
    NotPosted,
    Posted,
};

