#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AKAIAudioTableStructure.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FAKAIAudioTableStructure : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent;
    
    GINGERBREAD_API FAKAIAudioTableStructure();
};

