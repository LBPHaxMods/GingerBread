#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERhythmicBeatRangeOverlapPreference.h"
#include "RhythmicBeatRange.h"
#include "RhythmFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API URhythmFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URhythmFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SortBeatRangesInplace(UPARAM(Ref) TArray<FRhythmicBeatRange>& Array);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void SortBeatRangesCopy(const TArray<FRhythmicBeatRange>& inArray, TArray<FRhythmicBeatRange>& OutArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRhythmicBeatRange MakeRhythmicBeatRange(const float Start, const float end, const uint8 UserData, const int32 LoopPeriod);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FRhythmicBeatRange> MakeBeatRangesFromBeatsAndDurations(const TArray<float>& Beats, const TArray<float>& Durations, const int32 LoopPeriod, const uint8 UserData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FRhythmicBeatRange> MakeBeatRangesFromBeats(const TArray<float>& Beats, const int32 LoopPeriod, const uint8 UserData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBeatWithinBeatRange(const FRhythmicBeatRange& BeatRange, const float Beat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetUserDataAtBeat(const TArray<FRhythmicBeatRange>& BeatRanges, const float Beat, uint8& UserData, const TEnumAsByte<ERhythmicBeatRangeOverlapPreference::Type> OverlapPreference);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBeatRangeAtBeat(const TArray<FRhythmicBeatRange>& BeatRanges, const float Beat, FRhythmicBeatRange& FoundBeatRange, const TEnumAsByte<ERhythmicBeatRangeOverlapPreference::Type> OverlapPreference);
    
};

