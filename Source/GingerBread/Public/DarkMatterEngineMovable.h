#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DarkMatterEngineInfo.h"
#include "DarkMatterEngineMovable.generated.h"

UINTERFACE(Blueprintable)
class GINGERBREAD_API UDarkMatterEngineMovable : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API IDarkMatterEngineMovable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetDarkMatterEngineInfo(FDarkMatterEngineInfo& Info) const;
    
};

