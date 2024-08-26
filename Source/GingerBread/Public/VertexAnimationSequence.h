#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VertexAnimationClip.h"
#include "VertexAnimationSequence.generated.h"

class UStaticMesh;
class UVertexAnimationSequence;

UCLASS(Blueprintable)
class GINGERBREAD_API UVertexAnimationSequence : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SequenceSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVertexAnimationClip> Clips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* DefaultStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVertexAnimationSequence* Source;
    
    UVertexAnimationSequence();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumClips() const;
    
};

