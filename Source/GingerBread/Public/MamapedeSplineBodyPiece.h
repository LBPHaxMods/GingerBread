#pragma once
#include "CoreMinimal.h"
#include "MamapedeVertexAnimData.h"
#include "MamapedeSplineBodyPiece.generated.h"

class AMamapedeBodySection;
class USkeletalMeshComponent;
class USplineMeshComponent;

USTRUCT(BlueprintType)
struct FMamapedeSplineBodyPiece {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMamapedeBodySection* PhysicalActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* LegsMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMamapedeVertexAnimData VertexAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NewBodyPiece;
    
    GINGERBREAD_API FMamapedeSplineBodyPiece();
};

