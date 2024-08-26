#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ImageSet.h"
#include "GingerbreadSaveImageSet.generated.h"

UCLASS(Blueprintable)
class UGingerbreadSaveImageSet : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImageSet Data;
    
    UGingerbreadSaveImageSet();

};

