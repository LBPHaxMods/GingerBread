#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EAKAIAudioEmitter.h"
#include "IAIAudio.generated.h"

class UAkComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UIAIAudio : public UInterface {
    GENERATED_BODY()
};

class IIAIAudio : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetAKEnemyEmitter(const EAKAIAudioEmitter Emitter, const UAkComponent* AkComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PlayAKEnemyAudio(const FName AKEnemyAudioAction, const EAKAIAudioEmitter AKEnemyAudioEmitter);
    
};

