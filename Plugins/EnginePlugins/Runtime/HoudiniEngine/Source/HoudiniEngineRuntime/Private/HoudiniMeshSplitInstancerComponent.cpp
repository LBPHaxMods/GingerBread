#include "HoudiniMeshSplitInstancerComponent.h"

UHoudiniMeshSplitInstancerComponent::UHoudiniMeshSplitInstancerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverrideMaterial = NULL;
    this->InstancedMesh = NULL;
}


