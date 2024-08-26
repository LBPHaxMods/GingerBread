#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JointProxyBody.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API AJointProxyBody : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Primitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Creator;
    
public:
    AJointProxyBody(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCreator() const;
    
};

