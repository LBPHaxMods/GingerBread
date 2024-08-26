#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "RegistrationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API URegistrationComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    URegistrationComponent(const FObjectInitializer& ObjectInitializer);

};

