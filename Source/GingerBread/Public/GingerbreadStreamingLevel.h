#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EObjectValidity.h"
#include "GingerbreadStreamingLevelEventDelegate.h"
#include "GingerbreadStreamingLevel.generated.h"

class UGingerbreadStreamingLevel;
class ULevelStreamingDynamic;

UCLASS(Blueprintable)
class UGingerbreadStreamingLevel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGingerbreadStreamingLevelEvent OnLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGingerbreadStreamingLevelEvent OnUnloaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGingerbreadStreamingLevelEvent OnActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGingerbreadStreamingLevelEvent OnDeactivated;
    
    UGingerbreadStreamingLevel();

    UFUNCTION(BlueprintCallable)
    bool Unload(bool bBlockingUnload);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLevelUnloaded();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelDeactivated();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelActivated();
    
public:
    UFUNCTION(BlueprintCallable)
    bool Load(bool bActivateOnceLoaded, bool bBlockingLoad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLevelPackageString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetLevelPackageFName() const;
    
    UFUNCTION(BlueprintCallable)
    bool Deactivate(bool bBlockingDeactivation);
    
    UFUNCTION(BlueprintCallable)
    static UGingerbreadStreamingLevel* BP_CreateInstancedFromPackageName(UObject* Outer, FName FullPackageName, FVector LevelLocation, FRotator LevelRotation, EObjectValidity& Out_ObjectValidity);
    
    UFUNCTION(BlueprintCallable)
    static UGingerbreadStreamingLevel* BP_CreateFromPackageName(UObject* Outer, FName FullPackageName, EObjectValidity& Out_ObjectValidity);
    
    UFUNCTION(BlueprintCallable)
    static UGingerbreadStreamingLevel* BP_CreateFromObject(UObject* Outer, ULevelStreamingDynamic* StreamingLevel, EObjectValidity& Out_ObjectValidity);
    
    UFUNCTION(BlueprintCallable)
    bool Activate(bool bBlockingActivation);
    
};

