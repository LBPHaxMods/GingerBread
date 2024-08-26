#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InOrderMeshDisplayer.generated.h"

class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UInOrderMeshDisplayer : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> Meshes;
    
    UInOrderMeshDisplayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpTo(int32 Index, bool Visibility);
    
    UFUNCTION(BlueprintCallable)
    void Specific(int32 Index, bool Visibility);
    
    UFUNCTION(BlueprintCallable)
    void DownTo(int32 Index, bool Visibility);
    
};

