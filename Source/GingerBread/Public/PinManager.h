#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GingerbreadPlayerId.h"
#include "PlayerPinDisplayData.h"
#include "PinManager.generated.h"

class ASackboy;
class UDataTable;
class UPinManager;

UCLASS(Blueprintable)
class GINGERBREAD_API UPinManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PinDataTable;
    
public:
    UPinManager();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetPlayerPinDisplayData(const UObject* WorldContextObject, FPlayerPinDisplayData& DisplayData, bool& bFound, const FGingerbreadPlayerId& PlayerId, const FName& PinName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName GetPinNameFromID(const UObject* WorldContextObject, int32 UniqueId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPinManager* GetInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void AwardPinProgressForSackboy(const ASackboy* Sackboy, const FName& PinName, int32 IncrementValue, bool RequestSave);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AwardPinProgress(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const FName& PinName, int32 IncrementValue, bool RequestSave);
    
};

