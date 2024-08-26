#include "ProceduralFunctionLibrary.h"

UProceduralFunctionLibrary::UProceduralFunctionLibrary() {
}

void UProceduralFunctionLibrary::SetLightmapType(UPrimitiveComponent* PrimComponent, ELightmapType eType) {
}

UStaticMesh* UProceduralFunctionLibrary::SaveProceduralMesh(UProceduralMeshComponent* ProcMesh, AActor* OwningActor, bool SaveInLevel, int32 DefaultLightmapResolution, const FString& Path) {
    return NULL;
}

UStaticMesh* UProceduralFunctionLibrary::MergeChildMeshComponents(AActor* Actor, UStaticMeshComponent* MergedStaticMeshComponent, TArray<UStaticMeshComponent*> MeshComponentsToMerge) {
    return NULL;
}

bool UProceduralFunctionLibrary::LineTraceVisualComponentsList(const FVector& Start, const FVector& end, const TArray<UStaticMeshComponent*>& MeshComponents, FVisualComponentHit& OutHit) {
    return false;
}

bool UProceduralFunctionLibrary::LineTraceVisualComponents(const FVector& Start, const FVector& end, FVisualComponentHit& OutHit) {
    return false;
}

void UProceduralFunctionLibrary::LineGatherVisualComponents(const FVector& Start, const FVector& end, TArray<UStaticMeshComponent*>& OutMeshComponents) {
}

void UProceduralFunctionLibrary::IncrementIntegerArray(const TArray<int32>& Integers, TArray<int32>& NewIntegers, int32 increment, int32 StartIdx, bool UseModulo, int32 Modulo) {
}

void UProceduralFunctionLibrary::GetUpAndRollForSplineSegment(const USplineComponent* SplineComponent, const float StartDistance, const float EndDistance, const TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, FVector& MeshUpVector, float& StartRoll, float& EndRoll) {
}

void UProceduralFunctionLibrary::GetRawMeshFromStaticMeshComponent(UStaticMeshComponent* InMeshComp, FRawMeshProc& RawMesh, int32 LODIndex, bool sRGBColor) {
}

void UProceduralFunctionLibrary::GetRawMeshFromStaticMesh(UStaticMesh* InMesh, FRawMeshProc& RawMesh, int32 LODIndex) {
}

UStaticMesh* UProceduralFunctionLibrary::CreateStaticMeshFromRawMesh(AActor* OwningActor, FRawMeshProc RawMesh, EVertexColorImportType VertexColorImportOption, FColor VertexOverrideColor, bool SaveInLevel, int32 DefaultLightmapResolution, int32 MinLightmapResolution, bool GenerateLightmapUVs, int32 SrcLightmapIndex, int32 DestLightmapIndex, const FString& LODGroup, float BasePercentTriangles, float WeldingThreshold, TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag, const FString& Path, const FString& OwningComponentName) {
    return NULL;
}

void UProceduralFunctionLibrary::ConvexDecomposition(AActor* OwningActor, TArray<FCollisionSection>& OutCollisionSections, const TArray<FVector>& InVertices, const TArray<int32>& InIndices, float InAccuracy, int32 InMaxHullVerts) {
}

void UProceduralFunctionLibrary::BreakVisualComponentHit(const FVisualComponentHit& Hit, bool& bHit, float& Time, float& Distance, FVector& Position, FVector& Normal, UStaticMeshComponent*& component, UPhysicalMaterial*& PhysicalMaterial, FVector& Origin) {
}

void UProceduralFunctionLibrary::BoxGatherVisualComponents(const FBox& IntersectBounds, TArray<UStaticMeshComponent*>& OutMeshComponents) {
}

FBoxSphereBounds UProceduralFunctionLibrary::BoundsFromSkeletalMeshPose(USkeletalMeshComponent* SkelMesh) {
    return FBoxSphereBounds{};
}


