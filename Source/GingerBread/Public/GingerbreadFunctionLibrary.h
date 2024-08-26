#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Components/SplineComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/Texture.h"
#include "Engine/TextureDefines.h"
#include "ECameraSettingsType.h"
#include "HitPointContactData.h"
#include "GingerbreadFunctionLibrary.generated.h"

class AActor;
class AGingerbreadLevelSequenceActor;
class ARideOnVehicle;
class UActorComponent;
class UAnimMontage;
class ULevel;
class ULevelStreaming;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USplineComponent;
class UStaticMeshComponent;
class UTexture2D;
class UTextureCube;
class UTextureRenderTarget2D;
class UTextureRenderTargetCube;

UCLASS(Blueprintable)
class UGingerbreadFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGingerbreadFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ToggleOcclusionPostProcess(const UObject* WorldContextObject, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartCutscene(const UObject* WorldContextObject, AGingerbreadLevelSequenceActor* CutsceneController, AGingerbreadLevelSequenceActor* PS5_CutsceneController, FName CutsceneTriggersTag, FName CutsceneActorsTag);
    
    UFUNCTION(BlueprintCallable)
    static void SetSimulatingPhysicsForBone(USkeletalMeshComponent* SkeletalMesh, FName BoneName, bool bSimulate);
    
    UFUNCTION(BlueprintCallable)
    static void SetScaleAtSplinePoint(USplineComponent* Target, int32 PointIndex, const FVector& Scale);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverrideLightmapResolutionEditorOnly(UStaticMeshComponent* Mesh, bool OverrideOn, int32 LightmapRes);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverrideConstructionScript(USplineComponent* Target, bool bOverrideConstructionScript);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsEditorOnlyEditorOnly(UActorComponent* ActorComponent, bool IsEditorOnly);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDominationGroupToDefault(const UObject* WorldContextObject, UPrimitiveComponent* Primitive);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDominationGroupToBeDominatedBySackboy(const UObject* WorldContextObject, UPrimitiveComponent* Primitive);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDominationGroupToAlwaysDominated(const UObject* WorldContextObject, UPrimitiveComponent* Primitive);
    
    UFUNCTION(BlueprintCallable)
    static void SetComponentMobilityEditorOnly(USceneComponent* component, TEnumAsByte<EComponentMobility::Type> Mobility);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAndEnableFullQualityDOF();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RetryLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void RestoreDOFSettings();
    
    UFUNCTION(BlueprintCallable)
    static UTextureCube* RenderTargetCreateStaticTextureCubeEditorOnly(UTextureRenderTargetCube* RenderTarget, const FString& InName, UObject* Owner);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* RenderTargetCopyToOrCreateStaticTexture2DEditorOnly(UTextureRenderTarget2D* RenderTarget, const FString& InName, TEnumAsByte<TextureCompressionSettings> CompressionSettings, TEnumAsByte<TextureMipGenSettings> MipSettings, bool SetSRGB, int32 MaxTextureSize);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrintWorldActorInfo(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void PrintArchetypeName(const UObject* Object, FString& ArchetypeName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> PasteActorsFromString(UPARAM(Ref) FString& String);
    
    UFUNCTION(BlueprintCallable)
    static FHitPointContactData MakeContactData(AActor* SourceActor, const FVector& modificationPos, const FVector& modificationNormal);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoadLevel(const UObject* WorldContextObject, FName LevelName, FName SpawnPointName, bool disableLevelIntroSequence);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LaunchDemoNeedFourLevels(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidSectionName(const UAnimMontage* Montage, const FName sectionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUsingHitPointsSystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsURTest();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSplineToolUpdatingAllowed();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsRideonLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPIERunning();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsNetworkSessionRunningOrBeingCreated(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLoomIntroAlwaysEnabled();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsLaunchDemo(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInNetworkSession(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDebugEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCreatedInConstructionScript(const UActorComponent* component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCooking();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetViewProjectionMatrix(const UObject* WorldContextObject, FMatrix& ViewProjectionMatrix, ECameraSettingsType CameraSettingsType);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetURTestVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetTableIdAndKeyFromText(FText Text, FName& OutTableId, FString& OutKey);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ARideOnVehicle* GetRideonVehicle(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetOwnerEvenIfPendingDestroy(const UActorComponent* ActorComponent);
    
    UFUNCTION(BlueprintCallable)
    static FString GetLongPackageNameFromSoftObject(const FSoftObjectPath& SoftObject);
    
    UFUNCTION(BlueprintCallable)
    static FSoftObjectPath GetLaunchDemoFrontendMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetFrameCounter(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetComponentCollisionsAtLocation(UPrimitiveComponent* component, const FVector& Location, const FRotator& Rotation, TArray<FHitResult>& hits, bool& blocking_hit, bool ignore_overlaps);
    
    UFUNCTION(BlueprintCallable)
    static FString GetActorLevelName(const AActor* Actor, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    ULevel* GetActorLevel(UPARAM(Ref) AActor*& Actor);
    
    UFUNCTION(BlueprintCallable)
    static void GenerateComponentCollisionHitEvents(UPrimitiveComponent* component);
    
    UFUNCTION(BlueprintCallable)
    static void ForceUpdateTextureCubeResourceEditorOnly(UTextureCube* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* FindRootActor(const USceneComponent* component);
    
    UFUNCTION(BlueprintCallable)
    static bool DuplicateSplineKeys(const USplineComponent* Source, USplineComponent* Target, TEnumAsByte<ESplineCoordinateSpace::Type> Space);
    
    UFUNCTION(BlueprintCallable)
    static bool DuplicateSplineKey(const USplineComponent* Source, int32 source_key, USplineComponent* Target, int32 target_key, TEnumAsByte<ESplineCoordinateSpace::Type> Space);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawLine(const UObject* WorldContextObject, const FVector& From, const FVector& To, FColor Color, float Width, float Time, bool persistant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool DisableCutscenesInEditor(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool DisableCutscenes(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyAllActorsInSubLevel(ULevelStreaming* TargetSubLevel);
    
    UFUNCTION(BlueprintCallable)
    static void DebugPausePIE();
    
    UFUNCTION(BlueprintCallable)
    static FString CopySelectedActorsToString(UPARAM(Ref) ULevel*& OwningLevel);
    
    UFUNCTION(BlueprintCallable)
    static FString CopyActorsToString(UPARAM(Ref) ULevel*& OwningLevel, const TArray<AActor*>& ActorToCopy);
    
    UFUNCTION(BlueprintCallable)
    static void CallConstruction(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalculateLaunchSpeed(const FVector& Origin, const FVector& Target, float angle_degrees, float Gravity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Box2DIntersection(const FBox2D& A, const FBox2D& B);
    
};

