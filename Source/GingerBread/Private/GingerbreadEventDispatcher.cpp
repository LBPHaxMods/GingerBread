#include "GingerbreadEventDispatcher.h"

AGingerbreadEventDispatcher::AGingerbreadEventDispatcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AGingerbreadEventDispatcher::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer) {
}

void AGingerbreadEventDispatcher::NotifyTutorialEngageWithToyEvent(ASackboy* Sackboy, bool isVehicle) {
}

void AGingerbreadEventDispatcher::NotifyTutorialEngageWithSnowballEvent(ASackboy* Sackboy, bool isVehicle) {
}

void AGingerbreadEventDispatcher::NotifyTutorialDisengageWithToyEvent(ASackboy* Sackboy, bool isVehicle) {
}

void AGingerbreadEventDispatcher::NotifyTutorialDisengageWithSnowballEvent(ASackboy* Sackboy, bool isVehicle) {
}

void AGingerbreadEventDispatcher::NotifyTiltPlatformEnd(ASackboy* Sackboy) {
}

void AGingerbreadEventDispatcher::NotifyTiltPlatformBegin(ASackboy* Sackboy) {
}

void AGingerbreadEventDispatcher::NotifyBlastersHitMe_Deprecated(AActor* hit_actor, UPrimitiveComponent* hit_collider, ASackboy* Sackboy, const FVector& impact_position, const FVector& impact_normal) {
}

AGingerbreadEventDispatcher* AGingerbreadEventDispatcher::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

void AGingerbreadEventDispatcher::BroadcastSackboySpawned(ASackboy* Sackboy, TEnumAsByte<ESackboySpawnType> spawn_type, USpawnPointComponent* spawn_point) {
}

void AGingerbreadEventDispatcher::BroadcastSackboyDied(ASackboy* Sackboy) {
}


