#include "Fuzzinator.h"

UFuzzinator::UFuzzinator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->finsMeshComp = NULL;
    this->finsMeshComp2 = NULL;
    this->mergeVertexData = false;
    this->positionMergeTolerance_Vertex = 0.00f;
    this->lightmapUVMergeTolerance_Vertex = 0.00f;
    this->mergeDuplicateEdges = false;
    this->normalMergeTolerance_Edge = 0.00f;
    this->cullEdgesWithImposibleNormals = false;
    this->edgeNormalChangeTolerance = 0.00f;
    this->joinPolys = false;
    this->normalMergeTolerance_Poly = 0.00f;
    this->edgeMergeTolerance_Poly = 0.00f;
    this->translucentBaseMaterial = NULL;
    this->maskedBaseMaterial = NULL;
    this->fuzzTable = NULL;
    this->ShowFuzzReport = false;
    this->VersionGenerated = 1;
    this->FuzzManager = NULL;
    this->UseUV4 = false;
}

void UFuzzinator::UpdateMaterials(TArray<UStaticMeshComponent*> allBaseMeshes) {
}

void UFuzzinator::GetFinsRawDataFromMultiStaticMesh(TArray<UStaticMeshComponent*> allBaseMeshes) {
}


