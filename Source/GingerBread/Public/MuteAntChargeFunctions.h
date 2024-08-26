#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MuteAntGroupChargeElement.h"
#include "MuteAntChargeFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class UMuteAntChargeFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMuteAntChargeFunctions();

    UFUNCTION(BlueprintCallable)
    static void FilterActorsForSelection(TArray<AActor*> unfiltered_actors, TArray<AActor*>& filtered_actors, const FVector target_location, const int32 minimum_actors, const int32 maximum_actors, const float chain_reaction_range, const float additional_members_range, const float minimum_target_range, const float maximum_target_range);
    
    UFUNCTION(BlueprintCallable)
    static void ComputeFormation(const TArray<AActor*>& Actors, const FVector& target_location, const int32 odd_line_element_count, const int32 even_line_element_count, TArray<FMuteAntGroupChargeElement>& formation, int32& out_row_count, FVector& out_average_location);
    
};

