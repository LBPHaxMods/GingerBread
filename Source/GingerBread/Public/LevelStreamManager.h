#pragma once
#include "CoreMinimal.h"
#include "GingerbreadManager.h"
#include "LevelStreamingEventDelegate.h"
#include "LevelStreamManager.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API ALevelStreamManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PersistantLevels;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelStreamingEvent OnStartLevelLoad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelStreamingEvent OnFinishLevelLoad;
    
    ALevelStreamManager(const FObjectInitializer& ObjectInitializer);

};

