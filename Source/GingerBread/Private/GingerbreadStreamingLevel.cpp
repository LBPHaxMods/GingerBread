#include "GingerbreadStreamingLevel.h"

UGingerbreadStreamingLevel::UGingerbreadStreamingLevel() {
}

bool UGingerbreadStreamingLevel::Unload(bool bBlockingUnload) {
    return false;
}

void UGingerbreadStreamingLevel::OnLevelUnloaded() {
}

void UGingerbreadStreamingLevel::OnLevelLoaded() {
}

void UGingerbreadStreamingLevel::OnLevelDeactivated() {
}

void UGingerbreadStreamingLevel::OnLevelActivated() {
}

bool UGingerbreadStreamingLevel::Load(bool bActivateOnceLoaded, bool bBlockingLoad) {
    return false;
}

bool UGingerbreadStreamingLevel::IsValid() const {
    return false;
}

bool UGingerbreadStreamingLevel::IsLoaded() const {
    return false;
}

bool UGingerbreadStreamingLevel::IsActive() const {
    return false;
}

FString UGingerbreadStreamingLevel::GetLevelPackageString() const {
    return TEXT("");
}

FName UGingerbreadStreamingLevel::GetLevelPackageFName() const {
    return NAME_None;
}

bool UGingerbreadStreamingLevel::Deactivate(bool bBlockingDeactivation) {
    return false;
}

UGingerbreadStreamingLevel* UGingerbreadStreamingLevel::BP_CreateInstancedFromPackageName(UObject* Outer, FName FullPackageName, FVector LevelLocation, FRotator LevelRotation, EObjectValidity& Out_ObjectValidity) {
    return NULL;
}

UGingerbreadStreamingLevel* UGingerbreadStreamingLevel::BP_CreateFromPackageName(UObject* Outer, FName FullPackageName, EObjectValidity& Out_ObjectValidity) {
    return NULL;
}

UGingerbreadStreamingLevel* UGingerbreadStreamingLevel::BP_CreateFromObject(UObject* Outer, ULevelStreamingDynamic* StreamingLevel, EObjectValidity& Out_ObjectValidity) {
    return NULL;
}

bool UGingerbreadStreamingLevel::Activate(bool bBlockingActivation) {
    return false;
}


