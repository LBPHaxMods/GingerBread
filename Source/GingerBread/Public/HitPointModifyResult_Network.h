#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "HitPointModifyResult_Network.generated.h"

class AActor;
class ASackboy;
class UHitPointsModifierComponent;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FHitPointModifyResult_Network {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 StatusAndActioningStatus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 HitPointsBefore;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 HitPointsAfter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceTableEntryRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SourceTableEntryRowIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 ContactPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 ContactRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> SourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> SourcePrimitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHitPointsModifierComponent> SourceHitPointsModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> TargetPrimitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Instigator;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASackboy> ActioningSackboyClient;
    
    GINGERBREAD_API FHitPointModifyResult_Network();
};

