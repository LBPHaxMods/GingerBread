#pragma once
#include "CoreMinimal.h"
#include "GingerbreadReplicatedHud.h"
#include "GingerbreadReplicatedHud_Level.generated.h"

UCLASS(Blueprintable)
class AGingerbreadReplicatedHud_Level : public AGingerbreadReplicatedHud {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HostReplicatedCollectedOrbs, meta=(AllowPrivateAccess=true))
    TArray<int32> HostCollectedOrbs;
    
public:
    AGingerbreadReplicatedHud_Level(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetHostCollectedOrbs(const TArray<int32>& HostOrbs);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HostReplicatedCollectedOrbs();
    
};

