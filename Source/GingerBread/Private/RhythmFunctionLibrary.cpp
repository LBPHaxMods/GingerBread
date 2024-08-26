#include "RhythmFunctionLibrary.h"

URhythmFunctionLibrary::URhythmFunctionLibrary() {
}

void URhythmFunctionLibrary::SortBeatRangesInplace(TArray<FRhythmicBeatRange>& Array) {
}

void URhythmFunctionLibrary::SortBeatRangesCopy(const TArray<FRhythmicBeatRange>& inArray, TArray<FRhythmicBeatRange>& OutArray) {
}

FRhythmicBeatRange URhythmFunctionLibrary::MakeRhythmicBeatRange(const float Start, const float end, const uint8 UserData, const int32 LoopPeriod) {
    return FRhythmicBeatRange{};
}

TArray<FRhythmicBeatRange> URhythmFunctionLibrary::MakeBeatRangesFromBeatsAndDurations(const TArray<float>& Beats, const TArray<float>& Durations, const int32 LoopPeriod, const uint8 UserData) {
    return TArray<FRhythmicBeatRange>();
}

TArray<FRhythmicBeatRange> URhythmFunctionLibrary::MakeBeatRangesFromBeats(const TArray<float>& Beats, const int32 LoopPeriod, const uint8 UserData) {
    return TArray<FRhythmicBeatRange>();
}

bool URhythmFunctionLibrary::IsBeatWithinBeatRange(const FRhythmicBeatRange& BeatRange, const float Beat) {
    return false;
}

bool URhythmFunctionLibrary::GetUserDataAtBeat(const TArray<FRhythmicBeatRange>& BeatRanges, const float Beat, uint8& UserData, const TEnumAsByte<ERhythmicBeatRangeOverlapPreference::Type> OverlapPreference) {
    return false;
}

bool URhythmFunctionLibrary::GetBeatRangeAtBeat(const TArray<FRhythmicBeatRange>& BeatRanges, const float Beat, FRhythmicBeatRange& FoundBeatRange, const TEnumAsByte<ERhythmicBeatRangeOverlapPreference::Type> OverlapPreference) {
    return false;
}


