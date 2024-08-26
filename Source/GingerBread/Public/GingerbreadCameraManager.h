#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Scene.h"
#include "EPriorityBehaviour.h"
#include "GingerbreadManager.h"
#include "Templates/SubclassOf.h"
#include "GingerbreadCameraManager.generated.h"

class ACameraArea;
class ACameraColliderActor;
class AGingerbreadCameraManager;
class ASingleScreenCamera;
class UGingerbreadCameraModifier;
class UObject;
class UWorld;

UCLASS(Blueprintable)
class GINGERBREAD_API AGingerbreadCameraManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraArea* ActiveArea;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGingerbreadCameraModifier*> ModifierList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPostProcessSettings> PostProcessBlendCache;
    
public:
    AGingerbreadCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void UnregisterPointOfInterest(UObject* point_of_interest);
    
    UFUNCTION(BlueprintCallable)
    static void UnregisterGlobalConstraint(const ACameraColliderActor* Collider);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterCameraArea(ACameraArea* Area);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool Sumo_RemoveCameraModifier(const UObject* WorldContextObject, UGingerbreadCameraModifier* ModifierToRemove);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Sumo_RemoveAllCameraModifiers(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGingerbreadCameraModifier* Sumo_AddNewCameraModifier(const UObject* WorldContextObject, TSubclassOf<UGingerbreadCameraModifier> ModifierClass);
    
    UFUNCTION(BlueprintCallable)
    void StartLevelTransition(float Duration, bool fade_out);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterPointOfInterest(UObject* point_of_interest);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterGlobalConstraint(const ACameraColliderActor* Collider);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCameraArea(ACameraArea* Area);
    
    UFUNCTION(BlueprintCallable)
    static AGingerbreadCameraManager* GetInstance(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    ACameraArea* GetCameraArea(const FVector& FocusPoint, float& Distance, TEnumAsByte<EPriorityBehaviour::Type> Filter, ACameraColliderActor*& area_collider);
    
    UFUNCTION(BlueprintCallable)
    static ASingleScreenCamera* GetActiveCamera(const UObject* world_context);
    
};

