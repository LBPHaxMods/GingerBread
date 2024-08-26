#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HitPointsModifierTableRow.h"
#include "HitPointsHelperFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UHitPointsHelperFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHitPointsHelperFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWater(const FHitPointsModifierTableRow& tableRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSackboyThrownObject(const FHitPointsModifierTableRow& tableRow, bool& isHeavyObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSackboySlap(const FHitPointsModifierTableRow& tableRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDeathPlane(const FHitPointsModifierTableRow& tableRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBlastersProjectile(const FHitPointsModifierTableRow& tableRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBlastersHeadStomp(const FHitPointsModifierTableRow& tableRow);
    
};

