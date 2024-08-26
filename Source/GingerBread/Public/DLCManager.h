#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PSNProductId.h"
#include "DLCManager.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class GINGERBREAD_API UDLCManager : public UObject {
    GENERATED_BODY()
public:
    UDLCManager();

    UFUNCTION(BlueprintCallable)
    static bool OpenDLCStoreOS(APlayerController* InPlayerController);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTitleFilesUpdate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_PSNProductId(const FPSNProductId& A, const FPSNProductId& B);
    
};

