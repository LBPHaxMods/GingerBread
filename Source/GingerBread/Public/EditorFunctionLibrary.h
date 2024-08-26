#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/SplineComponent.h"
#include "EWorldLocation.h"
#include "EditorLevelObjectTrackerCount.h"
#include "Templates/SubclassOf.h"
#include "EditorFunctionLibrary.generated.h"

class AActor;
class AEmitter;
class UActorComponent;
class ULevel;
class UObject;
class USplineComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API UEditorFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEditorFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetLevelFromActor(const AActor* Actor, ULevel*& Level);
    
    UFUNCTION(BlueprintCallable)
    static void EDITOR_SpawnActorIntoEditorViewPort(const TSubclassOf<AActor> ActorClass, const FTransform& Transform, ULevel* Level, AActor*& OutActor);
    
    UFUNCTION(BlueprintCallable)
    static void EDITOR_SetActorOutlinerFolder(AActor* Actor, FName Path);
    
    UFUNCTION(BlueprintCallable)
    static bool EDITOR_ReplaceActorWithDifferentType(AActor* OldActor, UClass* NewClass, bool Destroy, AActor*& NewActor);
    
    UFUNCTION(BlueprintCallable)
    static void EDITOR_RemoveGeneratedComponent(AActor* BlueprintObject, UActorComponent* TargetComponent);
    
    UFUNCTION(BlueprintCallable)
    static void EDITOR_OpenTextFile(const FString& FilePath, TArray<FString>& Lines);
    
    UFUNCTION(BlueprintCallable)
    static void EDITOR_OpenFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes, TArray<FString>& OutFileNames);
    
    UFUNCTION(BlueprintCallable)
    static void EDITOR_LevelObjectTrackerWriteLogFile(TArray<FEditorLevelObjectTrackerCount> OutputArray);
    
    UFUNCTION(BlueprintCallable)
    static void EDITOR_LevelObjectTrackerRun();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool EDITOR_GetGingerbreadWorldLocation_NotInPlay(const UObject* WorldContextObject, EWorldLocation& WorldLocation);
    
    UFUNCTION(BlueprintCallable)
    static void EDITOR_GetAllActorsFromViewport(TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors, bool currentLevelOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName EDITOR_GetActorOutlinerFolder(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void EDITOR_DirtyActorComponent(UActorComponent* component);
    
    UFUNCTION(BlueprintCallable)
    static void EDITOR_DirtyActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void EDITOR_DestroyAllAttachedChildrenOfType(AActor* ParentActor, UClass* classTypeToDestroy);
    
    UFUNCTION(BlueprintCallable)
    static bool EDITOR_CreateGingerbreadEmitterFromEmitter(AEmitter* Emitter, bool DestroyEmitter);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* EDITOR_CreateComponent(AActor* ActorInstance, UClass* NewComponentClass, FName NewComponentName);
    
    UFUNCTION(BlueprintCallable)
    static void EDITOR_CopySplineComponentData(USplineComponent* CopyToSpline, USplineComponent* CopyFromSpline, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool MatchRelativeLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool EDITOR_CopyActorTriggerAssignment(AActor* AssignedActor, AActor* ToAssign);
    
    UFUNCTION(BlueprintCallable)
    static void EDITOR_ClearAllGeneratedComponents(AActor* ActorRef, bool FlushGC);
    
};

