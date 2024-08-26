#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AIJumpTurnLibrary.generated.h"

class AAIController;
class AGingerbreadAICharacter;
class APawn;
class UGBCharacterMovementComponent;
class UObject;

UCLASS(Blueprintable)
class UAIJumpTurnLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAIJumpTurnLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetupTurnUsingRotator(AAIController* Controller, UGBCharacterMovementComponent* MovementComponent, FRotator TargetRotation);
    
    UFUNCTION(BlueprintCallable)
    static FRotator SetupTurnUsingLocation(APawn* Pawn, AAIController* Controller, UGBCharacterMovementComponent* MovementComponent, FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool ProjectJumpLocationToNavMesh(UObject* WorldContext, APawn* Pawn, AAIController* Controller, UGBCharacterMovementComponent* MovementComponent, FVector jumpAimAtPoint, FVector jumpTargetLocation, FVector& ProjectedLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsFacingTarget(APawn* Pawn, FRotator TargetRotation, float Tolerance, bool& NewIsFacingTarget, float& yawBetween);
    
    UFUNCTION(BlueprintCallable)
    static void CleanupTurn(UGBCharacterMovementComponent* MovementComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static void CalculateJumpLocationWithNavigation(UObject* WorldContext, AGingerbreadAICharacter* AIChar, AAIController* Controller, UGBCharacterMovementComponent* MovementComponent, FVector jumpAimAtPoint, float jumpDistance, FVector& jumpLocation, float wallNudgeAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector CalculateJumpLocation(APawn* Pawn, FVector jumpAimAtPoint, float jumpDistance);
    
};

