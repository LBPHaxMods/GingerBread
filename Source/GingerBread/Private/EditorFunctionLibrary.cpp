#include "EditorFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UEditorFunctionLibrary::UEditorFunctionLibrary() {
}

void UEditorFunctionLibrary::GetLevelFromActor(const AActor* Actor, ULevel*& Level) {
}

void UEditorFunctionLibrary::EDITOR_SpawnActorIntoEditorViewPort(const TSubclassOf<AActor> ActorClass, const FTransform& Transform, ULevel* Level, AActor*& OutActor) {
}

void UEditorFunctionLibrary::EDITOR_SetActorOutlinerFolder(AActor* Actor, FName Path) {
}

bool UEditorFunctionLibrary::EDITOR_ReplaceActorWithDifferentType(AActor* OldActor, UClass* NewClass, bool Destroy, AActor*& NewActor) {
    return false;
}

void UEditorFunctionLibrary::EDITOR_RemoveGeneratedComponent(AActor* BlueprintObject, UActorComponent* TargetComponent) {
}

void UEditorFunctionLibrary::EDITOR_OpenTextFile(const FString& FilePath, TArray<FString>& Lines) {
}

void UEditorFunctionLibrary::EDITOR_OpenFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes, TArray<FString>& OutFileNames) {
}

void UEditorFunctionLibrary::EDITOR_LevelObjectTrackerWriteLogFile(TArray<FEditorLevelObjectTrackerCount> OutputArray) {
}

void UEditorFunctionLibrary::EDITOR_LevelObjectTrackerRun() {
}

bool UEditorFunctionLibrary::EDITOR_GetGingerbreadWorldLocation_NotInPlay(const UObject* WorldContextObject, EWorldLocation& WorldLocation) {
    return false;
}

void UEditorFunctionLibrary::EDITOR_GetAllActorsFromViewport(TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors, bool currentLevelOnly) {
}

FName UEditorFunctionLibrary::EDITOR_GetActorOutlinerFolder(const AActor* Actor) {
    return NAME_None;
}

void UEditorFunctionLibrary::EDITOR_DirtyActorComponent(UActorComponent* component) {
}

void UEditorFunctionLibrary::EDITOR_DirtyActor(AActor* Actor) {
}

void UEditorFunctionLibrary::EDITOR_DestroyAllAttachedChildrenOfType(AActor* ParentActor, UClass* classTypeToDestroy) {
}

bool UEditorFunctionLibrary::EDITOR_CreateGingerbreadEmitterFromEmitter(AEmitter* Emitter, bool DestroyEmitter) {
    return false;
}

UActorComponent* UEditorFunctionLibrary::EDITOR_CreateComponent(AActor* ActorInstance, UClass* NewComponentClass, FName NewComponentName) {
    return NULL;
}

void UEditorFunctionLibrary::EDITOR_CopySplineComponentData(USplineComponent* CopyToSpline, USplineComponent* CopyFromSpline, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool MatchRelativeLocation) {
}

bool UEditorFunctionLibrary::EDITOR_CopyActorTriggerAssignment(AActor* AssignedActor, AActor* ToAssign) {
    return false;
}

void UEditorFunctionLibrary::EDITOR_ClearAllGeneratedComponents(AActor* ActorRef, bool FlushGC) {
}


