#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputCoreTypes.h"
#include "KeyIconCollectionData.h"
#include "TEAControllerType.h"
#include "KeyIconCollection.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class GINGERBREAD_API UKeyIconCollection : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEAControllerType, FKeyIconCollectionData> ControllerTypeData;
    
public:
    UKeyIconCollection();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIcon(TEAControllerType Type, const FKey& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetDeviceIcon(TEAControllerType Type) const;
    
};

