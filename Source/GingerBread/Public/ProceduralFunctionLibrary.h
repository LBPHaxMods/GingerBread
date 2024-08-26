#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PhysicsEngine/BodySetupEnums.h"
#include "Engine/EngineTypes.h"
#include "Components/SplineComponent.h"
#include "CollisionSection.h"
#include "EVertexColorImportType.h"
#include "RawMeshProc.h"
#include "VisualComponentHit.h"
#include "ProceduralFunctionLibrary.generated.h"

class AActor;
class UPhysicalMaterial;
class UPrimitiveComponent;
class UProceduralMeshComponent;
class USkeletalMeshComponent;
class USplineComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API UProceduralFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UProceduralFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetLightmapType(UPrimitiveComponent* PrimComponent, ELightmapType eType);
    
    UFUNCTION(BlueprintCallable)
    static UStaticMesh* SaveProceduralMesh(UProceduralMeshComponent* ProcMesh, AActor* OwningActor, bool SaveInLevel, int32 DefaultLightmapResolution, const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static UStaticMesh* MergeChildMeshComponents(AActor* Actor, UStaticMeshComponent* MergedStaticMeshComponent, TArray<UStaticMeshComponent*> MeshComponentsToMerge);
    
    UFUNCTION(BlueprintCallable)
    static bool LineTraceVisualComponentsList(const FVector& Start, const FVector& end, const TArray<UStaticMeshComponent*>& MeshComponents, FVisualComponentHit& OutHit);
    
    UFUNCTION(BlueprintCallable)
    static bool LineTraceVisualComponents(const FVector& Start, const FVector& end, FVisualComponentHit& OutHit);
    
    UFUNCTION(BlueprintCallable)
    static void LineGatherVisualComponents(const FVector& Start, const FVector& end, TArray<UStaticMeshComponent*>& OutMeshComponents);
    
    UFUNCTION(BlueprintCallable)
    static void IncrementIntegerArray(const TArray<int32>& Integers, TArray<int32>& NewIntegers, int32 increment, int32 StartIdx, bool UseModulo, int32 Modulo);
    
    UFUNCTION(BlueprintCallable)
    static void GetUpAndRollForSplineSegment(const USplineComponent* SplineComponent, const float StartDistance, const float EndDistance, const TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, FVector& MeshUpVector, float& StartRoll, float& EndRoll);
    
    UFUNCTION(BlueprintCallable)
    static void GetRawMeshFromStaticMeshComponent(UStaticMeshComponent* InMeshComp, FRawMeshProc& RawMesh, int32 LODIndex, bool sRGBColor);
    
    UFUNCTION(BlueprintCallable)
    static void GetRawMeshFromStaticMesh(UStaticMesh* InMesh, FRawMeshProc& RawMesh, int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    static UStaticMesh* CreateStaticMeshFromRawMesh(AActor* OwningActor, FRawMeshProc RawMesh, EVertexColorImportType VertexColorImportOption, FColor VertexOverrideColor, bool SaveInLevel, int32 DefaultLightmapResolution, int32 MinLightmapResolution, bool GenerateLightmapUVs, int32 SrcLightmapIndex, int32 DestLightmapIndex, const FString& LODGroup, float BasePercentTriangles, float WeldingThreshold, TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag, const FString& Path, const FString& OwningComponentName);
    
    UFUNCTION(BlueprintCallable)
    static void ConvexDecomposition(AActor* OwningActor, TArray<FCollisionSection>& OutCollisionSections, const TArray<FVector>& InVertices, const TArray<int32>& InIndices, float InAccuracy, int32 InMaxHullVerts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakVisualComponentHit(const FVisualComponentHit& Hit, bool& bHit, float& Time, float& Distance, FVector& Position, FVector& Normal, UStaticMeshComponent*& component, UPhysicalMaterial*& PhysicalMaterial, FVector& Origin);
    
    UFUNCTION(BlueprintCallable)
    static void BoxGatherVisualComponents(const FBox& IntersectBounds, TArray<UStaticMeshComponent*>& OutMeshComponents);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBoxSphereBounds BoundsFromSkeletalMeshPose(USkeletalMeshComponent* SkelMesh);
    
};

