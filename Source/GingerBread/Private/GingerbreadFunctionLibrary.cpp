#include "GingerbreadFunctionLibrary.h"

UGingerbreadFunctionLibrary::UGingerbreadFunctionLibrary() {
}

void UGingerbreadFunctionLibrary::ToggleOcclusionPostProcess(const UObject* WorldContextObject, bool bEnabled) {
}

void UGingerbreadFunctionLibrary::StartCutscene(const UObject* WorldContextObject, AGingerbreadLevelSequenceActor* CutsceneController, AGingerbreadLevelSequenceActor* PS5_CutsceneController, FName CutsceneTriggersTag, FName CutsceneActorsTag) {
}

void UGingerbreadFunctionLibrary::SetSimulatingPhysicsForBone(USkeletalMeshComponent* SkeletalMesh, FName BoneName, bool bSimulate) {
}

void UGingerbreadFunctionLibrary::SetScaleAtSplinePoint(USplineComponent* Target, int32 PointIndex, const FVector& Scale) {
}

void UGingerbreadFunctionLibrary::SetOverrideLightmapResolutionEditorOnly(UStaticMeshComponent* Mesh, bool OverrideOn, int32 LightmapRes) {
}

void UGingerbreadFunctionLibrary::SetOverrideConstructionScript(USplineComponent* Target, bool bOverrideConstructionScript) {
}

void UGingerbreadFunctionLibrary::SetIsEditorOnlyEditorOnly(UActorComponent* ActorComponent, bool IsEditorOnly) {
}

void UGingerbreadFunctionLibrary::SetDominationGroupToDefault(const UObject* WorldContextObject, UPrimitiveComponent* Primitive) {
}

void UGingerbreadFunctionLibrary::SetDominationGroupToBeDominatedBySackboy(const UObject* WorldContextObject, UPrimitiveComponent* Primitive) {
}

void UGingerbreadFunctionLibrary::SetDominationGroupToAlwaysDominated(const UObject* WorldContextObject, UPrimitiveComponent* Primitive) {
}

void UGingerbreadFunctionLibrary::SetComponentMobilityEditorOnly(USceneComponent* component, TEnumAsByte<EComponentMobility::Type> Mobility) {
}

void UGingerbreadFunctionLibrary::SaveAndEnableFullQualityDOF() {
}

void UGingerbreadFunctionLibrary::RetryLevel(const UObject* WorldContextObject) {
}

void UGingerbreadFunctionLibrary::RestoreDOFSettings() {
}

UTextureCube* UGingerbreadFunctionLibrary::RenderTargetCreateStaticTextureCubeEditorOnly(UTextureRenderTargetCube* RenderTarget, const FString& InName, UObject* Owner) {
    return NULL;
}

UTexture2D* UGingerbreadFunctionLibrary::RenderTargetCopyToOrCreateStaticTexture2DEditorOnly(UTextureRenderTarget2D* RenderTarget, const FString& InName, TEnumAsByte<TextureCompressionSettings> CompressionSettings, TEnumAsByte<TextureMipGenSettings> MipSettings, bool SetSRGB, int32 MaxTextureSize) {
    return NULL;
}

void UGingerbreadFunctionLibrary::PrintWorldActorInfo(const UObject* WorldContextObject) {
}

void UGingerbreadFunctionLibrary::PrintArchetypeName(const UObject* Object, FString& ArchetypeName) {
}

TArray<AActor*> UGingerbreadFunctionLibrary::PasteActorsFromString(FString& String) {
    return TArray<AActor*>();
}

FHitPointContactData UGingerbreadFunctionLibrary::MakeContactData(AActor* SourceActor, const FVector& modificationPos, const FVector& modificationNormal) {
    return FHitPointContactData{};
}

void UGingerbreadFunctionLibrary::LoadLevel(const UObject* WorldContextObject, FName LevelName, FName SpawnPointName, bool disableLevelIntroSequence) {
}

bool UGingerbreadFunctionLibrary::LaunchDemoNeedFourLevels(const UObject* WorldContextObject) {
    return false;
}

bool UGingerbreadFunctionLibrary::IsValidSectionName(const UAnimMontage* Montage, const FName sectionName) {
    return false;
}

bool UGingerbreadFunctionLibrary::IsUsingHitPointsSystem(const UObject* WorldContextObject) {
    return false;
}

bool UGingerbreadFunctionLibrary::IsURTest() {
    return false;
}

bool UGingerbreadFunctionLibrary::IsSplineToolUpdatingAllowed() {
    return false;
}

bool UGingerbreadFunctionLibrary::IsRideonLevel(const UObject* WorldContextObject) {
    return false;
}

bool UGingerbreadFunctionLibrary::IsPIERunning() {
    return false;
}

