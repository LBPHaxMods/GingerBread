#pragma once
#include "CoreMinimal.h"
#include "CameraBehaviour.h"
#include "LevelUnlockCameraBehaviour.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API ULevelUnlockCameraBehaviour : public UCameraBehaviour {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* AUTH_Target;
    
public:
    ULevelUnlockCameraBehaviour(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

