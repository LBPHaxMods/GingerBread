#pragma once
#include "CoreMinimal.h"
#include "GingerbreadManager.h"
#include "MusicStateManager.generated.h"

UCLASS(Blueprintable)
class AMusicStateManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MusicStateGroups;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MusicStates, meta=(AllowPrivateAccess=true))
    TArray<FName> MusicStates;
    
public:
    AMusicStateManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_MusicStates(TArray<FName> PrevMusicStates);
    
};

