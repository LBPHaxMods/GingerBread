#include "ProcStaticMeshComponent.h"

UProcStaticMeshComponent::UProcStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaveInLevel = true;
    this->VertexColorImportOption = EVertexColorImportType::TakeNew;
    this->DefaultLightmapResolution = 0;
    this->MinLightmapResolution = 0;
    this->GenerateLightmapUVs = true;
    this->SrcLightmapIndex = 1;
    this->DestLightmapIndex = 1;
    this->CollisionTraceFlag = CTF_UseDefault;
    this->LODGroup = TEXT("None");
    this->BasePercentTriangles = 1.00f;
    this->WeldingThreshold = 0.00f;
    this->Path = TEXT("/Game/GeneratedMeshes/");
}

void UProcStaticMeshComponent::GenerateStaticMeshFromRawMesh(FRawMeshProc RawMesh, const FString& OwnerComponentName, int32 LightMapResolution, int32 LightmapResolutionMin) {
}