bool UGingerbreadFunctionLibrary::IsNetworkSessionRunningOrBeingCreated(const UObject* WorldContextObject) {
    return false;
}

bool UGingerbreadFunctionLibrary::IsLoomIntroAlwaysEnabled() {
    return false;
}

bool UGingerbreadFunctionLibrary::IsLaunchDemo(const UObject* WorldContextObject) {
    return false;
}

bool UGingerbreadFunctionLibrary::IsInNetworkSession(const UObject* WorldContextObject) {
    return false;
}

bool UGingerbreadFunctionLibrary::IsDebugEnabled() {
    return false;
}

bool UGingerbreadFunctionLibrary::IsCreatedInConstructionScript(const UActorComponent* component) {
    return false;
}

bool UGingerbreadFunctionLibrary::IsCooking() {
    return false;
}

bool UGingerbreadFunctionLibrary::GetViewProjectionMatrix(const UObject* WorldContextObject, FMatrix& ViewProjectionMatrix, ECameraSettingsType CameraSettingsType) {
    return false;
}

int32 UGingerbreadFunctionLibrary::GetURTestVersion() {
    return 0;
}

bool UGingerbreadFunctionLibrary::GetTableIdAndKeyFromText(FText Text, FName& OutTableId, FString& OutKey) {
    return false;
}

ARideOnVehicle* UGingerbreadFunctionLibrary::GetRideonVehicle(const UObject* WorldContextObject) {
    return NULL;
}

AActor* UGingerbreadFunctionLibrary::GetOwnerEvenIfPendingDestroy(const UActorComponent* ActorComponent) {
    return NULL;
}

FString UGingerbreadFunctionLibrary::GetLongPackageNameFromSoftObject(const FSoftObjectPath& SoftObject) {
    return TEXT("");
}

FSoftObjectPath UGingerbreadFunctionLibrary::GetLaunchDemoFrontendMap() {
    return FSoftObjectPath{};
}

int32 UGingerbreadFunctionLibrary::GetFrameCounter(const UObject* WorldContextObject) {
    return 0;
}

void UGingerbreadFunctionLibrary::GetComponentCollisionsAtLocation(UPrimitiveComponent* component, const FVector& Location, const FRotator& Rotation, TArray<FHitResult>& hits, bool& blocking_hit, bool ignore_overlaps) {
}

FString UGingerbreadFunctionLibrary::GetActorLevelName(const AActor* Actor, bool& bSuccess) {
    return TEXT("");
}

ULevel* UGingerbreadFunctionLibrary::GetActorLevel(AActor*& Actor) {
    return NULL;
}

void UGingerbreadFunctionLibrary::GenerateComponentCollisionHitEvents(UPrimitiveComponent* component) {
}

void UGingerbreadFunctionLibrary::ForceUpdateTextureCubeResourceEditorOnly(UTextureCube* Texture) {
}

AActor* UGingerbreadFunctionLibrary::FindRootActor(const USceneComponent* component) {
    return NULL;
}

bool UGingerbreadFunctionLibrary::DuplicateSplineKeys(const USplineComponent* Source, USplineComponent* Target, TEnumAsByte<ESplineCoordinateSpace::Type> Space) {
    return false;
}

bool UGingerbreadFunctionLibrary::DuplicateSplineKey(const USplineComponent* Source, int32 source_key, USplineComponent* Target, int32 target_key, TEnumAsByte<ESplineCoordinateSpace::Type> Space) {
    return false;
}

void UGingerbreadFunctionLibrary::DrawLine(const UObject* WorldContextObject, const FVector& From, const FVector& To, FColor Color, float Width, float Time, bool persistant) {
}

bool UGingerbreadFunctionLibrary::DisableCutscenesInEditor(const UObject* WorldContextObject) {
    return false;
}

bool UGingerbreadFunctionLibrary::DisableCutscenes(const UObject* WorldContextObject) {
    return false;
}

void UGingerbreadFunctionLibrary::DestroyAllActorsInSubLevel(ULevelStreaming* TargetSubLevel) {
}

void UGingerbreadFunctionLibrary::DebugPausePIE() {
}

FString UGingerbreadFunctionLibrary::CopySelectedActorsToString(ULevel*& OwningLevel) {
    return TEXT("");
}

FString UGingerbreadFunctionLibrary::CopyActorsToString(ULevel*& OwningLevel, const TArray<AActor*>& ActorToCopy) {
    return TEXT("");
}

void UGingerbreadFunctionLibrary::CallConstruction(AActor* Actor) {
}

float UGingerbreadFunctionLibrary::CalculateLaunchSpeed(const FVector& Origin, const FVector& Target, float angle_degrees, float Gravity) {
    return 0.0f;
}

bool UGingerbreadFunctionLibrary::Box2DIntersection(const FBox2D& A, const FBox2D& B) {
    return false;
}


