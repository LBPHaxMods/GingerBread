#pragma once
#include "CoreMinimal.h"
#include "Navigation/NavLinkProxy.h"
#include "GBNavLinkProxy.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API AGBNavLinkProxy : public ANavLinkProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinksPerCM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugLinkGeneration;
    
    AGBNavLinkProxy(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void GenerateLinks();
    
};

