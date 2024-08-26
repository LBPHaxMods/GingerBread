#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LifeSpanReceiver.generated.h"

UINTERFACE()
class GINGERBREAD_API ULifeSpanReceiver : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API ILifeSpanReceiver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void SetBrokenPartLifeSpan(float LifeSpan) PURE_VIRTUAL(SetBrokenPartLifeSpan,);
    
};

