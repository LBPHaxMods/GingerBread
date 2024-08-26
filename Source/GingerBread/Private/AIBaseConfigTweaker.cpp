#include "AIBaseConfigTweaker.h"
#include "Templates/SubclassOf.h"

UAIBaseConfigTweaker::UAIBaseConfigTweaker() {
}

UAIConfigBase* UAIBaseConfigTweaker::GetAIConfig(TSubclassOf<UAIConfigBase> config_type) {
    return NULL;
}


