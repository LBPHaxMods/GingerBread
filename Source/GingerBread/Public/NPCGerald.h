#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EGeraldLocation.h"
#include "NPCBase.h"
#include "NPCGerald.generated.h"

class ASackboy;
class UOverlapManagerComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ANPCGerald : public ANPCBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeraldLocation GeraldLocation;
    
public:
    ANPCGerald(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapAnySackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

