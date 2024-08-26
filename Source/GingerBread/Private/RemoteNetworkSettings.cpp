#include "RemoteNetworkSettings.h"

FRemoteNetworkSettings::FRemoteNetworkSettings() {
    this->MatchmakingMaxSearchTimeSecs = 0.00f;
    this->MatchmakingSearchPhaseProgressionIncPct = 0;
    this->MatchmakingSearchMaxPingMs = 0;
    this->MatchmakingSearchMinPingMs = 0;
    this->ExcellentConnectionPingMaxMs = 0;
    this->GoodConnectionPingMaxMs = 0;
    this->AverageConnectionPingMaxMs = 0;
    this->PoorConnectionPingMaxMs = 0;
    this->QoSPingLimitPublicMs = 0;
    this->QoSPingLimitPrivateMs = 0;
    this->BadQoSPingTimeoutSecs = 0.00f;
}

