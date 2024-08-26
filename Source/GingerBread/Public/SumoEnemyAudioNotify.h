#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EAKAIAudioEmitter.h"
#include "SumoEnemyAudioNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class GINGERBREAD_API USumoEnemyAudioNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnemyAudioAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAKAIAudioEmitter EnemyAudioEmitter;
    
public:
    USumoEnemyAudioNotify();

};

