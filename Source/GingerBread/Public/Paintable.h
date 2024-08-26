#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "Paintable.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class GINGERBREAD_API UPaintable : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API IPaintable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void Paint(FLinearColor ColourToPaint) PURE_VIRTUAL(Paint,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsPainted() PURE_VIRTUAL(IsPainted, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FLinearColor GetColour() PURE_VIRTUAL(GetColour, return FLinearColor{};);
    
    UFUNCTION(BlueprintCallable)
    virtual void Clean() PURE_VIRTUAL(Clean,);
    
};

