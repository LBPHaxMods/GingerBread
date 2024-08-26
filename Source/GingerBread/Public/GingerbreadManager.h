#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/LatentActionManager.h"
#include "EObjectValidity.h"
#include "Templates/SubclassOf.h"
#include "GingerbreadManager.generated.h"

class AGingerbreadManager;
class UObject;

UCLASS(Blueprintable)
class GINGERBREAD_API AGingerbreadManager : public AActor {
    GENERATED_BODY()
public:
    AGingerbreadManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetGingerbreadManager(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TSubclassOf<AGingerbreadManager> ManagerClass, bool bOnlyWithAuthority, AGingerbreadManager*& Manager, EObjectValidity& Out_ManagerValidity);
    
};

