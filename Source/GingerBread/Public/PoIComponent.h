#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "POI_Data.h"
#include "RegistrationComponent.h"
#include "PoIComponent.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UPoIComponent : public URegistrationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableVisibilityChecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateOnBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMovable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLineOfSightCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPOI_Data POIData;
    
    UPoIComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnPOI(UObject* WorldContextObject, UClass* SpawnObj, const FVector& Location, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetTag(const FName& poiTag);
    
    UFUNCTION(BlueprintCallable)
    void SetPOIActive(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPOIActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float Importance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CompareTag(const FName& compTag) const;
    
};

