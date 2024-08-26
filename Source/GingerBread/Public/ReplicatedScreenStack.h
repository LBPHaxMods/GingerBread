#pragma once
#include "CoreMinimal.h"
#include "ReplicatedScreenStack.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedScreenStack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ScreenStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> ScreenLayering;
    
    GINGERBREAD_API FReplicatedScreenStack();
};

