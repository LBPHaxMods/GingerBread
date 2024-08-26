#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CachedFloats.h"
#include "CachedTransforms.h"
#include "ArtMoverManager.generated.h"

class AArtMoverManager;
class UObject;

UCLASS(Blueprintable)
class GINGERBREAD_API AArtMoverManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FCachedTransforms> SharedSplineCache;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FCachedFloats> SharedFloatCurveCache;
    
    AArtMoverManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AArtMoverManager* GetInstance(UObject* WorldContextObject);
    
};

