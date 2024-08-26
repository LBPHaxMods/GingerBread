#include "NetworkFunctionLibrary.h"

UNetworkFunctionLibrary::UNetworkFunctionLibrary() {
}

FVector_NetQuantizeNormal UNetworkFunctionLibrary::VectorToNetQuantizeNormal(const FVector& Vector) {
    return FVector_NetQuantizeNormal{};
}

FVector_NetQuantize100 UNetworkFunctionLibrary::VectorToNetQuantize100(const FVector& Vector) {
    return FVector_NetQuantize100{};
}

FVector_NetQuantize10 UNetworkFunctionLibrary::VectorToNetQuantize10(const FVector& Vector) {
    return FVector_NetQuantize10{};
}

FVector_NetQuantize UNetworkFunctionLibrary::VectorToNetQuantize(const FVector& Vector) {
    return FVector_NetQuantize{};
}

void UNetworkFunctionLibrary::UnpackPosition_NetToComponent(FPosition_Net Position, UPrimitiveComponent* Primitive) {
}

void UNetworkFunctionLibrary::ProcessServerTriggerTimestamp(const AActor* LevelActor, const float Timestamp, EServerTriggerState& TriggerState) {
}

FPosition_Net UNetworkFunctionLibrary::PackPosition_NetFromComponent(UPrimitiveComponent* Primitive) {
    return FPosition_Net{};
}

float UNetworkFunctionLibrary::GetServerTriggerTimestamp(const AActor* LevelActor) {
    return 0.0f;
}

float UNetworkFunctionLibrary::GetProcessServerTriggerRetryDelay() {
    return 0.0f;
}


