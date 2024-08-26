#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EThreadAttachmentType.h"
#include "ThreadEndAttachment.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FThreadEndAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EThreadAttachmentType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> AttachedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ActorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseFrayMesh;
    
    GINGERBREAD_API FThreadEndAttachment();
};

