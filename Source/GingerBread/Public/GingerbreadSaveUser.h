#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "LoadSaveData.h"
#include "GingerbreadSaveUser.generated.h"

UCLASS(Blueprintable)
class UGingerbreadSaveUser : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadSaveData Data;
    
    UGingerbreadSaveUser();

};

