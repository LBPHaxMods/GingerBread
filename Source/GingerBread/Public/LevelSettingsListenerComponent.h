#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnLevelSettingsChangedDelegate.h"
#include "LevelSettingsListenerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API ULevelSettingsListenerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLevelSettingsChanged OnLevelSettingsChanged;
    
    ULevelSettingsListenerComponent(const FObjectInitializer& ObjectInitializer);

};

