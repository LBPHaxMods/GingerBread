#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Engine/DataTable.h"
#include "RollPath.generated.h"

UINTERFACE(Blueprintable)
class GINGERBREAD_API URollPath : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API IRollPath : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UnbindAllEventsFromRollAnimationEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetPathVisible(const bool bPathVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsZoneLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsUnrolled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FDataTableRowHandle GetZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetUnrollDurationSeconds() const;
    
};

