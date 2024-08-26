#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EThreadAttachmentType.h"
#include "ThreadStartAttachment.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FThreadStartAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EThreadAttachmentType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> AttachedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ActorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseFrayMesh;
    
    GINGERBREAD_API FThreadStartAttachment();
};

