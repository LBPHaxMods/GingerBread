#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ShowOnFocusComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UShowOnFocusComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PrimitiveNames;
    
    UShowOnFocusComponent(const FObjectInitializer& ObjectInitializer);

};

