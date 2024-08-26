#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "EServerTriggerState.h"
#include "Position_Net.h"
#include "NetworkFunctionLibrary.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API UNetworkFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNetworkFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector_NetQuantizeNormal VectorToNetQuantizeNormal(const FVector& Vector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector_NetQuantize100 VectorToNetQuantize100(const FVector& Vector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector_NetQuantize10 VectorToNetQuantize10(const FVector& Vector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector_NetQuantize VectorToNetQuantize(const FVector& Vector);
    
    UFUNCTION(BlueprintCallable)
    static void UnpackPosition_NetToComponent(FPosition_Net Position, UPrimitiveComponent* Primitive);
    
    UFUNCTION(BlueprintCallable)
    static void ProcessServerTriggerTimestamp(const AActor* LevelActor, const float Timestamp, EServerTriggerState& TriggerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPosition_Net PackPosition_NetFromComponent(UPrimitiveComponent* Primitive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetServerTriggerTimestamp(const AActor* LevelActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetProcessServerTriggerRetryDelay();
    
};

