#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UnlockType.h"
#include "UnlockableItemType.h"
#include "ItemUnlockManager.generated.h"

class IUnlockImplementorIface;
class UUnlockImplementorIface;
class IUnlockableItemImplementorIface;
class UUnlockableItemImplementorIface;

UCLASS(Blueprintable)
class UItemUnlockManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UnlockableItemType, TScriptInterface<IUnlockableItemImplementorIface>> ItemImplementors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UnlockType, TScriptInterface<IUnlockImplementorIface>> UnlockImplementors;
    
public:
    UItemUnlockManager();

};

