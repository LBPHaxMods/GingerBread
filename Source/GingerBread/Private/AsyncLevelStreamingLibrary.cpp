#include "AsyncLevelStreamingLibrary.h"

UAsyncLevelStreamingLibrary::UAsyncLevelStreamingLibrary() {
}

void UAsyncLevelStreamingLibrary::PrepareStream(const UObject* WorldContextObject, const FName& level_name) {
}

void UAsyncLevelStreamingLibrary::PrepareAndCommitStream(const UObject* WorldContextObject, const FName& level_name, bool block_on_load) {
}

bool UAsyncLevelStreamingLibrary::IsStreamLevelLoaded(const UObject* WorldContextObject, const FName& level_name) {
    return false;
}

bool UAsyncLevelStreamingLibrary::CommitStreamIfLoaded(const UObject* WorldContextObject, const FName& level_name) {
    return false;
}

void UAsyncLevelStreamingLibrary::CommitStream(const UObject* WorldContextObject, const FName& level_name) {
}


