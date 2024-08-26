#pragma once
#include "CoreMinimal.h"
#include "SplineLeaderSubject.generated.h"

class USceneComponent;
class USplineLeaderSubjectComponent;

USTRUCT(BlueprintType)
struct FSplineLeaderSubject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineLeaderSubjectComponent* SubjectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineOffset;
    
    GINGERBREAD_API FSplineLeaderSubject();
};

